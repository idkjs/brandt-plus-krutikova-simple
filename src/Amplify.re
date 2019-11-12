type t;
// from https://github.com/pckilgore/bs-biginteger/blob/master/src/BigInteger.re
// What is `type t`?

//  It is a ocaml convention for "the type of this module".  So if the module was
//  named "Fish", `type t` would be the fish.  We could just as easily call it
//  anything else, even `type fish`, but then we'd be referring to it as
//  `Fish.fish` which seems silly, right? So we call it `type t` and refer to it
//  as `Fish.t` and by convention know `t` means the module's type.

//  A ReasonML module is a type packaged with its behavior.  In this way, it is
//  similar to an Object-Oriented language's concept of `class`.

//  So here, `type t` is the BigInteger data structure, packaged with the methods
//  we can to operate on that type.

//  Because we don't really know (or, honestly, care) about _how_ the BigInteger
//  library implements the BigInteger type, we just declare it here, which means
//  it is an "abstract type", which I always think of as, "a type that must be
//  used consistently by the functions that operate on it, but for which the
//  particular implementation of the type and those functions are assumed to be
//  correct".

//  See below around the definition of `external abs` for an example of a
//  non-abstract type t.
//
/***/
[@bs.module "aws-amplify"] external amplify: t = "default";

type config;
[@bs.module "./aws-exports.js"] external awsConfig: config = "default";

[@bs.send] external _configure: (t, config) => unit = "configure";

/* assigning Amplify Auth object as type auth */
type auth;
[@bs.module "aws-amplify"] external auth: auth = "Auth";

[@bs.send] external _signOut: (auth, unit) => unit = "configure";
[@bs.send]
external _currentAuthenticatedUser: (auth, unit) => Js.Promise.t('a) =
  "currentAuthenticatedUser";

[@bs.send]
external _signIn:
  (auth, ~username: string, ~password: string, unit) => Js.Promise.t('a) =
  "signIn";

[@bs.send]
external _signUp:
  (auth, ~username: string, ~password: string, ~attributes: 'a) =>
  Js.Promise.t('a) =
  "signUp";

[@bs.send]
external _confirmSignUp:
  (auth, ~username: string, ~confirmationCode: string) => Js.Promise.t('a) =
  "confirmSignUp";

[@bs.send]
external _forgotPassword: (auth, ~username: string) => Js.Promise.t('a) =
  "forgotPassword";

[@bs.send]
external _forgotPasswordSubmit:
  (auth, ~username: string, ~confirmationCode: string, ~password: string) =>
  Js.Promise.t('a) =
  "forgotPasswordSubmit";
[@bs.send]
external _currentUserPoolUser: (auth, ~userPoolId: string) => Js.Promise.t('a) =
  "currentUserPoolUser";

let currentUserPoolUser = (~userPoolId: string) =>
  _currentUserPoolUser(auth, ~userPoolId)
  |> Js.Promise.then_(res => Js.Promise.resolve(res));

let forgotPasswordSubmit = (~username, ~confirmationCode, ~password) =>
  _forgotPasswordSubmit(auth, ~username, ~confirmationCode, ~password)
  |> Js.Promise.then_(res => Js.Promise.resolve(res));

let forgotPassword = (~username) =>
  _forgotPassword(auth, ~username)
  |> Js.Promise.then_(res => Js.Promise.resolve(res));

/* a function that calls Amplify's configure with the aws-exports config object */
let configure = () => _configure(amplify, awsConfig);

/* a function that calls Amplify's signOut to sign out our user. This works wether passing auth or amplify as our type t */
let signOut = () => _signOut(auth, ());

/* a function that takes a username and password then calls Amplify's signIn to sign in our user */
let signIn = (~username, ~password) =>
  _signIn(auth, ~username, ~password, ())
  |> Js.Promise.then_(res => Js.Promise.resolve(res));

let currentAuthenticatedUser =
  _currentAuthenticatedUser(auth, ())
  |> Js.Promise.then_(res => Js.Promise.resolve(res));

let confirmSignUp = (~username, ~confirmationCode) =>
  _confirmSignUp(auth, ~username, ~confirmationCode)
  |> Js.Promise.then_(res => Js.Promise.resolve(res));