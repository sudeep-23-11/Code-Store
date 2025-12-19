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