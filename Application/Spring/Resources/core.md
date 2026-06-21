# Bean
* object created by spring

# Inversion of Control
* container managing lifecycle of bean
* Type
  * Bean Factory
    * basic container
    * different bean created on every request
  * Application Context
    * advanced container built on top of Bean Factory
    * Scope
      * singleton
        * default
        * same bean created once on startup
      * prototype = different bean created on every request

# Dependency Injection
* no object created inside the class
* bean inserted from outside of class by spring
* loose coupling
* Type
  * Field Injection
  * Constructor Injection
  * Setter Injection