# Class and Object
* Field
    * member variable
    * property
* Method
    * member function
    * behavior
* static
    * class (variable, function)
    * only one per class
    * shared all by all objects
* Constructor
    * called at object creation
    * no return type
    * class name
    * default = no parameter
    * parameterized = parameters
    * copy = object parameter
* Destructor
    * called at object destruction
    * no return type
    * ~ class name

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
* showing only essential details and hiding unnecessary complexity
* abstract method
    * no method definition
    * overriden in child
    * pure virtual = 0
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