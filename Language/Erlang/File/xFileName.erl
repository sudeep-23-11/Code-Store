%FileName
-module(xFileName).
-export([naming/0]).
-define(F, "dp/king/sudeep.erl").

naming() ->
    AN1=filename:absname("sudeep.erl"),
    AN2=filename:absname("sudeep.erl", "dp/king"),
    P=filename:pathtype(?F),
    io:format("~p ~n ~p ~p ~n", [AN1, AN2, P]),

    DN=filename:dirname(?F),
    BN1=filename:basename(?F),
    BN2=filename:basename(?F, ".erl"),
    io:format("~p ~p ~p ~n", [DN, BN1, BN2]),

    RN1=filename:rootname(?F),
    RN2=filename:rootname(?F, ".erl"),
    EN=filename:extension(?F),
    io:format("~p ~p ~p ~n", [RN1, RN2, EN]),

    JN1=filename:absname_join("dp/king", "sudeep.erl"),
    JN2=filename:join(filename:split(?F)),
    JN3=filename:flatten(["dp/", ["king/", "sudeep.erl"]]),
    io:format("~p ~p ~p ~n", [JN1, JN2, JN3]).