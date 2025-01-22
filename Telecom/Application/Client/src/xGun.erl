%Gun
-module(xGun).
-behaviour(gen_server).
-export([start_link/0, stop/0, post/0, put/0, patch/0, get/0, delete/0]).
-export([init/1, handle_cast/2, handle_info/2, terminate/2]).
-define(Url1, "/endpoint1/abc/xyz").
-define(Url2, "/endpoint2/69").

start_link() ->
    application:ensure_all_started(gun),
    gen_server:start_link({local, ?MODULE}, ?MODULE, [], []).
stop() ->
    gen_server:stop(?MODULE, normal, 1000).

post() ->
    gen_server:cast(?MODULE, post).
put() ->
    gen_server:cast(?MODULE, put).
patch() ->
    gen_server:cast(?MODULE, patch).
get() ->
    gen_server:cast(?MODULE, get).
delete() ->
    gen_server:cast(?MODULE, delete).

init([]) ->
    {_, ConnPid}=gun:open("localhost", 8080),
    {ok, {ConnPid, req}}.

handle_cast(post, {ConnPid, _ReqType}) ->
    Headers=[{<<"Content-Type">>, <<"text/plain">>}],
    Payload= <<"hello world">>,
    gun:post(ConnPid, ?Url1, Headers, Payload),
    {noreply, {ConnPid, post}};

handle_cast(put, {ConnPid, _ReqType}) ->
    Headers=[{<<"Content-Type">>, <<"text/html">>}],
    Payload= <<"<h1>hello world</h1>">>,
    gun:put(ConnPid, ?Url1, Headers, Payload),
    {noreply, {ConnPid, put}};

handle_cast(patch, {ConnPid, _ReqType}) ->
    Headers=[{<<"Content-Type">>, <<"application/json">>}],
    Payload=jsx:encode(#{<<"hello">> => <<"world">>}),
    gun:patch(ConnPid, ?Url1, Headers, Payload),
    {noreply, {ConnPid, patch}};

handle_cast(get, {ConnPid, _ReqType}) ->
    gun:get(ConnPid, ?Url2),
    {noreply, {ConnPid, get}};

handle_cast(delete, {ConnPid, _ReqType}) ->
    gun:delete(ConnPid, ?Url2),
    {noreply, {ConnPid, delete}}.

handle_info({gun_up, _ConnPid, _Protocol}, State) ->
    io:format("Connection opened ~n"),
    {noreply, State};

handle_info({gun_down, _ConnPid, _Protocol, _Reason, _KilledStreams}, State) ->
    io:format("Connection closed ~n"),
    {noreply, State};

handle_info({gun_response, _ConnPid, _StreamRef, _IsFin, _Status, _Headers}, State) ->
    {noreply, State};

handle_info({gun_data, _ConnPid, _StreamRef, _IsFin, Data}, {ConnPid, ReqType}) ->
    case ReqType of
        post -> io:format("~p ~n", [Data]);
        put -> io:format("~p ~n", [Data]);
        patch -> io:format("~p ~n", [jsx:decode(Data)]);
        _ -> ok
    end,
    {noreply, {ConnPid, req}}.

terminate(_Reason, {ConnPid, _ReqType}) ->
    gun:close(ConnPid).