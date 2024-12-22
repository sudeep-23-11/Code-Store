-module(ops).
-export([even/1, add/2, pattern/2]).

even(A) -> (A rem 2) == 0.
add(A, B) -> A+B.
pattern(A, B) -> [{A, A*2}, {B, B*2}].