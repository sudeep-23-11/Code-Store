# Theory
* Processor
    * creates new FlowFiles
    * modify content and/or attributes of existing FlowFiles
    * Scheduling
        * Run once = run only once at that moment
        * Timer driven = run at regular intervals
        * Cron driven = run at a particular time
        * Concurrent tasks = threads
    * Properties = creation and/or modification of FlowFiles
    * Relationships
        * possible results of processing of a FlowFile
        * can automatically terminate or retry

* FlowFile
    * abstraction of data
    * Content = actual data
    * Attributes = metadata
    * Expression Language = ${attribute_name}

* Connection
    * Relationships
    * queue of FlowFiles
    * Back Pressure
        * maximum amount of FlowFiles a connection can hold
        * Object Threshold = maximum number of FlowFiles
        * Size Threshold = maximum total size of FlowFiles
    * FlowFile Expiration = maximum amount of time a connection can hold a FlowFile
    * pair of output and input ports

* Process Group
    * set of processors
    * Output Port = send FlowFiles outside
    * Input Port = receive FlowFiles inside

* Funnel = combine FlowFiles of multiple connections into a single connection
* Label = labelling