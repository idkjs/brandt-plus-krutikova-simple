// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as $$Array from "bs-platform/lib/es6/array.js";
import * as Curry from "bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as UseMusicPlayer from "./UseMusicPlayer.bs.js";

function TrackList(Props) {
  var match = UseMusicPlayer.useMusicPlayer(/* () */0);
  var playTrack = match[4];
  var playing = match[0];
  return React.createElement(React.Fragment, undefined, $$Array.mapi((function (index, track) {
                    var tmp;
                    if (playing) {
                      var match = playing[0] === index;
                      tmp = match ? React.createElement("i", {
                              className: "fas fa-pause"
                            }) : React.createElement("i", {
                              className: "fas fa-play"
                            });
                    } else {
                      tmp = React.createElement("i", {
                            className: "fas fa-play"
                          });
                    }
                    return React.createElement("div", {
                                key: String(index),
                                className: "box"
                              }, React.createElement("div", {
                                    className: "columns is-vcentered"
                                  }, React.createElement("button", {
                                        className: "button",
                                        onClick: (function (param) {
                                            return Curry._1(playTrack, index);
                                          })
                                      }, tmp), React.createElement("div", {
                                        className: "song-title column"
                                      }, track[/* name */0])));
                  }), match[1]));
}

var make = TrackList;

export {
  make ,
  
}
/* react Not a pure module */
