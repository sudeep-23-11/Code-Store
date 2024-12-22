-module(myapp_app).
-behaviour(application).
-export([start/2, stop/1]).

start(_StartType, _StartArgs) ->
    application:ensure_all_started(cowboy),
    Dispatch=cowboy_router:compile([
        {'_', [
            {"/endpoint1/[...]", xCowboy1, "hello world"},
            {"/endpoint2/:id", xCowboy2, []},
            {"/websocket", xCowboyWebsocket, []}
        ]}
    ]),
    cowboy:start_clear(my_http_listener,
        [{port, 8080}],
        #{env => #{dispatch => Dispatch}}
    ),
    myapp_sup:start_link().

stop(_State) ->
    cowboy:stop_listener(my_http_listener).