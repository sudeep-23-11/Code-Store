* show databases ------------------------------------------------- list databases
* create database db --------------------------------------------- create database db
* drop database db ----------------------------------------------- delete database db
* backup database db to disk=lo ---------------------------------- backup database db on location lo
    * with differential ------------------------------------------ updated part of database db
* use db --------------------------------------------------------- start using database db
*
*
* show tables ---------------------------------------------------- list tables
* create table t (f1 dt1, f2 dt2) -------------------------------- create table t with fields f1, f2 having datatypes dt1, dt2
* alter table t rename to nt ------------------------------------- rename table t to nt
* alter table t add f dt ----------------------------------------- insert field f having datatype dt
    * rename f to nf --------------------------------------------- rename field f to nf
    * modify column f dt ----------------------------------------- set datatype of field f to dt
    * drop column f ---------------------------------------------- delete field f
* truncate table t ----------------------------------------------- delete all data of table t
* drop table t --------------------------------------------------- delete table t
* describe t ----------------------------------------------------- details of table t
*
*
* create view vw as q -------------------------------------------- create view vw of query q
    * temporary view vw ------------------------------------------ temporary view vw
* create or replace view vw as q --------------------------------- update view vw according to query q
* create recursive view vw as q1 union q2 ------------------------ create recursive view vw with query q1 as anchor part and query q2 as recursive part
* drop view vw --------------------------------------------------- delete view vw