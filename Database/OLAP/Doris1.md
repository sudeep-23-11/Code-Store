# Theory
* Data model
    * Detail
        * Duplicate key
        * key columns are duplicated
        * all data of non-key columns are inserted
    * Primary key
        * Unique key
        * key columns are unqiue
        * latest data of non-key columns are inserted
    * Aggregate
        * Aggregate key
        * key columns are unqiue
        * aggregated data of non-key columns are inserted

* Partitioning
    * first layer of logical division
    * table contains partitions
    * Range = value range of partitioning column
    * List = specific values of partitioning column

* Bucketing
    * second layer of logical division
    * partition contains buckets
    * Hash = hash value of bucketing column
    * Random = randomly

* mysql queries
* not avaliable = use, unique, check, primary key, foreign key, any, all


# Partition P
* show partitions from T ------------------- list
* alter table T drop partition P ----------- delete
* truncate table T partition P ------------- delete all data
* alter table T rename partition P P' ------ rename to P'
* delete from T partition P where E -------- delete data that match E
* select * from T partition P -------------- read all data