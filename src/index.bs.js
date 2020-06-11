// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as Root from "./Root.bs.js";
import * as React from "react";
import * as ReactDOMRe from "reason-react/src/legacy/ReactDOMRe.bs.js";
import * as ServiceWorker from "./serviceWorker";
import * as IndexModuleCss from "./index.module.css";

var _css = IndexModuleCss;

function register_service_worker(prim) {
  ServiceWorker.register();
  
}

function unregister_service_worker(prim) {
  ServiceWorker.unregister();
  
}

ReactDOMRe.renderToElementWithId(React.createElement(Root.make, {}), "root");

ServiceWorker.unregister();

export {
  _css ,
  register_service_worker ,
  unregister_service_worker ,
  
}
/* _css Not a pure module */
