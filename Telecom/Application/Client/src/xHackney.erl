%Hackney
-module(xHackney).
-behaviour(gen_server).
-export([start_link/0, post/0, put/0, patch/0, get/0, delete/0]).
-export([init/1, handle_call/3, handle_cast/2]).
-define(Url1, <<"http://localhost:8080/endpoint1/abc/xyz">>).
-define(Url2, <<"http://localhost:8080/endpoint2/69">>).

start_link() ->
    application:ensure_all_started(hackney),
    gen_server:start_link({local, ?MODULE}, ?MODULE, [], []).

post() ->
    gen_server:call(?MODULE, post, 1000).
put() ->
    gen_server:call(?MODULE, put, 1000).
patch() ->
    gen_server:call(?MODULE, patch, 1000).
get() ->
    gen_server:cast(?MODULE, get).
delete() ->
    gen_server:cast(?MODULE, delete).

init([]) ->
    {ok, []}.

handle_call(post, _From, State) ->
    Headers=[{<<"Content-Type">>, <<"text/plain">>}],
    Payload= <<"hello world">>,
    {_, _StatusCode, _RespHeaders, ClientRef}=hackney:post(?Url1, Headers, Payload),
    {_, Body}=hackney:body(ClientRef),
    {reply, Body, State};

handle_call(put, _From, State) ->
    Headers=[{<<"Content-Type">>, <<"text/html">>}],
    Payload= <<"<h1>hello world</h1>">>,
    {_, _StatusCode, _RespHeaders, ClientRef}=hackney:put(?Url1, Headers, Payload),
    {_, Body}=hackney:body(ClientRef),
    {reply, Body, State};

handle_call(patch, _From, State) ->
    Headers=[{<<"Content-Type">>, <<"application/json">>}],
    Payload=jsx:encode(#{<<"hello">> => <<"world">>}),
    {_, _StatusCode, _RespHeaders, ClientRef}=hackney:patch(?Url1, Headers, Payload),
    {_, Body}=hackney:body(ClientRef),
    {reply, jsx:decode(Body), State}.

handle_cast(get, State) ->
    {_, _StatusCode, _RespHeaders, ClientRef}=hackney:get(?Url2),
    {_, _Body}=hackney:body(ClientRef),
    {noreply, State};

handle_cast(delete, State) ->
    {_, _StatusCode, _RespHeaders, ClientRef}=hackney:delete(?Url2),
    {_, _Body}=hackney:body(ClientRef),
    {noreply, State}.