=begin
#OpenAPI Petstore

#This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\

The version of the OpenAPI document: 1.0.0

Generated by: https://openapi-generator.tech
Generator version: 7.8.0-SNAPSHOT

=end

# Common files
require 'petstore/api_client'
require 'petstore/api_error'
require 'petstore/version'
require 'petstore/configuration'

# Models
Petstore.autoload :AdditionalPropertiesClass, 'petstore/models/additional_properties_class'
Petstore.autoload :AllOfWithSingleRef, 'petstore/models/all_of_with_single_ref'
Petstore.autoload :Animal, 'petstore/models/animal'
Petstore.autoload :ApiResponse, 'petstore/models/api_response'
Petstore.autoload :ArrayOfArrayOfNumberOnly, 'petstore/models/array_of_array_of_number_only'
Petstore.autoload :ArrayOfNumberOnly, 'petstore/models/array_of_number_only'
Petstore.autoload :ArrayTest, 'petstore/models/array_test'
Petstore.autoload :Capitalization, 'petstore/models/capitalization'
Petstore.autoload :Cat, 'petstore/models/cat'
Petstore.autoload :Category, 'petstore/models/category'
Petstore.autoload :ChildWithNullable, 'petstore/models/child_with_nullable'
Petstore.autoload :ClassModel, 'petstore/models/class_model'
Petstore.autoload :Client, 'petstore/models/client'
Petstore.autoload :DeprecatedObject, 'petstore/models/deprecated_object'
Petstore.autoload :Dog, 'petstore/models/dog'
Petstore.autoload :EnumArrays, 'petstore/models/enum_arrays'
Petstore.autoload :EnumClass, 'petstore/models/enum_class'
Petstore.autoload :EnumTest, 'petstore/models/enum_test'
Petstore.autoload :FakeBigDecimalMap200Response, 'petstore/models/fake_big_decimal_map200_response'
Petstore.autoload :File, 'petstore/models/file'
Petstore.autoload :FileSchemaTestClass, 'petstore/models/file_schema_test_class'
Petstore.autoload :Foo, 'petstore/models/foo'
Petstore.autoload :FooGetDefaultResponse, 'petstore/models/foo_get_default_response'
Petstore.autoload :FormatTest, 'petstore/models/format_test'
Petstore.autoload :HasOnlyReadOnly, 'petstore/models/has_only_read_only'
Petstore.autoload :HealthCheckResult, 'petstore/models/health_check_result'
Petstore.autoload :List, 'petstore/models/list'
Petstore.autoload :MapTest, 'petstore/models/map_test'
Petstore.autoload :MixedPropertiesAndAdditionalPropertiesClass, 'petstore/models/mixed_properties_and_additional_properties_class'
Petstore.autoload :Model200Response, 'petstore/models/model200_response'
Petstore.autoload :ModelReturn, 'petstore/models/model_return'
Petstore.autoload :Name, 'petstore/models/name'
Petstore.autoload :NullableClass, 'petstore/models/nullable_class'
Petstore.autoload :NumberOnly, 'petstore/models/number_only'
Petstore.autoload :ObjectWithDeprecatedFields, 'petstore/models/object_with_deprecated_fields'
Petstore.autoload :Order, 'petstore/models/order'
Petstore.autoload :OuterComposite, 'petstore/models/outer_composite'
Petstore.autoload :OuterEnum, 'petstore/models/outer_enum'
Petstore.autoload :OuterEnumDefaultValue, 'petstore/models/outer_enum_default_value'
Petstore.autoload :OuterEnumInteger, 'petstore/models/outer_enum_integer'
Petstore.autoload :OuterEnumIntegerDefaultValue, 'petstore/models/outer_enum_integer_default_value'
Petstore.autoload :OuterObjectWithEnumProperty, 'petstore/models/outer_object_with_enum_property'
Petstore.autoload :ParentWithNullable, 'petstore/models/parent_with_nullable'
Petstore.autoload :Pet, 'petstore/models/pet'
Petstore.autoload :ReadOnlyFirst, 'petstore/models/read_only_first'
Petstore.autoload :SingleRefType, 'petstore/models/single_ref_type'
Petstore.autoload :SpecialModelName, 'petstore/models/special_model_name'
Petstore.autoload :Tag, 'petstore/models/tag'
Petstore.autoload :TestInlineFreeformAdditionalPropertiesRequest, 'petstore/models/test_inline_freeform_additional_properties_request'
Petstore.autoload :User, 'petstore/models/user'

# APIs
Petstore.autoload :AnotherFakeApi, 'petstore/api/another_fake_api'
Petstore.autoload :DefaultApi, 'petstore/api/default_api'
Petstore.autoload :FakeApi, 'petstore/api/fake_api'
Petstore.autoload :FakeClassnameTags123Api, 'petstore/api/fake_classname_tags123_api'
Petstore.autoload :PetApi, 'petstore/api/pet_api'
Petstore.autoload :StoreApi, 'petstore/api/store_api'
Petstore.autoload :UserApi, 'petstore/api/user_api'

module Petstore
  class << self
    # Customize default settings for the SDK using block.
    #   Petstore.configure do |config|
    #     config.username = "xxx"
    #     config.password = "xxx"
    #   end
    # If no block given, return the default Configuration object.
    def configure
      if block_given?
        yield(Configuration.default)
      else
        Configuration.default
      end
    end
  end
end
