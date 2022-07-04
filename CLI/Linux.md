* . -------------------------------- current directory
* .. ------------------------------- parent directory
* ~ -------------------------------- home directory
* ._ ------------------------------- hidden file _
* _ | _ ---------------------------- output of _ becomes input of _
*
*
* ls _ ----------------------------- list contents of _
    * -a --------------------------- include hidden content
    * -l --------------------------- include details
    * -r --------------------------- reverse order
    * -R --------------------------- include recursive content
    * -s --------------------------- include file size
    * -S --------------------------- sort by file size
    * -t --------------------------- sort by time
    * -X --------------------------- sort by extension name
*
*
* touch _ -------------------------- create file _
* cat _ ---------------------------- view file _
* cat > _ -------------------------- create and write file _
* cat >> _ ------------------------- append file _
* head _ --------------------------- view first 10 lines of file _
* tail _ --------------------------- view last 10 lines of file _
* less _ --------------------------- view file _ in full screen mode
* rm _ ----------------------------- remove file _
*
*
* mkdir _ -------------------------- create directory _
* rmdir _ -------------------------- remove empty directory _
* rm -r _ -------------------------- remove non-empty directory _
* cd _ ----------------------------- change directory to _
* pwd ------------------------------ path of working directory
*
*
* mv _ _ --------------------------- move/rename file/directory _ to _
* cp _ _ --------------------------- copy file _ to _
* cp -r _ _ ------------------------ copy directory _ to _
*
*
* grep _ _ ------------------------- search text _ in file _
    * -i --------------------------- ignore case
    * -r --------------------------- include recursive content
* grep _ * ------------------------- search text _ in all files
* grep _ *._ ----------------------- search text _ in all files with extension _
*
*
* find ./ -name _ ------------------ find all files with name _
    * -i --------------------------- ignore case
* find ./ -name *._ ---------------- find all files with extension _
*
*
* echo _ --------------------------- display _
    * -e --------------------------- enable escape sequences
    * -n --------------------------- continue in same line after displaying
* echo $ _ ------------------------- display value of variable _
*
*
* date ----------------------------- date
* cal ------------------------------ calendar
* history -------------------------- history of commands
* clear ---------------------------- clear terminal
* exit ----------------------------- exit terminal
* man _ ---------------------------- manual for command _