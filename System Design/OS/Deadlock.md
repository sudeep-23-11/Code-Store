# Process Synchronization
* multiple processes share same resource without inconsistency
* Problem
    * Critical Section
        * multiple processes trying to acess same code segment
        * Condition
            * Mutual Exclusion = one process enter
            * Progress = if no process is inside, other should enter
            * Bounded Waiting = no process should wait forever
    * Race Condition = result of execution of multiple processes depend on order
* Handling
    * Mutex Lock = one process lock resource
    * Binary Semaphore = 0/1 for one resource
    * Counting Semaphore = N resources
    * Monitor

# Deadlock
* process P1 hold resource R1 and wait for resource R2
* process P2 hold resource R2 and wait for resource R1
* Condition
    * Mutual Exclusion = one process hold resource
    * Hold and Wait = process hold one resource and wait for other resource held by other process
    * No Preemption = resource cannot be taken from process until process release resource
    * Circular Wait = set of processes waiting for resources held by other processes in circular fashion
* Prevention = break any one condition
* Avoidance
    * Banker Algorithm
        * multiple instances of resource
        * Available = no. of resources avaliable
        * Max = no. of resources totally required
        * Allocation = no. of resources currently allocated
        * Need = max-allocation
        * Safe State
            * each process get needed resources
            * complete execution
            * release allocated for others without deadlock
    * RAG
        * Resource Allocation Graph
        * one instance of resource
        * Node = process, resource
        * Edge
            * Assign = resource -> process
            * Request = process -> resource
        * Cycle = deadlock
* Detection
    * Detection Algorithm = similar as banker algorithm
    * WFG
        * Wait For Graph
        * similar as resource allocation graph