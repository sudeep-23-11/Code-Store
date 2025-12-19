# Tuple
* row
* Cardinality = no. of tuples

# Attribute
* column
* Degree = no. of attributes
* Type
    * Prime = part of any candidate key
    * Non-prime = not part of any candidate key

# Key Type
* Super = uniquely identifies tuple
* Candidate = super key having no unnecessary attribute
* Primary = choosen candidate key
* ALternate = other candidate key except primary
* Composite = multiple attributes
* Foreign
    * refer to primary key of other table
    * referenced table
        * parent
        * having primary key
    * referencing table
        * child
        * having foreign key
* Surrogate = system generated artificial key
* Natural = real world super key

# FD
* X->Y
    * Functional Dependency
    * rows having same values of X will have same values of Y
    * Determinant = X
    * Dependent = Y
* Triviality
    * Trivial
        * Y is subset of X
        * AB->B
    * Non-trivial
        * Y is not subset of X
        * AB->C
    * Semi=trivial
        * combination of trivial and non-trivial
        * AB->BC
* Armstrong Axiom
    * Reflexivity = X->X
    * Augmentation = X->Y => XZ->YZ
    * Transitivity = X->Y, Y->Z => X->Z
    * Additivity = X->Y, X->Z => X->YZ
    * Decomposition = X->YZ => X->Y, X->Z
* Anomaly
    * Updation = same data in multiple rows, must update all
    * Insertion = cannot insert some data until all attributes are avaliable 
    * Deletion = deleting row will delete all attributes
* Normalization
    * reduce redundancy
    * avoid anomalies
    * keep data consistent
* Normal Form
    * 1NF = every attribute is atomic
    * 2NF
        * 1NF with no partial dependency
        * partial dependency = proper subset of candidate key -> non-prime attribute
    * 3NF
        * 2NF with no transitive dependency
        * transitive dependency = non-prime attribute -> non-prime attribute
    * BCNF
        * Boyce Codd Normal Form
        * 3NF with determinant as super key for all FDs
* Attribute Closure
    * X⁺ = set of attributes that can be determined by X using all FDs
    * (candidate key)⁺ contain all attributes present in all FDs
* FD set
    * set of FDs
    * membership of FD F for set S = FD F should be derived from FDs of set S
    * equality of set S1 and S2
        * every FD of set S1 should be derived from FDs of set S2
        * every FD of set S2 should be derived from FDs of set S1
* Canonical Cover
    * Minimal Cover
    * single attribute on RHS = X->YZ => X->Y, X->Z
    * no extraneous attribute on LHS = XY->Z, X->Y => X->Z, X->Y
    * no redundant FD
* Dependency Preserving Decomposition = F⁺=(F1UF2)⁺

# MVD
* X->->Y
    * Multivalued Dependency
    * rows having same values of X can have same or different values of Y
* Fagin Axiom
    * Armstrong Axiom of FD
    * Complementation = X->->Y => X->->R-(XUY)
    * Replication = X->Y => X->->Y
* 4NF = BCNF with determinant as super key for all MVDs