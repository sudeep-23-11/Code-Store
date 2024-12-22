* git clone _ ---------------------- clone remote repository _
* git remote ----------------------- list remote repositories
    * -v --------------------------- include fetch and push
* git remote add origin _ ---------- add remote repository _ as origin
* git remote show origin ----------- show origin
* git remote rm origin ------------- remove origin
* git fetch origin ----------------- fetch changes from origin
*
*
* git push origin _ ---------------- push changes to origin/_ branch
    * -u --------------------------- push and set origin/_ as upstream branch
    * --force ---------------------- force push
    * -d --------------------------- delete origin/_ branch
* git push ------------------------- push to its upstream branch
* git pull origin _ ---------------- pull changes from origin/_ branch
    * --force ---------------------- force pull
* git pull ------------------------- pull from its upstream branch
*
*
* git stash list ------------------- list stashes
* git stash ------------------------ stash changes
* git stash save _ ----------------- stash changes with message _
* git stash apply ------------------ apply latest stash
* git stash apply _ ---------------- apply stash of id _
* git stash drop ------------------- delete latest stash
* git stash drop _ ----------------- delete stash of id _
* git stash clear ------------------ delete all stashes
*
*
* git branch ----------------------- list branches
    * -v --------------------------- include last commit
    * --merged --------------------- list merged branches
    * --no-merged ------------------ list non-merged branches
* git branch _ --------------------- create branch _
    * -d --------------------------- delete merged branch _
    * -D --------------------------- delete non-merged branch _
    * -m --------------------------- rename branch to _
    * -M --------------------------- force rename
* git checkout _ ------------------- switch to branch _
* git merge _ ---------------------- merge branch _
*
*
* git checkout _ ------------------- switch to commit _
* git reset _ ---------------------- move Head to commit _ and preserve changes in working directory and staging area
    * --hard ----------------------- discard changes