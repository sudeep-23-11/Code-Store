package java_store.spring_store.core;

import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Component
@Scope("singleton")
class Boy {
    public int id;
    public Boy() {
        System.out.println("I'm a boy");
    }
}

@Component
@Scope("prototype")
class Girl {
    public int id;
    public Girl() {
        System.out.println("I'm a girl");
    }
}

public class BeanObject {
    public BeanObject(ApplicationContext context) {
        Boy b1 = context.getBean(Boy.class);
        Boy b2 = context.getBean(Boy.class);
        b1.id = 23;
        Girl g1 = context.getBean(Girl.class);
        Girl g2 = context.getBean(Girl.class);
        g1.id = 46;
        System.out.println(b2.id+" "+g2.id);
    }
}
