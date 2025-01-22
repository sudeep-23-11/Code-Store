%Testing
-module(ops_tests).
-include_lib("eunit/include/eunit.hrl").

even_test() ->
    ?assert(ops:even(2)),
    ?assert(ops:even(4)).

odd_test() ->
    ?assertNot(ops:even(1)),
    ?assertNot(ops:even(3)).

add_test() ->
    ?assertEqual(5, ops:add(2, 3)),
    ?assertEqual(10, ops:add(4, 6)).

pattern_test() ->
    ?assertMatch([{_X1, _X2}, {_Y1, _Y2}], ops:pattern(2, 3)).