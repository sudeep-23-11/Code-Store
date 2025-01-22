%CowboyWebsocket
-module(xCowboyWebsocket).
-export([init/2, websocket_init/1, websocket_handle/2, websocket_info/2]).

init(Req, State) ->
    {cowboy_websocket, Req, State}.

websocket_init(State) ->
    {[{text, <<"Init">>}], State}.
    % {ok, State}.
    % {stop, State}.

websocket_handle(Frame, State) ->
    case Frame of
        {text, Data} ->
            io:format("~p ~n", [Data]),
            {[{text, <<"erlang">>}, {text, <<"<h1>erlang</h1>">>}], State};
        {binary, _Data} ->
            ImgPath=os:getenv("PWD")++"/public/erlang.png",
            {_, ImgData}=file:read_file(ImgPath),
            HtmlPath=os:getenv("PWD")++"/public/erlang.html",
            {_, HtmlData}=file:read_file(HtmlPath),
            {[{binary, ImgData}, {binary, HtmlData}], State}
    end.

websocket_info(Info, State) ->
    io:format("~p ~n", [Info]),
    {[{text, <<"Info">>}], State}.