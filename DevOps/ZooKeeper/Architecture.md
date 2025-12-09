# Node
* no. = odd
* minimum = 3
* common = 5
* Leader = write operation
* Follower
    * read operation
    * leader election

# Z Node
* Persistent
    * deletion = manual
    * children nodes
* Ephemeral
    * deletion
        * manual
        * client disconnection
    * no children nodes
* Sequential
    * append number to last of name
    * number increases sequentially on new node creation

# Configuration
* zoo1:2181,zoo2:2182,zoo3:2183 = client connection string
* zoo1, zoo2, zoo3 = server hostnames
* 2181, 2182, 2183 = client connection ports
* data/myid = server ids
* hostname:8080/commands = zookeeper UI

# Lifecycle Command
* ./bin/zkServer.sh start conf/zoo.cfg
* ./bin/zkServer.sh stop
* ./bin/zkCli.sh -timeout 3000 -server zoo1:2181,zoo2:2182,zoo3:2183