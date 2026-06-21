package java_store.spring_store.core;

import org.springframework.context.annotation.*;

@ComponentScan("java_store.spring_store")
@Import({
    AdvancedConfig.class
})
@PropertySource({
    "application.properties"
})
@Configuration
public class Config {
    @Bean
    @Scope("singleton")
    public Boy boy() {
        return new Boy();
    }

    @Bean
    @Scope("prototype")
    public Girl girl() {
        return new Girl();
    }

    @Bean("son")
    @Primary
    public Son son() {
        return new Son();
    }

    @Bean("daughter")
    public Daughter daughter() {
        return new Daughter();
    }
}
