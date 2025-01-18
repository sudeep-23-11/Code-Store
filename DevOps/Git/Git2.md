# Remote Repository R
* git clone R ---------------------- clone
* git remote ----------------------- list
    * -v --------------------------- include fetch and push
* git remote add origin R ---------- add as origin
* git remote show origin ----------- show origin
* git remote rm origin ------------- remove origin


# Push to and Pull from origin/B branch
* git push origin B ---------------- push changes
    * -u --------------------------- set as upstream branch
    * --force ---------------------- force push
    * -d --------------------------- delete
* git push ------------------------- to its upstream branch
* git pull origin B ---------------- pull changes
    * --force ---------------------- force pull
* git pull ------------------------- from its upstream branch


# Branch B
* git branch B --------------------- create
    * -d --------------------------- delete merged
    * -D --------------------------- delete non-merged
    * -m --------------------------- rename
    * -M --------------------------- force rename
* git branch ----------------------- list
    * -v --------------------------- include last commit
    * --merged --------------------- list merged
    * --no-merged ------------------ list non-merged
* git checkout B ------------------- switch
* git merge B ---------------------- merge


# Global
* git config --global user.name N -- name is N
* git config --global user.email E - email is E
* git config --list ---------------- details
* git config --global alias.X Y ---- X is alias of Y
* git init ------------------------- initialize git repository
* git status ----------------------- status of repository