# Type
* Procedural
    * how to do the task
    * Stored Procedure, Trigger
* Declarative
    * what result to achieve
    * SQL, Relational Algebra, Relational Calculus

# SQL
* Command Type
    * DDL
        * Data Definition Language
        * create, drop, truncate, alter, rename
    * DML
        * Data Manipulation Language
        * insert, update, delete
    * DQL
        * Data Query Language
        * select
    * DCL
        * Data Control Language
        * grant, revoke
    * TCL
        * Transaction Control Language
        * commit, rollback
* Command Execution Order
    * from > on > (inner, left, right, full) join >
    * where > group by > having >
    * select > distinct > union, intersect, except >
    * order by > limit, offset

# Relational Algebra
* Union
    * RUS
    * tuples present in either R or S
* Intersection
    * R∩S
    * tuples present in both R and S
* Set Difference
    * R-S
    * tuples present in R but not in S
* Division
    * R÷S
    * tuples of R that have every value of S
* Rename
    * ρS(R)
    * rename R to S
* Cartesian Product
    * RXS
    * pair every tuple of R with S
* Selection
    * σC(R)
    * tuples of R that satisfy condition C
* Projection
    * πA(R)
    * only A attributes of R
* Natural Join
    * R⋈S
    * πA(σC(RXS))
* Outer Joins
    * Left Join
    * Right Join
    * Full Join
* Decomposition
    * Lossless Join
        * R=R1⋈R2
        * common attributes of R1 and R2 is either super key of R1 or R2
    * Lossy Join
        * R is proper subset of R1⋈R2
        * common attributes of R1 and R2 is neither super key of R1 nor R2