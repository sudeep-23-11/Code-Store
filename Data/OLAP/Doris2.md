# Table T
* create table T (X dx, Y dy,
    * Z dz) duplicate key (X, Y) ----------- detail model
    * Z dz) unique key (X, Y) -------------- primary key model
    * Z dz sum) aggregate key (X, Y) ------- aggregate model
    * partition by range (X) --------------- range partitioning
        * (partition P1 values [(x1), (x2)),
        * partition P2 values [(x2), (x3)))
    * partition by range (X) --------------- range partitioning (upper bound)
        * (partition P1 values less than (x1),
        * partition P2 values less than (x2))
    * partition by list (X) ---------------- list partitioning
        * (partition P1 values in (x1, x2),
        * partition P2 values in (x3, x4))
    * auto partition by range (date_trunc(X, 'day')) ------- range partitioning (auto)
        * ()
    * auto partition by list (X) ----------- list partitioning (auto)
        * ()
    * distributed by hash (Y) buckets B ---- hash bucketing (B buckets)
    * distributed by hash (Y) buckets auto - hash bucketing (auto)
    * properties
        * ("replication_num" = "R" --------- with R replicas);
* alter table T rename T' ------------------ rename to T'


# Column X
* alter table T rename column X X' --------- rename to X'


# Index I
* create index I on T (X) ------------------ create for column X


# Select
* select T.X, T.Y, T'.X' from T full join T' on T.Y=T'.Y' -- read all data of T, T'


# Partition P
* show partitions from T ------------------- list
* alter table T drop partition P ----------- delete
* truncate table T partition P ------------- delete all data
* alter table T rename partition P P' ------ rename to P'
* delete from T partition P where E -------- delete data that match E
* select * from T partition P -------------- read all data