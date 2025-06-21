# General
* Description
* Discard old builds = remove old builds
    * Strategy = Log Rotation
        * Days to keep builds = max no. of days to keep builds
        * Max # of builds to keep = max no. of builds to keep
        * Days to keep artifacts = max no. of days to keep artifacts
        * Max # of builds to keep with artifacts = max no. of artifacts to keep
        * Remove last build = include lastest build or not
* GitHub project = github repo
    * Project url = url
* This project is parameterized = list of parameters
    * Boolean Parameter = boolean
        * Name, Description
        * Set by Default = default is true or false
    * Choice Parameter = choice
        * Name, Description
        * Choices = list of options, default is first one
    * Credentials Parameter = credential
        * Name, Description, Default Value
        * Credential type = type
        * Required = required or not
    * File Parameter = file
        * Description
        * File location = location in workspace
    * Multi-line String Parameter = multi-line string
        * Name, Description, Default Value
    * Password Parameter = password
        * Name, Description, Default Value
    * String Parameter = string
        * Name, Description, Default Value
        * Trim the string = remove whitespaces from beginning and end
* Throttle builds = control no. of builds
    * Number of builds = max no. of builds allowed
    * Time period = time interval
    * Allow user triggered builds to skip the rate limit = include user builds or not
* Execute concurrent builds if necessary = whether concurrent builds are allow or not
* Quiet period = time interval between getting triggered by SCM and actually starting the build
    * Quiet period = time interval
* Retry Count = no. of times jenkins tries to checkout SCM
    * SCM checkout retry count = no. of times
* Block build when upstream project is building = halts build until upstream is building
* Block build when downstream project is building = halts build until downstream is building
* Use custom workspace = user defined workspace
    * Directory = path of workspace
* Display Name = name in jenkins UI


# Source Code Management = Git
* Repositories = list of github repos
    * Repository URL = url
    * Credentials = credentials
    * Name = id
* Branches to build = list of github branches
    * Branch Specifier = branch


# Triggers
* Build after other projects are built = starts build after others
    * Projects to watch = list of projects
    * Trigger only if build is stable = build status is success
    * Trigger even if the build is unstable = build status is success, unstable
    * Trigger even if the build fails = build status is success, unstable, failure
    * Always trigger, even if the build is aborted = always
* Build periodically = starts build after regular intervals
    * Schedule = CRON expression to schedule
* GitHub hook trigger for GITScm polling = receives webhook triggered by github
* Poll SCM = starts build on receiving webhook
    * Schedule = checks for changes in SCM after regular intervals, if present starts build, CRON expression to schedule