# Theory
* Broker = cluster node

* Topic
    * storage entity
    * key-value pairs
    * Key
        * optional
        * if provided partition = hash(key)
        * if not provided partition = random
    * Value = actual message

* Partition
    * logical division
    * topic contains partitions
* Segment
    * physical division as file
    * partition contains segments

* Producer
    * publish to topic
    * send data to topic
* Consumer
    * subscribe to topic
    * receive data from topic

* Consumer Group
    * set of consumers
    * partitions of a topic are divided among consumers having same consumer group
    * entire topic is avaliable for consumers having different consumer groups

* ./bin/zookeeper-server-start.sh config/zookeeper.properties
* ./bin/zookeeper-server-stop.sh config/zookeeper.properties
* ./bin/kafka-server-start.sh config/server.properties
* ./bin/kafka-server-stop.sh config/server.properties