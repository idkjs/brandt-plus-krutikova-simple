  type t;
  [@bs.module "aws-amplify"] [@bs.new] external logger: t = "Logger";
  let logger = logger;
  type payload = {
    .
    "event": string,
    "data": option(Js.t({.})),
    "message": option(string),
  };
  type info = {. [@bs.meth] "onHubCapsule": (t, unit, payload) => unit};
  [@bs.val] external info: info = "info";
  let info = () => info##onHubCapsule;