# Theory
* package
    * application code
    * libraries, dependencies
    * runtine environment, configurations
* virtualization software
    * VM virtualize applications, kernel
    * docker virtualize applications, uses host kernel
* Docker Desktop
    * VM of one OS can run on another
    * docker image of one OS cannot run on another
    * run linux docker images on Windows, Mac
    * provide hypervisor layer having linux kernel
* Image
    * docker artifact
    * Tag = Version
* Container = running instance of docker image

# System
* docker system prune -------------- delete everything with unnamed images
    * -a --------------------------- with all images

# Container C
* docker create I:T ---------------- create from image I:tag T
    * --name C --------------------- with name C
    * --p HP:DP -------------------- with port mapping HP:DP
    * -w P ------------------------- working directory at path P
    * -e K=V ----------------------- set environment variable K=V
    * --restart no ----------------- will never restart
    * --restart always ------------- will always restart
    * --restart on-failure:X ------- will restart X times
    * --restart unless-stopped ----- will always restart until maunally stopped 
    * --network N ------------------ connect to network N
    * -m="Xg" ---------------------- with XGB memory
    * --cpus="X" ------------------- with X cpus
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