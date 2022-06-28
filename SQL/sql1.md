* select * from t ------------------------------------------------ entries of all columns of table t
* select c1, c2, … ----------------------------------------------- entries of columns c1, c2, …
* select distinct c ---------------------------------------------- distinct entries of column c
* select c as a -------------------------------------------------- alias of column c is a
* select c1, c2, … from t1, t2, … -------------------------------- cartesian product of c1, c2, …

* limit n -------------------------------------------------------- n entries only
* offset n ------------------------------------------------------- entries after n entries
* order by c asc ------------------------------------------------- entries in ascending order of column c
* order by c desc ------------------------------------------------ entries in descending order of column c

* where x -------------------------------------------------------- entries which satisfy condition x
    * x1 and x2 -------------------------------------------------- both x1 and  x2
    * x1 or x2 --------------------------------------------------- either x1 or x2
    * not x ------------------------------------------------------ not x
    * c is null -------------------------------------------------- is equal to null
    * c between v1 and v2 ---------------------------------------- between v1 and v2
    * c in (v1, v2, ...) ----------------------------------------- any one of these v1, v2, ...
    * c like 'p' ------------------------------------------------- contains pattern p
        * _ ------------------------------------------------------ single character
        * % ------------------------------------------------------ no or more characters
        * [a1a2…] ------------------------------------------------ list of characters
        * [a1-a2] ------------------------------------------------ range of characters
    * c like 'p' escape '\' -------------------------------------- escape character
    * exists (q) ------------------------------------------------- returns True if there are some records of query q else False
    * x all (q) -------------------------------------------------- returns True if entries satify condition x for all records of qurey q else False
        * any ---------------------------------------------------- any record
        * some --------------------------------------------------- any record

* select count (c) from t ---------------------------------------- count of entries of column c of table t
    * sum (c) ---------------------------------------------------- sum
    * max (c) ---------------------------------------------------- maximum
    * min (c) ---------------------------------------------------- minimum
    * avg (c) ---------------------------------------------------- average
* group by c ----------------------------------------------------- make groups of entries of column c
* having x ------------------------------------------------------- functions which satisfy condition x