# JDK
* Java Development Kit
* JRE
* javac Compiler = converts .java to .class (bytecode)
* java Launcher
    * loads JRE
    * starts JVM
* jdb = debugger
* javadoc = documentation
* jar = archive of .class
* .java and .class are platform independent

# JRE
* Java Runtime Environment
* JVM
* libraries

# JVM
* Java Virtual Machine
* runs java program
* Class Loader = loads .class
* java Interpreter
    * executes bytecode
    * fast startup
* Hotspot Profiler = tracks frequently used bytecode
* JIT Compiler
    * Just In Time compiler
    * converts frequently used bytecode to machine code
    * fast execution
* Garbage Collector = frees up unused heap space

# Exception
* Checked
    * checked at compile time
    * must be handled
* Unchecked
    * not checked at compile time
    * can be handled
* Error
    * serious problem
    * cannot be handled
* try = covers code block of exception
* catch
    * except
    * handles exception
* else = executes when no exception occurred
* finally = executes in all cases
* throw = throw manual exception
* throws
    * noexcept (false)
    * method can throw exception