# Tag T
* git tag T ------------------------ create
    * -a -m M ---------------------- include tagger, date, message M
    * -f --------------------------- update
    * -d --------------------------- delete
    * I ---------------------------- commit of id I
* git tag -------------------------- list
* git show T ----------------------- details

# Branch B
* git branch B --------------------- create
    * -d --------------------------- delete merged
    * -D --------------------------- delete non-merged
    * -m --------------------------- rename
    * -M --------------------------- force rename
* git branch ----------------------- list
    * -a --------------------------- include remote branches
    * -v --------------------------- include last commit
    * --merged --------------------- list merged
    * --no-merged ------------------ list non-merged
* git switch B --------------------- switch
    * -c --------------------------- create and switch
* git merge B ---------------------- merge all commits
* git rebase B --------------------- rebase to latest commit

# Remote Repository R
* git clone R ---------------------- clone
* git remote ----------------------- list
    * -v --------------------------- include fetch, push
    * add origin R ----------------- add as origin
    * show origin ------------------ show origin
    * rm origin -------------------- remove origin

# Remote Tag T
* git push origin T ---------------- push
    * -f --------------------------- force push
    * -d --------------------------- delete

# Remote Branch B
* git push origin B ---------------- create and push
    * -u --------------------------- set upstream branch
    * -f --------------------------- force push
    * -d --------------------------- delete
* git push ------------------------- push to its upstream branch
* git pull origin B ---------------- pull
    * -f --------------------------- force pull
* git pull ------------------------- pull from its upstream branch

# LFS
* git lfs install ------------------ initialize repository as git lfs
* git lfs track *.E ---------------- track files having extension E as lfs

# Workspace
* .gitignore ----------------------- not track its content
* .gitattributes ------------------- track its content as lfs
* .git ----------------------------- metadata of repository