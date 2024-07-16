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


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import com.fasterxml.jackson.annotation.JsonTypeName;

/**
 * ReadOnlyFirst
 */
@JsonPropertyOrder({
  ReadOnlyFirst.JSON_PROPERTY_BAR,
  ReadOnlyFirst.JSON_PROPERTY_BAZ
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", comments = "Generator version: 7.8.0-SNAPSHOT")
public class ReadOnlyFirst {
  public static final String JSON_PROPERTY_BAR = "bar";
  private String bar;

  public static final String JSON_PROPERTY_BAZ = "baz";
  private String baz;

  public ReadOnlyFirst() {
  }
  /**
   * Constructor with only readonly parameters
   */
  @JsonCreator
  public ReadOnlyFirst(
    @JsonProperty(JSON_PROPERTY_BAR) String bar
  ) {
    this();
    this.bar = bar;
  }

  /**
   * Constructor with all args parameters
   */
  public ReadOnlyFirst(@JsonProperty(JSON_PROPERTY_BAR) String bar, @JsonProperty(JSON_PROPERTY_BAZ) String baz) {
    this.bar = bar;
    this.baz = baz;
  }

  /**
   * Get bar
   * @return bar
   */
  @javax.annotation.Nullable
  @JsonProperty(JSON_PROPERTY_BAR)
  @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)

  public String getBar() {
    return bar;
  }



  public ReadOnlyFirst baz(String baz) {
    
    this.baz = baz;
    return this;
  }

  /**
   * Get baz
   * @return baz
   */
  @javax.annotation.Nullable
  @JsonProperty(JSON_PROPERTY_BAZ)
  @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)

  public String getBaz() {
    return baz;
  }


  @JsonProperty(JSON_PROPERTY_BAZ)
  @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
  public void setBaz(String baz) {
    this.baz = baz;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ReadOnlyFirst readOnlyFirst = (ReadOnlyFirst) o;
    return Objects.equals(this.bar, readOnlyFirst.bar) &&
        Objects.equals(this.baz, readOnlyFirst.baz);
  }

  @Override
  public int hashCode() {
    return Objects.hash(bar, baz);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ReadOnlyFirst {\n");
    sb.append("    bar: ").append(toIndentedString(bar)).append("\n");
    sb.append("    baz: ").append(toIndentedString(baz)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

  public static class Builder {

    private ReadOnlyFirst instance;

    public Builder() {
      this(new ReadOnlyFirst());
    }

    protected Builder(ReadOnlyFirst instance) {
      this.instance = instance;
    }

    public ReadOnlyFirst.Builder bar(String bar) {
      this.instance.bar = bar;
      return this;
    }
    public ReadOnlyFirst.Builder baz(String baz) {
      this.instance.baz = baz;
      return this;
    }


    /**
    * returns a built ReadOnlyFirst instance.
    *
    * The builder is not reusable.
    */
    public ReadOnlyFirst build() {
      try {
        return this.instance;
      } finally {
        // ensure that this.instance is not reused
        this.instance = null;
      }
    }

    @Override
    public String toString() {
      return getClass() + "=(" + instance + ")";
    }
  }

  /**
  * Create a builder with no initialized field.
  */
  public static ReadOnlyFirst.Builder builder() {
    return new ReadOnlyFirst.Builder();
  }

  /**
  * Create a builder with a shallow copy of this instance.
  */
  public ReadOnlyFirst.Builder toBuilder() {
    return new ReadOnlyFirst.Builder()
      .bar(getBar())
      .baz(getBaz());
  }


}

