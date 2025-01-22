%Marco
-module(xMarco).
-export([func/0]).

-ifndef(A).
-define(A, true).
-endif.

-ifdef(A).
-define(B, sudeep).
-else.
-define(B, 69.23).
-endif.

-undef(A).

func() -> ?B.