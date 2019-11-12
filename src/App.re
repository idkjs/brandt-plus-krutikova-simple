// [@bs.module] external css: Js.t({..}) as 'a = "./App.module.css";

/* The snippet below is what we'd like to have, but it doesn't seem to play
 * well with BuckleScript code generation, because we'd need the default
 * export.
 *
 * [@bs.module] external logo: string = "./logo.svg";
 */
open ReactUtils;

[@react.component]
let make = () =>
  <div className="section is-fullheignt">
    <div className="container">
      <div className="column is-6 is-offset-4">
        <h1 className="is-size-2 has-text-centered">
          {s("Reason Music Player")}
        </h1>
        <br />
        <MusicPlayer> <TrackList /> <PlayerControls /> </MusicPlayer>
      </div>
    </div>
  </div>;
