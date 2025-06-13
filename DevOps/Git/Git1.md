# Theory
* Version Control Systems = Local, Centralized, Distributed
* Three Stage Architecture = Working directory, Staging area, Git directory
* Primary branches = Main, Develop
* Supporting branches = Feature, Release, Hotfix


# Stage changes of F
* git add F ------------------------ stage changes 
* git restore F -------------------- discard changes
    * --staged --------------------- unstage changes
* git diff ------------------------- compare working directory with staging area
    * --staged --------------------- compare staging area with last commit
* git mv F1 F2 --------------------- move F1 to F2 and stage changes
* git rm F ------------------------- remove F and stage changes
    * --cached --------------------- untrack F


# Commit changes of F
* git commit F --------------------- commit changes
    * -m M ------------------------- include message M
    * -C I ------------------------- include message of commit of id I
    * -a --------------------------- skip staging area
    * --amend ---------------------- modify last commit
* git log -------------------------- list
    * -p --------------------------- include details
    * --stat ----------------------- include changed files
    * -N --------------------------- last N commits
    * --reverse -------------------- reverse list


# Commit C
* git checkout C ------------------- head detached to C
* git reset C ---------------------- head moved to C
    * --soft ----------------------- preserve changes
    * --hard ----------------------- discard changes


# Stash
* git stash ------------------------ stash
    * save M ----------------------- include message M
* git stash apply ------------------ apply
    * I ---------------------------- stash of id I
* git stash drop ------------------- delete
    * I ---------------------------- stash of id I
* git stash list ------------------- list
* git stash clear ------------------ delete all