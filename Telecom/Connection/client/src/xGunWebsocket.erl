% GunWebsocket
-module(xGunWebsocket).
-behaviour(gen_server).
-export([start_link/0, stop/0, text/0, binary/0]).
-export([init/1, handle_cast/2, handle_info/2, terminate/2]).

start_link() ->
    application:ensure_all_started(gun),
    gen_server:start_link({local, ?MODULE}, ?MODULE, [], []).
stop() ->
    % xCowboyWebsocket ! info,
    gen_server:stop(?MODULE, normal, 1000).

text() ->
    gen_server:cast(?MODULE, text).
binary() ->
    gen_server:cast(?MODULE, binary).

init([]) ->
    {_, ConnPid}=gun:open("localhost", 8080),
    StreamRef=gun:ws_upgrade(ConnPid, "/websocket"),
    {ok, {ConnPid, StreamRef}}.

handle_cast(text, {ConnPid, StreamRef}) ->
    gun:ws_send(ConnPid, StreamRef, [{text, <<"hello world">>}, {text, <<"<h1>hello world</h1>">>}]),
    {noreply, {ConnPid, StreamRef}};

handle_cast(binary, {ConnPid, StreamRef}) ->
    ImgPath=os:getenv("PWD")++"/public/hello world.png",
    {_, ImgData}=file:read_file(ImgPath),
    HtmlPath=os:getenv("PWD")++"/public/hello world.html",
    {_, HtmlData}=file:read_file(HtmlPath),
    gun:ws_send(ConnPid, StreamRef, [{binary, ImgData}, {binary, HtmlData}]),
    {noreply, {ConnPid, StreamRef}}.

handle_info({gun_up, _ConnPid, _Protocol}, State) ->
    io:format("Connection opened ~n"),
    {noreply, State};

handle_info({gun_down, _ConnPid, _Protocol, _Reason, _KilledStreams}, State) ->
    io:format("Connection closed ~n"),
    {noreply, State};

handle_info({gun_upgrade, _ConnPid, _StreamRef, _Protocols, _Headers}, State) ->
    io:format("Websocket opened ~n"),
    {noreply, State};

handle_info({gun_ws, _ConnPid, _StreamRef, Frame}, State) ->
    case Frame of
        {text, Data} -> io:format("~p ~n", [Data]);
        {binary, _Data} -> ok;
        {close, 1000, _Reason} -> io:format("Websocket closed ~n")
    end,
    {noreply, State}.

terminate(_Reason, {ConnPid, _StreamRef}) ->
    gun:close(ConnPid).