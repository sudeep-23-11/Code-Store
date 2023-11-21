* select t1.f2, t2.f2 from t1 inner join t2 on t1.f1=t2.f1 ------- matched tuples of t1, t2
    * left join -------------------------------------------------- all tuples of t1 and matched tuples of t2
    * right join ------------------------------------------------- matched tuples of t1 and all tuples of t2
    * full outer join -------------------------------------------- all tuples of t1, t2
* select t1.f2, t2.f2 from t1 cross join t2 ---------------------- cartesian product of t1.f1, t2.f2
*
*
* q1 union q2 ---------------------------------------------------- union of distinct tuples of query q1, q2
    * union all -------------------------------------------------- union of tuples
    * intersect -------------------------------------------------- intersection of tuples
    * minus ------------------------------------------------------ tuples of query q1 not present in query q2
    * except ----------------------------------------------------- tuples of query q1 not present in query q2
*
*
* select case when exp1 then v1 when exp2 then v2 else v3 end as f from t - insert v1, v2, v3 according to exp1, exp2 in field f
*
*
* select ifnull (f, v) from table t ------------------------------ replace null values in field f with value v
*
*
* insert into t (f1, f2) values (v1, v2) ------------------------- insert tuple with f1=v1, f2=v2
* update t set f1=v1, f2=v2 where exp ---------------------------- update tuples with f1=v1, f2=v2 that match exp
* delete from t where exp ---------------------------------------- delete tuples that match exp
*
*
* insert into t (f1, f2) q --------------------------------------- insert tuples of query q in fields f1, f2
* create table t as q -------------------------------------------- create table t and insert tuples of query q