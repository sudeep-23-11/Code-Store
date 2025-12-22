# Type
* Batch = jobs run in batches
* Multi programming
    * multiple processes run in memory
    * CPU switches between them
* Multi tasking
    * similar as multi programming
    * Round Robin
* Multi processing = multiple CPUs
* Real Time = response time is very small
* Distributed = set of connected machines that work like one
* Network = runs on server of network

# Kernel
* Process Management
* Memory Management
* File System Management
* I/O Device Management
* Secondary Storage Management

# Memory
* Type
    * Primary = CPU Registers, Cache, RAM
    * Secondary = Disk
    * Physical
        * Main
        * RAM
        * Frame = divison of physical memory
        * No. of frames = Physical address size/Frame size
    * Logical
        * Virtual
        * virtual address space of process created by CPU
        * Page = division of logical memory
        * No. of pages = Logical address size/Page size
        * Frame size = Page size
* Page Fault = process need page that is not present in RAM
* Page Replacement Algorithm
    * FIFO
        * First In First Out
        * evict page that entered RAM first
        * Belady anomaly = increase in no. of pages will cause more page faults
    * Optimal = evict page that will be not used in future for long time
    * LRU
        * Least Recently Used
        * evict page that was least recently used in past
    * MRU
        * Most Recently Used
        * evict page that was most recently used in past
    * LFU
        * Least Frequently Used
        * evict page that was used least no. of times in past
    * MFU
        * Most Frequently Used
        * evict page that was used most no. of times in past
* Contiguous Memory Allocation Algorithm
    * First Fit = use first hole avaliable from beginning
    * Best Fit = use smallest hole avaliable
    * Worst Fit = use largest hole avaliable
    * Next Fit = use first hole avaliable from recently used hole
* Disk Scheduling Algorithm
    * FCFS
        * First Come First Serve
        * request arriving first get served first
    * SSTF
        * Shortest Seek Time First
        * request closest to current head position get served first
    * SCAN
        * Elevator
        * head go in one direction serving requests
        * head reverse direction on reaching end
    * C-SCAN
        * Circular SCAN
        * head jump to beginning on reaching end
    * LOOK
        * head go in one direction serving requests
        * head reverse direction on reaching last request
    * C-LOOK
        * Circular LOOK
        * head jump to first request on reaching last request