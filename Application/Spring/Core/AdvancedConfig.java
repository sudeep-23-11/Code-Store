package java_store.spring_store.core;

import org.springframework.context.annotation.*;

@Configuration
@Lazy
public class AdvancedConfig {
    @Bean
    @Lazy
    public Man man() {
        return new Man();
    }
}
