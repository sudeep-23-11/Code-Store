package java_store.spring_store.core;

import org.springframework.beans.factory.annotation.Lookup;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.Lazy;
import org.springframework.stereotype.Component;

@Component
@Lazy
class Man {
    public Man() {
        System.out.println("I'm the man");
    }
}

@Component
abstract class Woman {
    public Woman() {
        System.out.println("I'm the woman");
    }
    @Lookup
    public abstract Girl getGirl();
}

public class Advanced {
    public Advanced(ApplicationContext context) {
        context.getBean(Man.class);
        Woman w = context.getBean(Woman.class);
        Girl g1 = w.getGirl();
        Girl g2 = w.getGirl();
        g1.id = 69;
        System.out.println(g2.id);
    }
}
