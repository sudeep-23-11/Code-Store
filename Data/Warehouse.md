# Schema
* Star
    * fact table
        * single
        * quantitative data
    * dimension table
        * multiple
        * qualitative data
    * denormalized data
* Snowflake
    * fact table
    * dimension table
    * subdimension table
    * normalized data

# Database
* OLTP
    * Online Transaction Processing
    * current data
    * real time operations
    * for transaction processing
    * normalized data
* OLAP
    * Online Analytical Processing
    * historical data
    * periodically batch operations
    * for analysis and reporting
    * denormalized data
* SQL
    * relational
    * table
    * row (column)
    * fixed schema
    * vertical scaling
* NoSQL
    * non-relational
    * collection
    * document (key-value pair)
    * variable schema
    * horizontal scaling

# Order of Execution
* from
* on
* (inner, left, right, full) join
* where
* group by
* having
* select
* distinct
* union, intersect, except
* order by
* limit, offset