open ReactUtils;

[@react.component]
let make = () => {
  let (user, _) = UserContext.useUser();
  let isLoggedIn =
    switch (user) {
    | LoggedIn(_string) => true
    | Anonymous => false
    };
  <div className="section is-fullheignt">
    <div className="container">
      <div className="column is-6 is-offset-4">
        <h1 className="is-size-2 has-text-centered">
          {s("Reason Music Player")}
        </h1>
        <br />
        <Header />
        {!isLoggedIn
           ? <div>
               <span className="user-message">
                 {React.string("Sneaky, you are browsing anonymously!")}
                 <br />
                 {React.string("Sign in to see the track list.")}
               </span>
             </div>
           : <div>
               <MusicPlayer> <TrackList /> <PlayerControls /> </MusicPlayer>
             </div>}
      </div>
    </div>
  </div>;
};