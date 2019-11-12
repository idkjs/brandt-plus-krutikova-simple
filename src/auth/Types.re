type userData = {
  isLoggedIn: bool,
  username: option(string),
};

type user =
  | Anonymous
  | LoggedIn(userData);

type userAction =
  | UserLoggedIn(userData)
  | UserLoggedOut;

type userResponse = {
  username: string,
};

let userfromJs: Js.t('a) => userResponse =
  data => {
    username: data##username,
  };