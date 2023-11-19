* hadoop fs -ls _ ------------------ list contents of _
*
*
* hadoop fs -touchz _ -------------- create file _
* hadoop fs -cat _ ----------------- view file _
* hadoop fs -rm _ ------------------ remove file _
*
*
* hadoop fs -mkdir _ --------------- create directory _
* hadoop fs -rmdir _ --------------- remove empty directory _
* hadoop fs -rm -r _ --------------- remove non-empty directory _
*
*
* hadoop fs -mv _ _ ---------------- move/rename flie/directory _ to _
* hadoop fs -cp _ _ ---------------- copy file/directory _ to _
*
*
* hadoop fs -moveFromLocal _ ------- move file/directory _ to hdfs from local
* hadoop fs -copyFromLocal _ ------- copy file/directory _ to hdfs from local
* hadoop fs -copyToLocal _ --------- copy file/directory _ from hdfs to local
*
*
* hadoop jar /usr/jars/hadoop-examples.jar - list map reduce programs
* hadoop jar /usr/jars/hadoop-examples.jar _ _ _ - execute map reduce program _ on file _ and store result in directory _