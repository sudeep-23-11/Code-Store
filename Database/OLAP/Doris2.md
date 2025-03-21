# Table T
* create table T (X dx, Y dy,
Z dz) duplicate key (X, Y) ----------------- detail model
partition by range (X) --------------------- range partitioning
(
    partition P1 values [(x1), (x2)),
    partition P2 values [(x2), (x3))
)
distributed by hash (Y) buckets B ---------- hash bucketing (B buckets)
properties
(
    "replication_num" = "R" ---------------- with R replications
);
    * Z dz) unique key (X, Y) -------------- primary key model
    * Z dz sum) aggregate key (X, Y) ------- aggregate model
    * partition by range (X) --------------- range partitioning (upper bound)
    (
        partition P1 values less than (x1),
        partition P2 values less than (x2)
    )
    * partition by list (X) ---------------- list partitioning
    (
        partition P1 values in (x1, x2),
        partition P2 values in (x3, x4)
    )
    * auto partition by range (date_trunc(X, 'day')) ------- range partitioning (auto)
    ()
    * auto partition by list (X) ----------- list partitioning (auto)
    ()
    * buckets auto ------------------------- hash bucketing (auto)
* alter table T rename T' ------------------ rename to T'


# Column X
* alter table T rename column X X' --------- rename to X'


# Index I
* create index I on T (X) ------------------ create for column X


# Select
* select T.X, T.Y, T'.X' from T full join T' on T.Y=T'.Y' -- read all data of T, T'