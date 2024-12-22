-module(inplace_a).
-include_lib("nitrogen_core/include/wf.hrl").
-export([type/2]).

type(itxb, Value) ->
    io:format("~p ~n", [Value]),
    hello;

type(itxa, Value) ->
    io:format("~p ~n", [Value]),
    world;

type(ipl, Value) ->
    io:format("~p ~n", [Value]),
    sudeep.