// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";

function initValue_1(param) {
  
}

var initValue = [
  /* Anonymous */0,
  initValue_1
];

var context = React.createContext(initValue);

function makeProps(value, children, param) {
  return {
          value: value,
          children: children
        };
}

var make = context.Provider;

var Provider = {
  makeProps: makeProps,
  make: make
};

function useUser(param) {
  return React.useContext(context);
}

export {
  initValue ,
  context ,
  Provider ,
  useUser ,
  
}
/* context Not a pure module */
