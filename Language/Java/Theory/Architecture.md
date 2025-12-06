# JDK
* Java Development Kit
* JRE
* javac compiler = converts .java to .class (bytecode)
* java launcher
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
* class loader = loads .class
* java interpreter
    * executes bytecode
    * fast startup
* hotspot profiler = tracks frequently used bytecode
* JIT compiler
    * Just In Time compiler
    * converts frequently used bytecode to machine code
    * fast execution
* garbage collector = frees up unused heap space

# Exception
* Compile Time
    * checked
* Run Time
    * unchecked
* Error
* handling
    * try = covers code block of exception
    * catch = handles exception
    * finally = executes in all cases
* throw = throw manual exception
* throws = tells that method can throw exception