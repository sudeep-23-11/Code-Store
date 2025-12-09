# Processor
* Scheduling
    * Run once = run only once at that moment
    * Timer driven = run at regular intervals
    * Cron driven = run at a particular time
    * Concurrent tasks = threads
* Properties
    * create new flowfiles
    * modify content, attributes of existing flowfiles
* Relationships
    * possible results of flowfile processing
    * can automatically terminate, retry

# FlowFile
* abstraction of data
* Content = actual data
* Attributes = metadata
* Expression Language = ${attribute_name}

# Connection
* queue of flowfiles
* input = Relationship, Input Port
* output = Processor, Funnel, Output Port
* Back Pressure
    * maximum capacity
    * Object Threshold = maximum number of flowfiles
    * Size Threshold = maximum total size of flowfiles
* FlowFile Expiration = maximum lifetime of flowfile
* Funnel = combine flowfiles of multiple connections into one

# Retry
* Number of Retry Attempts = no. of retry attempts
* Retry Back Off Policy
    * Penalize
        * processor will not stop
        * processor will process other flowfiles
        * Penalty Duration = time duration in which flowfile is not processed
    * Yield
        * processor will stop
        * processor will hold other flowfiles
        * Yield Duration = time duration in which processor is stopped
    * Penalty, Duration will get doubled after very subsequent retry attempt
* Retry Maximum Back Off Period = maximum time duration between two successive retry attempts

# Process Group
* set of processors
* Output Port = send flowfiles outside
* Input Port = receive flowfiles inside

# Lifecycle Command
* ./bin/nifi.sh start
* ./bin/nifi.sh stop