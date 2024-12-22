% String
-module(xString).
-export([props/0, create/0]).

props() ->
    io:format("~p ~p ~w ~n", ["abc", [$a, $b, $c], [97, 98, 99]]),
    io:format("~p ~p ~n", [is_list("abc"), length("abc")]),
    io:format("~p ~p ~n", [string:is_empty("abc"), string:equal("abc", "ABC", false)]).     % true

create() ->
    US=string:uppercase("abc"),
    LRS=string:lowercase("ABC"),
    TLS=string:titlecase("abc"),
    io:format("~p ~p ~p ~n", [US, LRS, TLS]),

    CS=string:chomp("abc\n"),
    SLS=string:slice("abc", 1, 2),
    RVS=string:reverse("abc"),
    io:format("~p ~p ~p ~n", [CS, SLS, RVS]),

    FS=string:find("abcdbc", "bc", leading),                    % trailing
    TKS=string:take("abcdab", "abd", false, leading),           % true trailing
    io:format("~p ~p ~n", [FS, TKS]),

    PDS=string:pad("abc", 7, both, "$"),                        % leading, trailing
    TRS=string:trim("$$abc$$", both, "$"),                      % leading, trailing
    RPS=string:replace("  abc  ", " ", "$", all),               % leading, trailing
    io:format("~ts ~p ~ts ~n", [PDS, TRS, RPS]),

    SPS=string:split("ab cd ef", " ", all),                     % leading, trailing
    LXS=string:lexemes("ab cd\tef\ngh", " \t\n"),
    NLS=string:nth_lexeme("ab cd\tef\ngh", 2, " \t\n"),
    io:format("~p ~p ~p ~n", [SPS, LXS, NLS]),

    PLS="abc"++"def",
    MS="abc"--"bc",
    I=string:to_integer("69"),
    F=string:to_float("69.23"),
    io:format("~p ~p ~p ~p ~n", [PLS, MS, I, F]).