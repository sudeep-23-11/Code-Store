# Topic T (Topic)
* ./bin/kafka-topics.sh --bootstrap-server localhost:9092
    * --topic T --create ------------------- create
            * --partitions P --------------- with P partitions
            * --replication-factor R ------- with R replications
            * --if-not-exists -------------- if it does not exists
        * --delete ------------------------- delete
            * --if-exists ------------------ it it exists
        * --alter --partitions P ----------- update with P partitions
        * --describe ----------------------- details
    * --list ------------------------------- list


# Topic T (Producer)
* ./bin/kafka-console-producer.sh --bootstrap-server localhost:9092
    * --topic T ---------------------------- enter data
        * < F ------------------------------ take data from file F
        * --property parse.key=true -------- include key
        * --property key.separator=$'\t' --- use \t as key separator


# Topic T (Consumer)
* ./bin/kafka-console-consumer.sh --bootstrap-server localhost:9092
    * --topic T ---------------------------- show from end
        * --from-beginning ----------------- show from beginning
        * --partition P -------------------- show for partition P
            * --offset latest -------------- show from end 
            * --offset earliest ------------ show from beginning
            * --offset N ------------------- show after N data
        * --group G ------------------------ having consumer group G
        * --property print.key=true -------- include key
            * .value=true ------------------ include value
            * .partition=true -------------- include partition
            * .offset=true ----------------- include offset
            * .timestamp=true -------------- include timestamp
        * --property key.separator=$'\t' --- use \t as key separator
        * --property line.separator=$'\n' -- use \n as line separator


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


# Reassignment
* ./bin/kafka-reassign-partitions.sh --bootstrap-server localhost:9092
    * --topics-to-move-json-file P --------- generate.json at path P
    * --broker-list 0,1,2 ------------------ borker list
    * --generate --------------------------- content of execute.json
    * --reassignment-json-file P ----------- execute.json at path P
    * --execute ---------------------------- start
    * --cancel ----------------------------- stop
    * --verify ----------------------------- verify
    * --list ------------------------------- list all active