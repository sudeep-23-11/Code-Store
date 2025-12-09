# General
* Description
* Discard old builds
* Do not allow concurrent builds = whether concurrent builds are allow or not
    * Abort previous builds = whether new triggered build aborts old running build or not
* GitHub project
* This project is parameterized
* Throttle builds

# Triggers
* Build after other projects are built
* Build periodically
* GitHub hook trigger for GITScm polling
* Poll SCM

# Pipeline
* Definition = pipeline script should be manual or from SCM
    * Pipeline script = manual script
        * Script = script code
        * Use Groovy Sandbox = include security layer of Groovy Sandbox or not
    * Pipeline script from SCM = script from SCM
        * SCM = Git
            * Repositories
            * Branches to build
        * Script Path = path of jenkinsfile on SCM
        * Lightweight checkout = checkout only jenkinsfile or complete clone from SCM
* Pipeline Syntax = syntax of pipeline script

# Advanced
* Quiet period
* Display Name