* docker create I:T ---------------- create container of image I:tag T
    * --name C --------------------- with name C
    * --p HP:DP -------------------- with port mapping Host Port HP:Port DP
* docker start C ------------------- start container C
* docker stop C -------------------- stop container C
* docker run I:T ------------------- create and start container of image I:tag T with logs
    * --name C --------------------- with name C
    * --p HP:DP -------------------- with port mapping Host Port HP:Port DP
    * -d --------------------------- without logs
* docker restart C ----------------- restart container C
* docker kill C -------------------- sigkill container C
* docker wait C -------------------- wait till conatiner C terminates
* docker pause C ------------------- pause container C
* docker unpause C ----------------- resume container C
* docker rm C ---------------------- delete conatiner C
* 
* 
* docker ps ------------------------ list running containers
    * -a --------------------------- list all containers
* docker top C --------------------- list processes of container C
* docker diff C -------------------- difference between container C and its image
* docker cp F1 C:F2 ---------------- copy file F1 of local to file F2 of container C
* docker cp C:F1 F2 ---------------- copy file F1 of conatiner C to file F2 of local
* docker logs C -------------------- display logs of container C
* docker attach C ------------------ open interactive session with container C
* docker exec C B ------------------ execute bash command B inside container C
* docker exec -it C bash ----------- open bash terminal inside container C
* 
* 
* docker build P ------------------- create image from dockerfile in path p
    * -t I:T ----------------------- image I:tag T
* docker commit C I:T -------------- create image I:tag T from container C
* docker tag I1:T1 I2:T2 ----------- create image I2:tag T2 from image I1:tag T1
* docker rmi I:T ------------------- delete image I:tag T
* docker images -------------------- list all images
* docker history I:T --------------- history of image I:tag T
* docker pull I:T ------------------ pull image I:tag T from registry
* docker push I:T ------------------ push image I:tag T to registry
* docker search S ------------------ search text S in registry
* 
* 
* docker container prune ----------- delete all containers
* docker image prune --------------- delete unnamed images
    * -a --------------------------- delete all images
* docker system prune -------------- delete all containers and unnamed images
    * -a --------------------------- delete all containers and all images