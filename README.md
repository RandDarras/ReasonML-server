# reasonml-opium-basic

A basic server example using Opium built with ReasonML.

## Getting started

Clone this repository and `cd` into it.

```sh
npm i -g esy@latest
esy
esy start
```

Server runs by default at `http://localhost:3000`

See `src/server.re` for available endpoints.

## Dependencies

- [Opium (OCaml)] - ExpressJS-like web-toolkit.
- [Refmterr (ReasonML)] - Pretty printing for error-messages
- [Tablecloth (Reasonml/OCaml)] - One of a few base-libraries
- [Cohttp (OCaml)] - Used by Opium for underlying HTTP-implementation.
- [Lwt (OCaml)] - A promise-implementation for Native OCaml/ReasonML. The `ppx` is used for `await`-like syntax.
