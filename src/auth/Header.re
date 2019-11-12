open ReactUtils;

[@react.component]
let make = () => {
  let (user, dispatch) = UserContext.useUser();
  let (username, setUsername) = React.useState(() => "musiclover");
  let (password, setPassword) = React.useState(() => "Password12345@");
  let handleSignin = () =>
    Js.Promise.(
      Auth.signIn(~username, ~password)
      |> then_(res => {
           Js.log2("res", res);
           let user = res->Types.userfromJs;
           let userData: Types.userData = {
             isLoggedIn: true,
             username: Some(user.username),
           };

           Js.log("sign in success!");
           Js.log(userData);
           dispatch(UserLoggedIn(userData));
           resolve();
         })
      |> catch(err => {
           Js.log(err);
           let errMsg = "error signing in.." ++ Js.String.make(err);
           Js.log(errMsg);
           resolve();
         })
      |> ignore
    );
  let handleLogout = () => {

    dispatch(UserLoggedOut);
    Js.log("signing out!");
  };

  switch (user) {
  | Anonymous =>
    <form
      className="user-form"
      onSubmit={e => {
        ReactEvent.Form.preventDefault(e);
        handleSignin();
      }}>
      <div className="field">
        <label className="label"> "Username"->React.string </label>
        <div className="control has-icons-left has-icons-right">
          <input
            className="input is-success"
            type_="text"
            placeholder="User name"
            value=username
            onChange={e => {
              let value = ReactEvent.Form.target(e)##value;
              setUsername(_ => value);
            }}
          />
          <span className="icon is-small is-left">
            <i className="fas fa-user" />
          </span>
          <span className="icon is-small is-right">
            <i className="fas fa-check" />
          </span>
        </div>
        <p className="help is-success">
          "This username is available"->React.string
        </p>
      </div>
      <div className="field">
        <label className="label"> "Password"->React.string </label>
        <div className="control has-icons-left has-icons-right">
          <input
            className="input is-success"
            type_="text"
            placeholder="Password"
            value=password
            onChange={e => {
              let value = ReactEvent.Form.target(e)##value;
              setPassword(_ => value);
            }}
          />
          <span className="icon is-small is-left">
            <i className="fas fa-user" />
          </span>
          <span className="icon is-small is-right">
            <i className="fas fa-check" />
          </span>
        </div>
      </div>
      <div className="control">
        <button type_="submit" className="button is-link">
          {s("Log in")}
        </button>
      </div>
    </form>
  | LoggedIn(userData) =>
    let name =userData.username
      ->Belt.Option.getWithDefault("");
    <div className="user-form">
      <span className="logged-in">
        {s("Logged in as: ")}
        <b> {s(name)} </b>
      </span>
      <div className="control">
        <button className="button is-link" onClick={_ => handleLogout()}>
          {s("Log Out")}
        </button>
      </div>
    </div>;
  };
};