# Class and Object
* Field
    * member variable
    * property
    * static
        * class variable
        * only one
        * shared all by all objects
* Method
    * member function
    * behavior
    * static
        * class function
        * only one
        * shared all by all objects
* Constructor
    * called at object creation
    * no return type
    * class name
    * default = no parameters
    * parameterized = parameters
    * copy = object parameter
* Destructor
    * called at object destruction
    * no return type
    * ~ class name

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
* Types
    * Single = A -> B
    * Multilevel = A -> B -> C
    * Hierarchical = A -> B, C
    * Multiple = A, B -> C
    * Hybrid = A -> B, C -> D
* Access Modifiers
    * public = class, package, subclass of other package, other package
    * protected = class, package, subclass of other package
    * default = class, package
    * private = class
* Visibility Modes
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

# Polymorphism
* one thing behaves in many different forms
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

# Abstraction
* showing only essential details and hiding unnecessary complexity
* abstract method
    * no method definition
    * overriden in child
* abstract class
    * no object
    * instance field, constructor
    * (normal, abstract) method
    * class can inherit only one abstract class
* interface
    * no object
    * static final field
    * (default, abstract) method
    * class can inherit multiple interfaces