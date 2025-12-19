# Encapsulation
* wrapping data and methods into a single unit known as class
* private field
* public getter method = get value of field
* public setter method = set value of field

# Inheritance
* one class acquires fields and methods of another class
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