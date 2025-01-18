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



*
* alter table t rename to nt ------------------------------------- rename table t to nt
* alter table t add f dt ----------------------------------------- insert field f having datatype dt
    * rename f to nf --------------------------------------------- rename field f to nf
    * modify column f dt ----------------------------------------- set datatype of field f to dt
    * drop column f ---------------------------------------------- delete field f

*
*
* create view vw as q -------------------------------------------- create view vw of query q
    * temporary view vw ------------------------------------------ temporary view vw
* create or replace view vw as q --------------------------------- update view vw according to query q
* create recursive view vw as q1 union q2 ------------------------ create recursive view vw with query q1 as anchor part and query q2 as recursive part
* drop view vw --------------------------------------------------- delete view vw


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

* create table t (f dt not null) --------------------------------- non-null values in field f
    * default v -------------------------------------------------- default value is v
    * auto_increment --------------------------------------------- automatically increments by one on new insertion
* alter table t modify f dt not null ----------------------------- set non-null values in field f
    * alter f set default v -------------------------------------- set default value to v
    * auto_increment=v ------------------------------------------- set starting value to v
    * alter f drop default --------------------------------------- delete default values
*
*
* create table t (f dt, constraint ct unique (f)) ---------------- unique values in field f
* alter table t add constraint ct unique (f) --------------------- set unique values in field f
    * check (exp) ------------------------------------------------ values that match exp
    * primary key (f) -------------------------------------------- field f is primary key
    * foreign key (f1) references t2 (f2) ------------------------ t.f1 is foreign key with primary key as t2.f2
    * foreign key (f1) references t2 (f2) on update cascade ------ on updation of field f2, update tuples of field f1
        * on update set null ------------------------------------- on updation of field f2, set null values to field f1
        * on delete cascade -------------------------------------- on deletion of field f2, delete tuples of field f1
        * on delete set null ------------------------------------- on deletion of field f2, set null values to field f1
* alter table t drop check ct ------------------------------------ delete check constraint ct
    * primary key ct --------------------------------------------- primary key
    * foreign key ct --------------------------------------------- foreign key
*
*
* create index i on t (f1, f2) ----------------------------------- create index i for tuples of fields f1, f2
    * unique index ----------------------------------------------- unique tuples
* alter table t drop index i ------------------------------------- delete index i