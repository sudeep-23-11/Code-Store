* zookeeper nodes
    * odd in number
    * minimum = 3
    * common = 5
    * leader
        * one
        * write operation
    * follower
        * rest
        * read operation
    * leader goes down
        * leader election is performed
        * follower becomes new leader

* data/myid = id of server

* zoo1:2181,zoo2:2182,zoo3:2183
    * string for clients for connect
    * zoo1, zoo2, zoo3 = hostname of servers
    * 2181, 2182, 2183 = client port of servers

* znodes
    * persistent
        * deleted manually
        * children nodes
    * ephemeral
        * deleted manually or when client disconnects
        * no children nodes
    * sequential
        * append number to last of name
        * number increases sequentially on new node creation

* ./bin/zkServer.sh start conf/zoo.cfg
* ./bin/zkServer.sh stop conf/zoo.cfg
* ./bin/zkCli.sh -timeout 3000 -server zoo1:2181,zoo2:2182,zoo3:2183