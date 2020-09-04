open Opium.Std;
open Lwt.Infix;

//get >> Method specific routes
let hello_param =
  get("/hello/:name", req =>
    `String("Hello " ++ param(req, "name")) |> respond'
  );
dd 
let hello_world =
  get("/hello", _req => `Html("<h1>Hello World!</h1>") |> respond');

let () = {
  let app =
    App.empty

    |> hello_param
    |> hello_world


  switch (app) {
  | `Ok(app) =>
    print_endline("Listening on port 3000");


  };
};
