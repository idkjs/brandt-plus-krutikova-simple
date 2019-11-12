open ReactUtils;

[@react.component]
let make = () => {
  let (user, dispatch) = UserContext.useUser();
  let (username, setUsername) = React.useState(() => "musiclover");
  let (password, setPassword) = React.useState(() => "Password12345@");
  let handleSignin = () =>
    Js.Promise.(
      Amplify.signIn(~username, ~password)
      |> then_(res => {
           //  Js.log2("res", res);
           // this is bad, i think, because we aren't handling errors. We know, for purposes of the example, that the username is at the `username` key so let's go with it.
           let username = res##username;

           Js.log("sign in success!");
           dispatch(UserLoggedIn(username));
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
  let handleSignOut = () => {
    Amplify.signOut();
    dispatch(UserLoggedOut);
    Js.log("signing out!");
    /* test if user is logged out because you can still log the user after logging out. Running currentAuthenticated user shows that we are logged out so why is `user` logging out below?*/
    Amplify.currentAuthenticatedUser
    |> Js.Promise.then_(data => {
         Js.log2("data", data);
         Js.Promise.resolve(data);
       })
    |> Js.Promise.catch(error => Js.log2("error", error)->Js.Promise.resolve)
    |> Js.Promise.resolve
    |> ignore;
    /* user still logs after logging out. Why? */
    Js.log2("signing out user!",user);
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
  | LoggedIn(userName) =>
    <div className="user-form">
      <span className="logged-in">
        {s("Logged in as: ")}
        <b> {s(userName)} </b>
      </span>
      <div className="control">
        <button className="button is-link" onClick={_ => handleSignOut()}>
          {s("Log Out")}
        </button>
      </div>
    </div>
  };
};