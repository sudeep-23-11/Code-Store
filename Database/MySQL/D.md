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