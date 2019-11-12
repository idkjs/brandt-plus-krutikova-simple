// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";
import * as TrackList from "../TrackList.bs.js";
import * as AuthControl from "./AuthControl.bs.js";
import * as MusicPlayer from "../MusicPlayer.bs.js";
import * as UserContext from "./UserContext.bs.js";
import * as PlayerControls from "../PlayerControls.bs.js";

function Home(Props) {
  var match = UserContext.useUser(/* () */0);
  var isLoggedIn = match[0] ? true : false;
  var match$1 = !isLoggedIn;
  return React.createElement("div", {
              className: "section is-fullheignt"
            }, React.createElement("div", {
                  className: "container"
                }, React.createElement("div", {
                      className: "column is-6 is-offset-4"
                    }, React.createElement("h1", {
                          className: "is-size-2 has-text-centered"
                        }, "Reason Music Player"), React.createElement("br", undefined), match$1 ? React.createElement("div", undefined, React.createElement("span", {
                                className: "user-message"
                              }, "Sneaky, you are browsing anonymously!", React.createElement("br", undefined), "Sign in to see the track list."), React.createElement(AuthControl.make, { })) : React.createElement("div", undefined, React.createElement(AuthControl.make, { }), React.createElement(MusicPlayer.make, {
                                children: null
                              }, React.createElement(TrackList.make, { }), React.createElement(PlayerControls.make, { }))))));
}

var make = Home;

export {
  make ,
  
}
/* react Not a pure module */
