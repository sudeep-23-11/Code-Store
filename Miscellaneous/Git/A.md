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
* git restore -A ------------------- discard changes of all changed files
*
*
* git commit -m _ ------------------ commit with message _
    * -a --------------------------- skip staging area
    * --amend ---------------------- modify last commit
* git log -------------------------- list commits
    * -p --------------------------- include details
    * --stat ----------------------- include changed files
    * --since=_ -------------------- done in last _ amount of time
    * --pretty=oneline ------------- in single line with name
        * =short ------------------- include author
        * =full -------------------- include author and commiter
        * =format:_ ---------------- in specific format _