type t;
[@bs.module "aws-amplify"] external amplify: t = "default";
type config;
[@bs.module "../aws-exports.js"] external awsConfig: config = "default";

[@bs.send] external _configure: (t, config) => unit = "configure";
let configure = () => _configure(amplify, awsConfig);
