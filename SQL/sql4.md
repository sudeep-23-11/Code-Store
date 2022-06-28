* create table t (c dt not null) --------------------------------- non-null values in column c
    * default v) ------------------------------------------------- default values in column c
    * auto_increment) -------------------------------------------- automatically increments the value in column c by one when a new entry is inserted
* alter table t modify c dt not null ----------------------------- add non-null values to column c
    * alter c set default v -------------------------------------- default values
    * auto_increment=v ------------------------------------------- set starting value to v
    * alter c drop default --------------------------------------- drop default values from column c
*
*
* create table t (c dt, constraint ct unique (c)) ---------------- unique values in column c
* alter table t add constraint ct unique (c) --------------------- add unique values to column c
    * check (x)) ------------------------------------------------- values which satisfy conditon x
    * primary key (c)) ------------------------------------------- column c is primary key (non-null and unique values)
    * foreign key (c1) references t2 (c2)) ----------------------- column c1 of table t1 is foreign key (column c2 of table t2 is primary key)
    * foreign key (c1) references t2 (c2)) on update cascade ----- on updating entries of c2, update entries of c1
        * on update set null ------------------------------------- on updating entries of c2, set null values to entries of c1
        * on delete cascade -------------------------------------- on deleting entries of c2, delete entries of c1
        * on delete set null ------------------------------------- on deleting entries of c2, set null values to entries of c1
* alter table t drop index ct ------------------------------------ drop unique values from column c
    * check ct --------------------------------------------------- check
    * primary key ct --------------------------------------------- primary key
    * foreign key ct --------------------------------------------- foreign key
*
*
* create index i on t (c1, c2, …) -------------------------------- create indexes for entries of table t
    * unique index ----------------------------------------------- distinct entries
* alter table t drop index i ------------------------------------- drop indexes