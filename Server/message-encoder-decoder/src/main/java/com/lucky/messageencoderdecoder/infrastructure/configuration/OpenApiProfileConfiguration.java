package com.lucky.messageencoderdecoder.infrastructure.configuration;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Profile;
import org.springframework.security.config.annotation.web.configuration.WebSecurityCustomizer;

import com.lucky.messageencoderdecoder.infrastructure.properties.types.Profiles;

@Configuration
@Profile(Profiles.OPENAPI)
public class OpenApiProfileConfiguration {

    @Bean
    WebSecurityCustomizer webSecurityCustomizer() {
        return webSecurity -> webSecurity.ignoring().anyRequest();
    }

}
