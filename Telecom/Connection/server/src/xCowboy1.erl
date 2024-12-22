% Cowboy
-module(xCowboy1).
-export([init/2]).

init(Req0, State) ->
    io:format("~p ~p ~n", [State, cowboy_req:header(<<"content-type">>, Req0)]),
    io:format("~p ~p ~n", [cowboy_req:has_body(Req0), cowboy_req:body_length(Req0)]),
    io:format("~p ~p ~n", [cowboy_req:version(Req0), cowboy_req:peer(Req0)]),
    io:format("~p ~p ~n", [cowboy_req:host_info(Req0), cowboy_req:path_info(Req0)]),

    io:format("~p ~p ~n", [cowboy_req:scheme(Req0), cowboy_req:host(Req0)]),
    io:format("~p ~p ~n", [cowboy_req:port(Req0), cowboy_req:path(Req0)]),
    io:format("~p ~p ~n", [cowboy_req:qs(Req0), cowboy_req:uri(Req0)]),

    Method=cowboy_req:method(Req0),
    case Method of
        <<"POST">> ->
            {_, Data, _Req} = cowboy_req:read_body(Req0),
            io:format("~p ~n", [Data]),
            Req=cowboy_req:reply(200,
                #{<<"content-type">> => <<"text/plain">>},
                <<"Post Request">>,
            Req0);

        <<"PUT">> ->
            {_, Data, _Req} = cowboy_req:read_body(Req0),
            io:format("~p ~n", [Data]),
            Req=cowboy_req:reply(200,
                #{<<"content-type">> => <<"text/html">>},
                <<"<h1>Put Request</h1">>,
            Req0);

        <<"PATCH">> ->
            {_, Data, _Req} = cowboy_req:read_body(Req0),
            io:format("~p ~n", [jsx:decode(Data)]),
            Req=cowboy_req:reply(200,
                #{<<"content-type">> => <<"application/json">>},
                jsx:encode(#{<<"Patch">> => <<"Request">>}),
            Req0)
    end,
    {ok, Req, State}.