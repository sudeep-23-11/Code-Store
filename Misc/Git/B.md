* git clone _ ---------------------- clone remote repository _
* git remote ----------------------- list remote repositories
    * -v --------------------------- include fetch and push
* git remote add origin _ ---------- add remote repository _ as origin
* git remote show origin ----------- show origin
* git remote rm origin ------------- remove origin
* git push -u origin _ ------------- push changes of branch _ to origin from local
    * --force ---------------------- force push without any restrictions
* git push -d origin _ ------------- delete branch _ in origin
* git fetch ------------------------ fetch changes from origin to local
* git merge ------------------------ merge changes to local
* git pull ------------------------- fetch changes from origin to local and merge them
*
*
* git branch ----------------------- list branches
    * -v --------------------------- include last commit
    * --merged --------------------- list merged branches
    * --no-merged ------------------ list not merged branches
* git branch _ --------------------- create branch _
    * -d --------------------------- delete merged branch _
    * -D --------------------------- delete not merged branch _
* git branch -m _ _ ---------------- rename branch from _ to _ 
* git checkout _ ------------------- switch to branch _
* git merge _ ---------------------- merge branch _ to current branch
*
*
* git checkout _ ------------------- move Head to commit _
* git reset _ ---------------------- move Head to commit _ and preserve changes in working directory and staging area
    * --hard ----------------------- discard changes
*
*
* git mv _ _ ----------------------- move/rename file _ to _ and stage it
* git rm _ ------------------------- remove file _ and stage it
    * --cached --------------------- untrack changes of file _ and stage it