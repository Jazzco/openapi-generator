# NOTE: This file is auto generated by OpenAPI Generator 7.9.0-SNAPSHOT (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule OpenapiPetstore.Model.Animal do
  @moduledoc """
  
  """

  @derive Jason.Encoder
  defstruct [
    :className,
    :color
  ]

  @type t :: %__MODULE__{
    :className => String.t,
    :color => String.t | nil
  }

  def decode(value) do
    value
  end
end

