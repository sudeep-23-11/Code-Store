# Database D
* create database D ------------------------ create
* drop database D -------------------------- delete


# Table T
* create table T (X dx, Y dy) -------------- create with columns X, Y and datatype dx, dy
* create table T (X dx not null) ----------- non-null values in X
    * (X dx default x) --------------------- default value in X is x
    * (X dx unique) ------------------------ unique values in X
    * (X dx check (E)) --------------------- values in X that match E
    * (X dx primary key) ------------------- X is primary key
    * (foreign key (X) references T' (X')) - X is foreign key with primary key as X' of T'
* drop table T ----------------------------- delete
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