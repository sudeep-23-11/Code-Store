# Inheritance
* one class acquire fields and methods of another class
* is a relationship
* compile time relationship
* tightly coupled classes
* Parent class
    * base
    * super
    * class whose features are inherited by other classes
* Child class
    * derived
    * sub
    * class that inherits features from other classes
* Type
    * Single = A -> B
    * Multilevel = A -> B -> C
    * Hierarchical = A -> B, C
    * Multiple = A, B -> C
    * Hybrid
        * A -> B, C -> D
        * diamond problem
        * virtual inheritance
* Access Modifier
    * public
        * class, package, subclass of other package, other package
        * class, subclass of program, program
    * protected
        * class, package, subclass of other package
        * class, subclass of program
    * default = class, package
    * private = class
* Visibility Mode
    * public = same
    * protected = public to protected
    * private = public, protected to private
* super
    * field, method = refer parent from child
    * constructor = call parent from child
* final
    * field
        * value cannot be changed
        * value can be name hidden in child
    * method = cannot be overriden in child
    * class = cannot be inherited
* friend
    * private, protected access from outside of class 
    * external function
    * other class
    * other class method

# Polymorphism
* one thing behaves in many different forms
* Type
    * Compile Time
        * static
        * early binding
        * method overloading
            * same method name
            * different method signature
        * operator overloading
    * Run Time
        * dynamic
        * late binding
        * method overriding
            * parent and child
            * same method name, signature
            * different implementation
            * virtual = can be overriden in child

# Abstraction
* showing essential details and hiding unnecessary complexity
* abstract method
    * no method definition
    * overriden in child
    * pure virtual = 0
* abstract class
    * no object
    * instance field, constructor
    * (normal, abstract) method
    * class can extend one abstract class
* interface
    * no object
    * static final field
    * (default, abstract) method
    * class can implement multiple interfaces