# Environment
* Delete workspace before build starts = delete workspace before starting the build
    * Patterns for files to be deleted = pattern filter
        * Include = include
        * Exclude = exclude
    * Apply pattern also on directories = include directories or not
    * Check parameter = check for boolean parameter, if true then delete workspace
* Use secret text(s) or file(s) = binding between credentials and environment variables
    * Bindings = Certificate, Git Username and Password, SSH User Private Key, Secret ZIP file, Secret file, Secret text, Username and password (conjoined), Username and password (separated)
* Send files or execute commands over SSH before the build starts = do before starting the build on SSH servers
    * SSH Publishers = list of SSH servers
        * SSH Server = SSH server
            * Name = name
            * Transfers = list of transfer sets
                * Transfer Set = transfer set
                    * Source files = list of files
                    * Remove prefix = remove prefix from file names
                    * Remote directory = path
                    * Exec command = commands to execute
* Send files or execute commands over SSH after the build runs = do after completing the build on SSH servers
    * SSH Publishers
* Add timestamps to the Console Output = timestamp in logs of Console Output

# Build Steps
* Execute shell = linux
    * Command = commands to execute
* Invoke top-level Maven targets = maven tool
    * Maven Version = version
    * Goals = commands to execute
* Send files or execute commands over SSH = do during the build on SSH servers
    * SSH Publishers

# Post-build Actions
* Archive the artifacts = show artifacts in jenkins UI
    * Files to archive = list of files
* Build other projects = starts build of others
    * Projects to build = list of projects
    * Trigger only if build is stable
    * Trigger even if the build is unstable
    * Trigger even if the build fails
* Send build artifacts over SSH = send artifacts to SSH servers
    * SSH Publishers
* Delete workspace when build is done = delete workspace after completing the build
    * Patterns for files to be deleted
    * Apply pattern also on directories
    * Clean when status is = check for build status
        * Success
        * Unstable
        * Failure
        * Not Built
        * Aborted
    * Don't fail the build if cleanup fails = whether failed cleanup fails build or not