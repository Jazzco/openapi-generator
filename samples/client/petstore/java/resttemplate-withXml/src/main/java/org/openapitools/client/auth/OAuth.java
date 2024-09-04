/*
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.auth;

import java.util.Optional;
import java.util.function.Supplier;
import org.springframework.http.HttpHeaders;
import org.springframework.util.MultiValueMap;

/**
 * Provides support for RFC 6750 - Bearer Token usage for OAUTH 2.0 Authorization.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", comments = "Generator version: 7.9.0-SNAPSHOT")
public class OAuth implements Authentication {
    private Supplier<String> tokenSupplier;

    /**
     * Returns the bearer token used for Authorization.
     *
     * @return The bearer token
     */
    public String getAccessToken() {
        return tokenSupplier.get();
    }

    /**
     * Sets the bearer access token used for Authorization.
     *
     * @param bearerToken The bearer token to send in the Authorization header
     */
    public void setAccessToken(String accessToken) {
        setAccessToken(() -> accessToken);
    }

    /**
     * Sets the supplier of bearer tokens used for Authorization.
     *
     * @param tokenSupplier The supplier of bearer tokens to send in the Authorization header
     */
    public void setAccessToken(Supplier<String> tokenSupplier) {
        this.tokenSupplier = tokenSupplier;
    }

    @Override
    public void applyToParams(MultiValueMap<String, String> queryParams, HttpHeaders headerParams, MultiValueMap<String, String> cookieParams) {
        Optional.ofNullable(tokenSupplier).map(Supplier::get).ifPresent(accessToken ->
            headerParams.add(HttpHeaders.AUTHORIZATION, "Bearer " + accessToken)
        );
    }
}
