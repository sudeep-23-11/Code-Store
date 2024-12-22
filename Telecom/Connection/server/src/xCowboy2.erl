% Cowboy
-module(xCowboy2).
-export([init/2]).

init(Req0, State) ->
    io:format("~p ~p ~n", [cowboy_req:binding(id, Req0), cowboy_req:bindings(Req0)]),

    Method=cowboy_req:method(Req0),
    case Method of
        <<"GET">> ->
            Header= <<"img/png">>,
            Name="erlang.png";

        <<"DELETE">> ->
            Header= <<"text/html">>,
            Name="erlang.html"
    end,

    Req1=cowboy_req:set_resp_header(<<"content-type">>, Header, Req0),
    io:format("~p ", [cowboy_req:has_resp_header(<<"content-type">>, Req1)]),
    _Req=cowboy_req:delete_resp_header(<<"content-type">>, Req1),

    Path=os:getenv("PWD")++"/public/"++Name,
    {_, Data}=file:read_file(Path),
    Req2=cowboy_req:set_resp_body(Data, Req1),
    io:format("~p ~n", [cowboy_req:has_resp_body(Req2)]),

    Req=cowboy_req:reply(200, Req2),
    {ok, Req, State}.