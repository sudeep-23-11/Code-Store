# Node
* Frontend
    * Type
        * Follower
            * query parsing
            * leader election
            * alter system (add, drop) follower 'sockaddr'
        * Observer
            * metadata
            * alter system (add, drop) observer 'sockaddr'
    * show frontends
* Backend
    * data storage
    * query execution
    * alter system (add, drop) backend 'sockaddr'
    * show backends

# Data Model
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

# Partition
* logical division of table
* Type
    * Range = value range of partitioning column
    * List = specific values of partitioning column

# Bucket
* tablet
* physical division of partition
* Type
    * Hash = bucketing on hash(bucketing column)
    * Random = random bucketing

# Lifecycle Command
* ./fe/bin/start_fe.sh --daemon
* ./fe/bin/start_fe.sh --helper master_sockaddr --daemon
* ./fe/bin/stop_fe.sh
* ./be/bin/start_be.sh --daemon
* ./be/bin/stop_be.sh