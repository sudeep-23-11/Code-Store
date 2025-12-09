# Database D
* create database D ------------------------ create
* drop database D -------------------------- delete
* drop database if exists D ---------------- delete if it exists

# Table T
* create table T (X dx, Y dy) -------------- create with columns X, Y and datatype dx, dy
* create table if not exists T (X dx) ------ create if it does not exists
* create table T (X dx not null) ----------- non-null values in X
    * (X dx default x) --------------------- default value in X is x
    * (X dx unique) ------------------------ unique values in X
    * (X dx check (E)) --------------------- values in X that match E
    * (X dx primary key) ------------------- X is primary key
    * (foreign key (X) references T' (X')) - X is foreign key with primary key as X' of T'
* drop table T ----------------------------- delete
* drop table if exists T ------------------- delete if it exists
* truncate table T ------------------------- delete all data
* alter table T rename to T' --------------- rename to T'
* insert into T (X, Y) values (x, y) ------- insert data with X=x, Y=y
* update T set X=x, Y=y where E ------------ update data with X=x, Y=y that match E
* delete from T where E -------------------- delete data that match E

# Column X
* alter table T add column X dx ------------ add with datatype dx
    * drop column X ------------------------ delete
    * rename column X to X' ---------------- rename to X'

# Index I
* create index I on T (X, Y) --------------- create for columns X, Y
    * unique index ------------------------- unique values in X, Y

# Select
* select * from T -------------------------- read all data
    * X, Y --------------------------------- read data of X, Y
    * X as X' ------------------------------ X' is alias of X
    * distinct X --------------------------- distinct values of X
    * coalesce (X, x) ---------------------- null values of X as x
    * case when E1 then x1 when E2 then x2 else x3 end as X - conditional values of X
* select * from T order by X asc ----------- sort data in ascending order according to X
    * order by X desc ---------------------- sort data in descending order according to X
    * limit N ------------------------------ limit data to N
    * offset N ----------------------------- skip first N data
* select X, sum (Y) from T group by X ------ make groups according to X, summation of Y
    * having E ----------------------------- that matches E
* select * from T where E ------------------ read data that match E
    * not E -------------------------------- that do not match E
    * E1 and E2 ---------------------------- that match both E1 and E2
    * E1 or E2 ----------------------------- that match either E1 or E2
    * X is null ---------------------------- X is null
    * X is not null ------------------------ X is not null
    * X between x1 and x2 ------------------ X is in range [x1, x2]
    * X in (x1, x2) ------------------------ X is x1, x2
    * X like '_P%' ------------------------- X contains one character, then P, then zero or more characters
* select T.X, T.Y, T'.X' from T inner join T' on T.Y=T'.Y' - read matched data of T, T'
    * left join -------------------------------------------- read all data of T, matched data of T'
    * right join ------------------------------------------- read matched data of T, all data of T'
* select T.X, T.Y, T'.X' from T cross join T' -------------- read cartesian product of T, T'

# Query Q
* insert into T (X, Y) Q ------------------- insert data with X=x, Y=y from Q
* Q union Q' ------------------------------- read data present in either Q or Q'
    * intersect ---------------------------- in both Q and Q'
    * except ------------------------------- in Q but not in Q'
* select * from T where exists (Q) --------- read all data if Q is non-empty
    * E any (Q) ---------------------------- that match E for any data of Q
    * E all (Q) ---------------------------- that match E for all data of Q