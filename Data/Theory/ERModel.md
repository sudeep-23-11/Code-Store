# Entity
* real world object
* Strong
    * can be uniquely identified
    * independent
    * ER notation = rectangle
* Weak
    * cannot be uniquely identified
    * depends on strong
    * ER notation = double rectangle

# Attribute
* property of entity
* Simple
    * cannot be divided further
    * ER notation = oval
* Composite
    * can be divided into multiple entities
    * ER notation = hierarchy of oval
* Multivalued
    * multiple values
    * ER notation = double oval
* Derived
    * value calculated from other
    * ER notation = dotted oval

# Relationship
* connection between entities
* Strong
    * between strong and strong
    * ER notation = diamond
* Weak
    * between strong and weak
    * ER notation = double diamond
* Degree
    * no. of entities
    * Unary = 1
    * Binary = 2
    * Ternary = 3
    * N-ary >= 4
* Cardinality
    * no. of instances of one entity related to other
    * One to One = 1:1
    * One to Many = 1:N
    * Many to Many = M:N
* Participation
    * Total = all instances must participate
    * Partial = some instances participate

# Entity Set
* set of entities having same attributes
* Specialization
    * top down
    * dividing one entity set into multiple
    * based on different values of attributes
* Generalization
    * bottom up
    * combining multiple entity sets into one
    * based on same value of attribute