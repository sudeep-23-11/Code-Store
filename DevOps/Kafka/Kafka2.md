# Topic T (Topic)
* ./bin/kafka-topics.sh --bootstrap-server localhost:9092
    * --topic T --create ------------------- create
            * --partitions P --------------- with P partitions
            * --replication-factor R ------- with R replications
        * --delete ------------------------- delete
        * --alter --partitions P ----------- update with P partitions
        * --describe ----------------------- details
    * --list ------------------------------- list


# Topic T (Producer)
* ./bin/kafka-console-producer.sh --bootstrap-server localhost:9092
    * --topic T ---------------------------- enter data
        * < F ------------------------------ take data from file F


# Topic T (Consumer)
* ./bin/kafka-console-consumer.sh --bootstrap-server localhost:9092
    * --topic T ---------------------------- show from end
        * --from-beginning ----------------- show from beginning
        * --partition P -------------------- show for partition P
            * --offset latest -------------- show from end 
            * --offset earliest ------------ show from beginning
            * --offset N ------------------- show after N data
        * --group G ------------------------ having consumer group G


# Consumer Group G
* ./bin/kafka-consumer-groups.sh --bootstrap-server localhost:9092
    * --group G --delete ------------------- delete
        * --describe ----------------------- details 
            * --offsets -------------------- include offsets
            * --members -------------------- include members
            * --state ---------------------- include state
    * --list ------------------------------- list
        * --type --------------------------- include type
        * --state -------------------------- include state