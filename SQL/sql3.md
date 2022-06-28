* create database d ---------------------------------------------- create database d
* drop database d ------------------------------------------------ drop database d
* backup database d to disk='f' ---------------------------------- make backup of full database d on location f
    * with differential ------------------------------------------ changed part of database d
* show databases ------------------------------------------------- list avaliable databases
* use d ---------------------------------------------------------- start using database d

* create table t (c1 dt1, c2 dt2, …) ----------------------------- create table t with columns c1, c2, … having datatypes dt1, dt2, …
* alter table t1 rename to t2 ------------------------------------ rename table t1 to t2
* alter table t add c dt ----------------------------------------- add column c having datatype dt
    * modifly column c dt ---------------------------------------- change datatype of column c to dt
    * drop column c ---------------------------------------------- drop column c
    * rename c1 to c2 -------------------------------------------- rename column c1 to c2
* truncate table t ----------------------------------------------- remove all data from table t
* drop table t --------------------------------------------------- drop table t
* show tables ---------------------------------------------------- list avaliable tables
* describe t ----------------------------------------------------- details of table t

* create view v as select c1, c2, … from table t where x --------- create view v of the query
    * temporary view v ------------------------------------------- temporary view v
* create recursive view v as select c1, c2, ... from t1 union select c1, c2, ... from t2 --- recursive view v with first query as anchor part and second query as recursive part 
* create or replace view v as select c1, c2, … from table t where x --- change view v according to the query
* drop view v ---------------------------------------------------- drop view v