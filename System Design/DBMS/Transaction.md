# ACID Property
* Atomicity = transaction must execute completely or not at all
* Consistency = database must follow all constraints after transaction
* Isolation = transactions should not interfere with each other
* Durability = result must never be lost after transaction is committed

# State
* Active
    * start of transaction
    * execution of instructions
* Partially Committed
    * instructions are executed
    * changes are not permanent
* Committed
    * commit is executed
    * changes are permanent in database
* Failed
    * error during execution of instructions
    * error during execution of commit
* Aborted
    * perform rollback
    * return to previous consistent state
* Terminated
    * end of transaction
    * either committed or aborted

# Schedule Type
* Serial = transactions occurr sequentially
* Non-serial
    * transactions occurr concurrently
    * Type
        * Serializable
            * can be converted to serial
            * Type
                * Conflict Serializable
                    * swap non-conflicting operations
                    * conflicting operations = access same data and atleast one write
                * View Serializable
                    * initial read same value
                    * read values written by same transactions
                    * final write by same transaction
            * conflict serializable is subset of view serializable
        * Non-serializable
            * cannot be converted to serial
            * Type
                * Recoverable
                    * commit after read of all committed data of other transactions
                    * Type
                        * Cascading = read uncommitted data
                        * Cascadeless = read committed data
                        * Strict = read, write committed data
                    * strict is subset of cascadeless
                * Non-recoverable = commit after read of any uncommitted data of other transaction

# Two Phase Locking Protocol
* transaction acquire and release locks in two disjoint phases
* Lock Type
    * Shared
        * S-Lock
        * allows transaction to read data
    * Exclusive
        * X-Lock
        * allows transaction to read, write data
* Phase
    * Growing = transaction acquire locks
    * Shrinking = transaction release locks
* Lock Point
    * boundary between growing and shrinking phases
    * transaction finish acquiring locks
    * transaction start releasing locks
* 2PL Type
    * Basic = conflict serializability
    * Strict = exclusive locks are released after commit
    * Rigorous = shared, exclusive locks are released after commit
* rigorous is subset of strict which is subset of basic