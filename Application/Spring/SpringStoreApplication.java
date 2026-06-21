package java_store.spring_store;

import java_store.spring_store.core.*;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;

@SpringBootApplication
public class SpringStoreApplication {
	public static void main(String[] args) {
		ApplicationContext context = SpringApplication.run(SpringStoreApplication.class, args);
		new BeanObject(context);
		new DependencyInjection(context);
		new Advanced(context);
	}
}
