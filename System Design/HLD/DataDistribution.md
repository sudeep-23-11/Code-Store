# Partitioning
* logical division of table into partitions
* Type
    * Horizontal = division of rows
    * Vertical = division of columns
    * Range = value range of column
    * List = specific values of column
    * Hash = hash(column)%N, N=no. of partitions

# Sharding
* physical division of data into shards (databases)
* Type
    * Horizontal = division of rows
    * Vertical = division of columns
    * Range based = value range of column
    * Hash based = hash(column)%N, N=no. of shards
    * Directory based = lookup(column), mapping between column and shard

# Replication
* copy of same data across multiple nodes
* Type
    * Master Slave
        * Master = write data
        * Slave
            * read data
            * fetch data from master
            * master election
    * Multi Master
        * read, write data on all nodes
        * each node fetch data from others
    * Transactional
        * publisher send initial copy of data to subscribers
        * publisher send changes to subscribers after each committed transaction
    * Snapshot = publisher send copy of data to subscribers after specific point of time
    * Merge
        * changes on all nodes
        * changes are later merged with conflict resolution
* Synchronicity
    * Synchronous = master and all slaves acknowledge write
    * Asynchronous
        * master acknowledge write immediately
        * slaves acknowledge write later
    * Semi Synchronous
        * master and one slave acknowledge write immediately
        * other slaves acknowledge write later