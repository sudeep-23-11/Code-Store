# Scalability
* handling increased load by adding resources, without degrading performance
* Type
    * Vertical scaling
        * scale up = increasing power of one machine
        * hardware bound
        * SPOF = Single Point Of Failure
        * Consistency
    * Horizontal scaling
        * scale out = adding more machines
        * no. of machines can increase linearly
        * Resilience = failure isolation, graceful degradation, fast recovery
        * Load Balancing

# Load Balancing
* distributing incoming traffic across multiple servers
* Hashing
    * Modulo
        * V=hash(request_id)%N, N=no. of servers
        * V=0 => 1st server, V=1 => 2nd server,... V=N-1 => Nth server
        * cannot increase or decrease no. of servers
        * changing N will discard cache of servers
    * Consistent
        * take ring of range 0 to max value of hash
        * place hash(request_id), hash(server_id) on ring
        * each request will go to next server clockwise on ring
        * some servers can have large no. of requests due to their positioning on ring
    * Consistent with Virtual nodes
        * similar as consistent
        * place hash(server_id_#node_no) on ring
        * ring will have N virtual nodes of each server

# Message Queue
* asynchronous processing
* Decoupling
    * Message = abstraction of data
    * Producer = send messages
    * Consumer = receive messages
    * Broker = store, route messages
* Type
    * Point to Point
        * message received by one of competing consumers
        * message removed from broker after consumption
    * Publish Subscribe
        * producer publish message
        * message received by all subscribed consumers
* Delivery semantic
    * At most once = message can be lost
    * At least once = message can be duplicated
    * Exactly once = no loss, no duplication

# Caching
* storing frequently accessed data
* Type
    * CPU
        * Type
            * L1
                * per core
                * smallest size
                * fastest speed
            * L2
                * per core or shared by cores
                * moderate size
                * moderate speed
            * L3
                * shared by all cores
                * largest size
                * slowest speed
    * Client Side
    * Application Server
    * Database
    * Distributed = separate cache servers
    * CDN
        * Content Delivery Network
        * globally distributed network of cache servers
        * deliver content from locations closer to users
* Eviction Policy
    * FIFO
        * First In First Out
        * evict data that entered cache first
    * LRU
        * Least Recently Used
        * evict data that was least recently used in past
    * LFU
        * Least Frequently Used
        * evict data that was used least no. of times in past
    * Random = evict random

# Consistency
* correctness of data across reads and writes
* Type
    * Strong = all replicas read lastest write
    * Weak = replicas read outdated write
    * Eventual = replicas initially have different values but eventually converge to same
    * Causal = all nodes must follow ordering of related events
    * Read your Writes = client read its lastest write
    * Monotonic = order of read write is always same for one client
* CAP Theorem
    * distributed systems can have at most two of these properties
    * consistency, availability, partition tolerance