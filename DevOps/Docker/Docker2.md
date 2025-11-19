# Image I:Tag T
* docker build P ------------------- create from dockerfile in path P
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


# Network N
* docker network create N ---------- create
    * -d bridge -------------------- having bridge driver
    * -d host ---------------------- having host driver
* docker network rm N -------------- delete
* docker network connect N C ------- connect container C
* docker network disconnect N C ---- disconnect container C
* docker network ls ---------------- list all
* docker network prune ------------- delete all
* docker network inspect N --------- details


# Containers of Service S
* docker compose ls ---------------- list runnning compose projects
    * -a --------------------------- list all
* docker compose create S ---------- create
* docker compose rm S -------------- delete
* docker compose start S ----------- start
* docker compose stop S ------------ stop
* docker compose up S -------------- create and start with logs
    * -d --------------------------- without logs
* docker compose down S ------------ stop and delete
* docker compose restart S --------- restart
* docker compose kill S ------------ sigkill
* docker compose wait S ------------ wait till termination
* docker compose pause S ----------- pause
* docker compose unpause S --------- resume
*
*
* docker compose ps S -------------- list running
    * -a --------------------------- list all
* docker compose top S ------------- list processes
* docker compose port S:P ---------- port P mapping
* docker compose cp F1 S:F2 -------- copy local:F1 to S:F2
* docker compose cp S:F1 F2 -------- copy S:F1 to local:F2
* docker compose logs S ------------ logs
* docker compose exec S X ---------- run command X
    * (docker exec C X)
* docker compose build S ----------- create from dockerfile
* docker compose images S ---------- list images
* docker compose pull S ------------ pull from registry
* docker compose push S ------------ push to registry