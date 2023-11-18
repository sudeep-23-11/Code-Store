* select t1.c2, t2.c2, ... from t1 inner join t2 on t1.c1=t2.c1 -- combined matched entries of tables t1 and matched entries of table t2
    * left join -------------------------------------------------- all of t1 and matched of t2
    * right join ------------------------------------------------- matched of t1 and all of t2
    * full outer join -------------------------------------------- all of t1 and t2
* select t1.c2, t2.c2, ... from t1 cross join t2 ----------------- cartesian product of c1, c2, …
*
*
* select c1, c2, ... from t1 union select c1, c2, ... from t2 ---- distinct combined entries of table t1 and table t2
    * union all -------------------------------------------------- combined entries
    * intersect -------------------------------------------------- common entries
    * minus ------------------------------------------------------ entries of t1 which are not present in t2
    * except ----------------------------------------------------- entries of t1 which are not present in t2
*
*
* select c1, c2, …, case when x1 then v1 when x2 then v2 else v3 end as c from t --- insert value v according to condition x in new column c of table t
*
*
* select ifnull (c, v) from table t ------------------------------ replace all null entries in column c of table t with value v
*
*
* insert into t (c1, c2, …) values (v1, v2, …) ------------------- insert new entry with values v1, v2, … in columns c1, c2, … of table t
* update t set c1=v1, c2=v2, … where x --------------------------- update entries with values v1, v2, … in columns c1, c2, … of table t which satisfy condition x
* delete from t where x ------------------------------------------ delete entries of table t which satisfy condition x
*
*
* insert into t1 (c1, c2, …) select c1, c2, … from t2 where x ---- copy entries of columns c1, c2, … of table t2 which satisfy conditon x into table t1
* create table t1 as select c1, c2, … from t2 where x -------------- into new table t1