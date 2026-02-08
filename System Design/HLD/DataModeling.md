# Data Type
* Qualitative = Nominal, Ordinal
* Quantitative = Discrete, Continuous

# Schema
* Star
    * Fact table
        * single
        * quantitative data
    * Dimension table
        * multiple
        * qualitative data
    * denormalized data
* Snowflake
    * Fact table
    * Dimension table
    * Sub-dimension table
    * normalized data

# Database Type
* SQL
    * relational
    * table contain rows, columns
    * fixed schema
    * nested data = foreign key in other table
    * no horizontal scaling = complex joins, transactions
    * vertical scaling
* NoSQL
    * non-relational
    * collection contain documents
    * document contain key-value pairs
    * variable schema
    * nested data = nested document
    * horizontal scaling
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

# Database Indexing
* Index
    * data structure = B- Tree, B+ Tree
    * high data retrieval speed
    * more storage space
    * slower write
* Type
    * Clustered
        * Primary
        * index on primary key mostly
        * rows are physically sorted according to index
        * single
    * Non-Clustered
        * Secondary
        * index is separate structure from table
        * index contain column values in sorted order and pointers to corresponding rows
        * multiple
    * Unique = index on column having unique values 
    * Composite = index on multiple columns