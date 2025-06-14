# Theory
* Doris node
    * Frontend
        * Follower
            * query parsing
            * leader election
            * alter system add/drop follower 'sockaddr'
        * Observer
            * metadata management
            * alter system add/drop observer 'sockaddr'
        * show frontends
    * Backend
        * data storage
        * query execution
        * alter system add/drop backend 'sockaddr'
        * show backends

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
    * logical division
    * table contains partitions
    * Range = value range of partitioning column
    * List = specific values of partitioning column

* Bucketing
    * physical division as tablet
    * partition contains buckets
    * Hash = hash value of bucketing column
    * Random = randomly

* mysql queries
* not avaliable = use, unique, check, primary key, foreign key, any, all

* ./fe/bin/start_fe.sh --daemon
* ./fe/bin/start_fe.sh --helper master_sockaddr --daemon
* ./fe/bin/stop_fe.sh
* ./be/bin/start_be.sh --daemon
* ./be/bin/stop_be.sh