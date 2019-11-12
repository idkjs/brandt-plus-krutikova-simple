<!-- PROJECT SHIELDS -->

[![Contributors][contributors-shield]][contributors-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/idkjs/brandt-plus-krutikova-simple">
    <img src="logo.png" alt="Logo">
  </a>

  <h3 align="center">Reason Music Player + Auth</h3>

  <p align="center">
    A simple music player built with ReasonReact and useContext and useAuthContext
    <br />
    <a href="https://github.com/idkjs/brandt-plus-krutikova-simple"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://idkjs.github.io/brandt-plus-krutikova-simple/">View Demo</a>
    ·
    <a href="https://github.com/idkjs/brandt-plus-krutikova-simple/issues">Report Bug</a>
    ·
    <a href="https://github.com/idkjs/brandt-plus-krutikova-simple/issues">Request Feature</a>
  </p>
</p>

<!-- TABLE OF CONTENTS -->

## Table of Contents

- [About the Project](#about-the-project)
  - [Built With](#built-with)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)
- [Acknowledgements](#acknowledgements)

<!-- ABOUT THE PROJECT -->

## About The Project

> A ReasonReact music player with the React Context API

**☞ [View Demo][demo]**

This is a port of James King's blog post **[How to Use the useContext Hook in React][upmostly]** to ReasonReact.

With this repository you can see my progress in converting a React.js example to **ReasonML and ReasonReact**.

It also serves as a code example for a **tutorial series**. If you want to follow along, you can read the **blog posts on dev.to**:

Via [@hisophiabrandt]

- [How To Create a Music Player in Reason With The useContext Hook Part 1](https://dev.to/sophiabrandt/how-to-create-a-music-player-in-reason-with-the-usecontext-hook-part-1-59dj)
- [How To Create a Music Player in Reason With The useContext Hook Part 2](https://dev.to/sophiabrandt/how-to-create-a-music-player-in-reason-with-the-usecontext-hook-part-2-3f4a)
- [How To Create a Music Player in Reason With The useContext Hook Part 3](https://dev.to/sophiabrandt/how-to-create-a-music-player-in-reason-with-the-usecontext-hook-part-3-2f0g)
- [How To Create a Music Player in Reason With The useContext Hook Part 4](https://dev.to/sophiabrandt/how-to-create-a-music-player-in-reason-with-the-usecontext-hook-part-4-2c9d)

Via [@rita_krutikova]

- [ReasonReact context explained in action](https://dev.to/margaretkrutikova/reason-react-context-explained-in-action-5eki)


### Built With

- [ReasonML](https://reasonml.github.io/)
- [ReasonReact](https://reasonml.github.io/reason-react/)
- [Bulma](https://bulma.io)

<!-- GETTING STARTED -->

## Getting Started

To get a local copy up and running follow these steps:

### Prerequisites

Before using `reason-music-player` you need:
- [Node.js](https://nodejs.org/en/) version 10.16.3 or higher
- [npm](https://www.npmjs.com/get-npm), [yarn](https://yarnpkg.com/), or [pnpm](https://pnpm.js.org/)
- BuckleScript

Install [Bucklescript and Reason](https://reasonml.github.io/docs/en/installation):

```sh
npm install -g bs-platform --unsafe-perm
```
(I use [pnpm](https://pnpm.js.org/) for installing local packages, that's why you'll find a `pnpm-lock.yml` file in this repository.)

For **editor support**, check the [Reason Docs](https://reasonml.github.io/docs/en/editor-plugins).
For Vim, you can check my blog post about [ReasonML Development With Vim](https://www.rockyourcode.com/reason-ml-development-with-vim).

### Installation

1. Clone the repo

```sh
git clone https://github.com/idkjs/brandt-plus-krutikova-simple.git
```

(Alternatively, use [degit](https://github.com/Rich-Harris/degit): `npx degit idkjs/brandt-plus-krutikova-simple brandt-plus-krutikova-simple`).

3. Install NPM packages

```sh
cd brandt-plus-krutikova-simple && npm install
```

<!-- USAGE EXAMPLES -->

## Usage

Run the project locally under `http://localhost:3000` via:

```sh
npm run start
```

Create a production build:

```sh
npm run build
```

<!-- ROADMAP -->

## Roadmap

See the [open issues](https://github.com/idkjs/brandt-plus-krutikova-simple/issues) for a list of proposed features (and known issues).

<!-- CONTRIBUTING -->

## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<!-- LICENSE -->

## License

Distributed under the MIT License. See [`LICENSE`](LICENSE.txt) for more information.

<!-- CONTACT -->

## Contact

Sophia Brandt - [@hisophiabrandt](https://twitter.com/hisophiabrandt)
Alain Armand - [@_idkjs](https://twitter.com/_idkjs)
Margarita Krutikova - [@rita_krutikova](https://twitter.com/rita_krutikova)

Project Link: [https://github.com/idkjs/brandt-plus-krutikova-simple](https://github.com/idkjs/brandt-plus-krutikova-simple)

<!-- ACKNOWLEDGEMENTS -->

## Acknowledgements

- [How to Use the useContext Hook in React][upmostly]
- [Bensound][bensound]
- [Img Shields](https://shields.io)
- [Choose an Open Source License](https://choosealicense.com)
- [Best-README-Template](https://github.com/othneildrew/Best-README-Template/blob/master/README.md)

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/idkjs/brandt-plus-krutikova-simple.svg?style=flat-square
[contributors-url]: https://github.com/idkjs/brandt-plus-krutikova-simple/graphs/contributors
[issues-shield]: https://img.shields.io/github/issues/idkjs/brandt-plus-krutikova-simple.svg?style=flat-square
[issues-url]: https://github.com/idkjs/brandt-plus-krutikova-simple/issues
[license-shield]: https://img.shields.io/github/license/idkjsbrandt-plus-krutikova-simpler.svg?style=flat-square
[license-url]: https://github.com/idkjs/brandt-plus-krutikova-simple/blob/master/LICENSE.txt
[upmostly]: https://upmostly.com/tutorials/how-to-use-the-usecontext-hook-in-react
[bensound]: https://www.bensound.com/
[demo]: https://idkjs.github.io/brandt-plus-krutikova-simple/
[@hisophiabrandt]: https://twitter.com/hisophiabrandt
[@rita_krutikova]: https://twitter.com/rita_krutikova


ripped from https://github.com/pckilgore/bs-biginteger/blob/master/src/BigInteger.re

> What is `type t`?

> It is a ocaml convention for "the type of this module".  So if the module was named "Fish", `type t` would be the fish.  We could just as easily call it anything else, even `type fish`, but then we'd be referring to it as `Fish.fish` which seems silly, right? So we call it `type t` and refer to it as `Fish.t` and by convention know `t` means the module's type.

> A ReasonML module is a type packaged with its behavior.  In this way, it is similar to an Object-Oriented language's concept of `class`.

> So here, `type t` is the BigInteger data structure, packaged with the methods
 we can to operate on that type.

> Because we don't really know (or, honestly, care) about _how_ the BigInteger
 library implements the BigInteger type, we just declare it here, which means
 it is an "abstract type", which I always think of as, "a type that must be
 used consistently by the functions that operate on it, but for which the
 particular implementation of the type and those functions are assumed to be
 correct".

> See below around the definition of `external abs` for an example of a
 non-abstract type t.
