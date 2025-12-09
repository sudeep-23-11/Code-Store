# Broker
* cluster node

# Topic
* storage entity
* key-value pairs
    * key
        * present = partitioning on hash(key)
        * absent = random partitioning
    * value = actual message

# Partition
* logical division of topic
* Replica
    * copy of partition per broker
    * no. of brokers >= no. of replicas
    * Leader = read, write data
    * Follower
        * fetch data from leader
        * leader election 
    * Isr
        * in sync with leader
        * leader election 
    * Min.Isr = minimum Isr for successful write

# Segment
* file
* physical division of partition

# Producer
* publish to topic
* send data to topic

# Consumer
* subscribe to topic
* receive data from topic

# Consumer Group
* set of consumers
* one partition of topic is read by one consumer of consumer group
* topic is read by mutiple consumer groups

# Lifecycle Command
* ./bin/zookeeper-server-start.sh config/zookeeper.properties
* ./bin/zookeeper-server-stop.sh
* ./bin/kafka-server-start.sh config/server.properties
* ./bin/kafka-server-stop.sh