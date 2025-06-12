# Theory
* ZooKeeper node
    * odd in number
    * minimum = 3
    * common = 5
    * Leader
        * one
        * write operation
    * Follower
        * rest
        * read operation
    * leader goes down
        * leader election is performed
        * follower becomes new leader

* Z node
    * Persistent
        * deleted manually
        * children nodes
    * Ephemeral
        * deleted manually or when client disconnects
        * no children nodes
    * Sequential
        * append number to last of name
        * number increases sequentially on new node creation

* zoo1:2181,zoo2:2182,zoo3:2183
    * string for clients for connect
    * zoo1, zoo2, zoo3 = hostname of servers
    * 2181, 2182, 2183 = client port of servers

* data/myid = id of server
* hostname:8080/commands = UI of zookeeper

* ./bin/zkServer.sh start conf/zoo.cfg
* ./bin/zkServer.sh stop
* ./bin/zkCli.sh -timeout 3000 -server zoo1:2181,zoo2:2182,zoo3:2183