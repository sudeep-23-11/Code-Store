# General
* Display Name
* Description


# Branch Sources
* Git = github repo
    * Project Repository = url
    * Credentials = credentials
    * Behaviors = list of behaviors
        * Discover branches = include all branches
        * Discover tags = include all tags
        * Filter by name (with regular expression) = regular expression filter
            * Regular expression = include
        * Filter by name (with wildcards) = pattern filter
            * Include = include
            * Exclude = include
* GitHub = github repo
    * Credentials = credentials
    * Repository HTTPS URL = url
    * Behaviors = list of behaviors
        * Discover branches = branches
            * Strategy = discoverability
                * Exclude branches that are also filed as PRs = exclude that have PR
                * Only branches that are also filed as PRs = include that have PR
                * All branches = include both
        * Discover pull requests from forks = PRs from forks
            * Strategy = discoverability
                * Merging the pull request with the current target branch revision = merged code of PR with target branch, change on PR commit, change on target branch commit
                * The current pull request revision = code of PR only, change on PR commit
                * Both the current pull request revision and the pull request merged with the current target branch revision = include both
            * Trust = trustability
                * Nobody = no one
                * Collaborators = collaborators of repo
                * Everyone = everyone
                * From users with Admin or Write permission = admin, write users of repo
        * Discover pull requests from origin = PRs from origin
            * Strategy = discoverability
                * Merging the pull request with the current target branch revision
                * The current pull request revision
                * Both the current pull request revision and the pull request merged with the current target branch revision
        * Discover tags
        * Filter by name (with regular expression)
        * Filter by name (with wildcards)
        * Ignore pull requests marked as drafts = exclude PRs that are drafted
* Single repository & branch = github repo
    * Name = name in jenkins UI
    * Source Code Management = Git
        * Repositories
        * Branches to build


# Build Configuration
* Mode = by Jenkinsfile
    * Script Path = path of jenkinsfile on SCM


# Scan Multibranch Pipeline Triggers
* Periodically if not otherwise run = checks for changes in SCM after regular intervals, if present starts build
    * Interval = time interval


# Orphaned Item Strategy
* Abort builds = abort builds of deleted items
* Discard old items = remove deleted items
    * Days to keep old items = max no. of days to keep deleted items
    * Max # of old items to keep = max no. of deleted items to keep