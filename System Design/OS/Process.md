# Process
* running program in memory
* individual memory address
* heavy weight creation
* slow context switching
* Type
    * Zombie = terminated but still has entry in process table
    * Orphan = parent terminated but child still running
* State
    * New = created in disk
    * Ready = run ready in memory
    * Running = running in CPU
    * Waiting = waiting for I/O event
    * Terminated = completed or killed

# Thread
* independent section of process
* same memory address of process
* light weight creation
* fast context switching

# Process Scheduling
* Scheduler
    * Long term
        * Job
        * manage Job queue
        * from disk to memory
    * Short term
        * CPU
        * manage Ready queue
        * from memory to CPU
    * Dispatcher
        * manage Context Switching
        * save state of currently running process in PCB
        * restore saved state of next process from PCB and run it
    * Medium term
        * manage Swapping
        * from memory to disk to memory again
* Waiting Queue
    * Blocked Queue
    * CPU to I/O waiting to memory again
* Throughput = no. of processes completed per unit time
* Time
    * Arrival = time at which process enter ready queue
    * Completion = time at which process is completed
    * Turnaround
        * time duration in system
        * completion-arrival
    * Response = time at which process get CPU for first time
    * Burst = time duration in CPU
    * Waiting
        * time duration in ready queue
        * turnaround-burst
* Scheduling Type
    * Non-preemptive
        * process is moved out of CPU when terminated or waiting
        * FCFS, SJF, Priority
    * Preemptive
        * running process is moved out of CPU due to time quantum or priority
        * SRTF, Priority, Round Robin
* Scheduling Algorithm
    * FCFS
        * First Come First Serve
        * process arriving first get CPU first
        * Convoy effect = long process in CPU make short processes wait behind
    * SJF
        * Shortest Job First
        * short processes get CPU first
    * SRTF
        * Shortest Remaining Time First
        * process having short remaning CPU time get CPU first
    * Priority
        * process having high priority get CPU first
        * Starvation = long, low priority processes will never get CPU
        * Aging = increase priority of process inorder to get CPU
    * Round Robin = processes get CPU for fixed time quantum in cyclic order
    * MLQ
        * Multi level Queue
        * multiple queues having individual algorithms
    * MLFQ
        * Multi level Feedback Queue
        * similar as MLQ
        * processes move between queues