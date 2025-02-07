# Database D
* \l --------------------------------------- list
* \c D ------------------------------------- connect


# Table T
* \dt -------------------------------------- list
* \d T ------------------------------------- details
* create table T (X serial) ---------------- auto increment in X


# Index I
* drop index I ----------------------------- delete


# Select
* select T.X, T.Y, T'.X' from T full join T' on T.Y=T'.Y' -- read all data of T, T'