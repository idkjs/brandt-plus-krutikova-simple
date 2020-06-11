// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";
import * as Header from "./auth/Header.bs.js";
import * as TrackList from "./TrackList.bs.js";
import * as MusicPlayer from "./MusicPlayer.bs.js";
import * as UserContext from "./auth/UserContext.bs.js";
import * as PlayerControls from "./PlayerControls.bs.js";

function App(Props) {
  var match = UserContext.useUser(undefined);
  var isLoggedIn = match[0] ? true : false;
  return React.createElement("div", {
              className: "section is-fullheignt"
            }, React.createElement("div", {
                  className: "container"
                }, React.createElement("div", {
                      className: "column is-6 is-offset-4"
                    }, React.createElement("h1", {
                          className: "is-size-2 has-text-centered"
                        }, "Reason Music Player"), React.createElement("br", undefined), React.createElement(Header.make, {}), isLoggedIn ? React.createElement("div", undefined, React.createElement(MusicPlayer.make, {
                                children: null
                              }, React.createElement(TrackList.make, {}), React.createElement(PlayerControls.make, {}))) : React.createElement("div", undefined, React.createElement("span", {
                                className: "user-message"
                              }, "Sneaky, you are browsing anonymously!", React.createElement("br", undefined), "Sign in to see the track list.")))));
}

var make = App;

export {
  make ,
  
}
/* react Not a pure module */
