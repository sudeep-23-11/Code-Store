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