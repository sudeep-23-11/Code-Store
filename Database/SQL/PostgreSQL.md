# Database D
* \l --------------------------------------- list
* \c D ------------------------------------- connect


# Table T
* create table T (X serial) ---------------- auto increment in X
* \dt -------------------------------------- list
* \d T ------------------------------------- details


# Index I
* create index if not exists I on T (X) ---- create if it does not exists
* drop index I ----------------------------- delete
* drop index if exists I ------------------- delete it it exists


# Select
* select T.X, T.Y, T'.X' from T full join T' on T.Y=T'.Y' -- read all data of T, T'