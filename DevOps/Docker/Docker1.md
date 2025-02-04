# Container C
* docker create I:T ---------------- create from image I:tag T
    * --name C --------------------- with name C
    * --p HP:DP -------------------- with port mapping HP:DP
    * -w P ------------------------- working directory at path P
    * -e K=V ----------------------- set environment variable K=V
    * --restart no ----------------- will never restart
    * --restart always ------------- will always restart
    * --restart on-failure:3 ------- will restart 3 times
    * --restart unless-stopped ----- will always restart until maunally stopped 
    * --network N ------------------ connect to network N
    * -m="Xg" ---------------------- allocate XGB memory
    * --cpus="X" ------------------- allocate X cpus
* docker rm C ---------------------- delete
* docker start C ------------------- start
* docker stop C -------------------- stop
* docker run I:T ------------------- create and start with logs
    * -d --------------------------- without logs
    * (same as docker create I:T)
* docker restart C ----------------- restart
* docker kill C -------------------- sigkill
* docker wait C -------------------- wait till termination
* docker pause C ------------------- pause
* docker unpause C ----------------- resume
*
*
* docker ps ------------------------ list running
    * -a --------------------------- list all
* docker container prune ----------- delete all
* docker top C --------------------- list processes
* docker port C -------------------- list port mappings
* docker port C P ------------------ port P mapping
* docker stats --------------------- list CPU and memory utilization
* docker diff C -------------------- difference with its image
* docker cp F1 C:F2 ---------------- copy local:F1 to S:F2
* docker cp C:F1 F2 ---------------- copy S:F1 to local:F2
* docker inspect C ----------------- details
* docker logs C -------------------- logs
* docker exec C X ------------------ run command X
    * -u root ---------------------- as root user
    * -w P ------------------------- working directory at path P
    * -e K=V ----------------------- set environment variable K=V
    * -it -------------------------- enable interactive mode


# Image I:Tag T
* docker build P ------------------- create from dockerfile in path p
    * -t I:T ----------------------- with image I:tag T
* docker commit C I:T -------------- create from container C
* docker tag I1:T1 I2:T2 ----------- create from image I1:tag T1
* docker rmi I:T ------------------- delete
* docker images -------------------- list all
* docker image prune --------------- delete unnamed
    * -a --------------------------- delete all
* docker history I:T --------------- history
* docker search S ------------------ search text S in registry
* docker pull I:T ------------------ pull from registry
* docker push I:T ------------------ push to registry