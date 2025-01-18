# Theory
* Types of Version Control Systems are Local, Centralized, Distributed
* Three Stage Architecture of Git are Working directory, Staging area, Git directory
* Types of Primary branches in Git are Main, Develop
* Types of Supporting branches in Git are Feature, Release, Hotfix


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
    * -m M ------------------------- with message M
    * -a --------------------------- skip staging area
    * --amend ---------------------- modify last commit
* git log -------------------------- list
    * -p --------------------------- details
    * --stat ----------------------- changed files
    * --since=D -------------------- since date D


# Commit C
* git checkout C ------------------- switch
* git reset C ---------------------- move Head
    * --soft ----------------------- preserve changes
    * --hard ----------------------- discard changes


# Stash
* git stash ------------------------ stash changes
    * save M ----------------------- with message M
* git stash apply ------------------ apply latest stash
    * I ---------------------------- stash of id I
* git stash drop ------------------- delete latest stash
    * I ---------------------------- stash of id I
* git stash list ------------------- list
* git stash clear ------------------ delete all