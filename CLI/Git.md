* Types of Version Control Systems are Local, Centralized, Distributed
* Three Stage Architecture of Git are Working directory, Staging area, Git directory
* Types of Primary branches in Git are Main, Develop
* Types of Supporting branches in Git are Feature, Release, Hotfix
*
*
* All Git related information is present in .git directory
* Newly created file/directory will always be untracked, after staging it for the first time, Git will start tracking it
* Git will ignore changes of untracked file/directory written in .gitignore file
* Merge Conflicts can be resolved by manually selecting in code editor, which changes we want to keep, after that add them and commit
*
*
* git config --global user.name _ -- set _ as name
* git config --global user.email _ - set _ as email
* git config --list ---------------- details
* git config --global alias._ _ ---- _ is alias of _
* git init ------------------------- initialize git repository
*
*
* git status ----------------------- status of repository
* git add _ ------------------------ stage changed file _
* git add -A ----------------------- stage all changed files
* git diff ------------------------- compare working directory with staging area
    * --staged --------------------- compare staging area with last commit
* git restore _ -------------------- discard changes of changed file _
    * --staged --------------------- unstage changed file _
*
*
* git checkout _ ------------------- move Head to commit _
* git checkout -f ------------------ discard all changes after last commit
* git reset --hard _ --------------- discard all changes after _ commit
*
*
* git commit -m _ ------------------ commit with message _
    * -a --------------------------- skip staging area
    * --amend ---------------------- modify last commit
* git log -------------------------- list commits
    * -p --------------------------- include details
    * --stat ----------------------- include changed files
    * --since=_ -------------------- list commits done in last _ amount of time
    * --pretty=oneline ------------- list commits in single line with name only
        * =short ------------------- include author
        * =full -------------------- include author and commiter
        * =format:_ ---------------- in specific format _
*
*
* git mv _ _ ----------------------- move/rename file _ to _ and stage it
* git rm _ ------------------------- remove file _ and stage it
    * --cached --------------------- untrack changes of file _ and stage it
*
*
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
* git merge _ ---------------------- merge branch _