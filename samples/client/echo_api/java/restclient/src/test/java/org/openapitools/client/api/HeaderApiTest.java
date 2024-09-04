/*
 * Echo Server API
 * Echo Server API
 *
 * The version of the OpenAPI document: 0.1.0
 * Contact: team@openapitools.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.api;

import static org.hamcrest.CoreMatchers.allOf;
import static org.hamcrest.CoreMatchers.containsString;
import static org.hamcrest.MatcherAssert.assertThat;

import org.junit.Test;
import org.openapitools.client.model.StringEnumRef;

/** API tests for HeaderApi */
public class HeaderApiTest {

  private final HeaderApi api = new HeaderApi();

  /**
   * Test header parameter(s)
   *
   * <p>Test header parameter(s)
   */
  @Test
  public void testHeaderIntegerBooleanStringEnumsTest() {
    // Given
    Integer integerHeader = 11;
    Boolean booleanHeader = true;
    String stringHeader = "simple String Header";
    String enumNonrefStringHeader = "false";
    StringEnumRef enumRefStringHeader = StringEnumRef.UNCLASSIFIED;

    // When
    String response =
        api.testHeaderIntegerBooleanStringEnums(
            integerHeader,
            booleanHeader,
            stringHeader,
            enumNonrefStringHeader,
            enumRefStringHeader);

    // Then
    assertThat(
        response,
        allOf(
            containsString("integer_header: 11"),
            containsString("boolean_header: true"),
            containsString("string_header: simple String Header"),
            containsString("enum_nonref_string_header: false"),
            containsString("enum_ref_string_header: unclassified")));
  }
}
