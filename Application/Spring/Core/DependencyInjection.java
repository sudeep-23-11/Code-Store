package java_store.spring_store.core;

import org.springframework.beans.factory.annotation.*;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.Primary;
import org.springframework.stereotype.Component;

interface Parent {
    public void display();
}

@Component("son")
@Primary
class Son implements Parent {
    public void display() {
        System.out.println("I'm the son");
    }
}

@Component("daughter")
class Daughter implements Parent {
    public void display() {
        System.out.println("I'm the daughter");
    }
}

@Component
class FieldInjection {
    @Value("parent")
    public String name;
    @Autowired
    public Parent parent;
}

@Component
class ConstructorInjection {
    public String name;
    public Parent parent;
    public ConstructorInjection(@Value("${data.son}") String name, @Qualifier("son") Parent parent) {
        this.name = name;
        this.parent = parent;
    }
}

@Component
class SetterInjection {
    public String name;
    public Parent parent;
    @Autowired
    @Qualifier("daughter")
    public void setParent(@Value("${data.daughter}") String name, Parent parent) {
        this.name = name;
        this.parent = parent;
    }
}

public class DependencyInjection {
    public DependencyInjection(ApplicationContext context) {
        FieldInjection fi = context.getBean(FieldInjection.class);
        fi.parent.display();
        ConstructorInjection ci = context.getBean(ConstructorInjection.class);
        ci.parent.display();
        SetterInjection si = context.getBean(SetterInjection.class);
        si.parent.display();
        System.out.println(fi.name+" "+ci.name+" "+si.name);
    }
}
