* select * from t ------------------------------------------------ find tuples of all fields of table t
    * f1, f2 ----------------------------------------------------- field is f1, f2
    * distinct f ------------------------------------------------- unique tuples according to field f
    * f as a ----------------------------------------------------- a is alias of field f
* select f1, f2 from t1, t2 -------------------------------------- cartesian product of t1.f1, t2.f2
*
*
* where exp ------------------------------------------------------ find tuples that matches exp
    * f is null -------------------------------------------------- field f is null
    * f between v1 and v2 ---------------------------------------- field f is in range [v1, v2]
    * f in (v1, v2) ---------------------------------------------- field f is v1, v2
    * f like p --------------------------------------------------- field f contains pattern p
        * _ ------------------------------------------------------ single character
        * % ------------------------------------------------------ zero or more characters
        * [c1c2] ------------------------------------------------- character is c1, c2
        * [c1-c2] ------------------------------------------------ character is in range [c1, c2]
    * not exp ---------------------------------------------------- not of exp
    * exp1 and exp2 ---------------------------------------------- and of exp1, exp2
        * or ----------------------------------------------------- or of exp1, exp2
    * exists (q) ------------------------------------------------- check if there are tuples of query q
    * exp all (q) ------------------------------------------------ check if all tuples of query q match exp
        * any ---------------------------------------------------- any tuple
        * some --------------------------------------------------- any tuple
*
*
* order by f asc ------------------------------------------------- sort tuples in ascending order according to field f
    * desc ------------------------------------------------------- descending order
* limit n -------------------------------------------------------- limit tuples to n
* offset n ------------------------------------------------------- skip first n tuples
*
*
* select count (f) from t ---------------------------------------- count tuples of field f
    * sum (f) ---------------------------------------------------- sum
    * max (f) ---------------------------------------------------- maximum
    * min (f) ---------------------------------------------------- minimum
    * avg (f) ---------------------------------------------------- average
* group by f ----------------------------------------------------- make groups of tuples of field f
* having exp ----------------------------------------------------- find functions that matches exp