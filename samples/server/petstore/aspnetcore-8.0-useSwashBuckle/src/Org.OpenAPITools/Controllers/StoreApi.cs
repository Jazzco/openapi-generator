/*
 * OpenAPI Petstore
 *
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Http;
using Org.OpenAPITools.Attributes;
using Org.OpenAPITools.Models;

namespace Org.OpenAPITools.Controllers
{ 
    /// <summary>
    /// 
    /// </summary>
    [ApiController]
    public abstract class StoreApiController : ControllerBase
    { 
        /// <summary>
        /// Delete purchase order by ID
        /// </summary>
        /// <remarks>For valid response try integer IDs with value &lt; 1000. Anything above 1000 or nonintegers will generate API errors</remarks>
        /// <param name="orderId">ID of the order that needs to be deleted</param>
        /// <response code="400">Invalid ID supplied</response>
        /// <response code="404">Order not found</response>
        [HttpDelete]
        [Route("/v2/store/order/{orderId}")]
        [ValidateModelState]
        public abstract IActionResult DeleteOrder([FromRoute (Name = "orderId")][Required]string orderId);

        /// <summary>
        /// Returns pet inventories by status
        /// </summary>
        /// <remarks>Returns a map of status codes to quantities</remarks>
        /// <response code="200">successful operation</response>
        [HttpGet]
        [Route("/v2/store/inventory")]
        [Authorize(Policy = "api_key")]
        [ValidateModelState]
        [ProducesResponseType(statusCode: 200, type: typeof(Dictionary<string, int>))]
        public abstract IActionResult GetInventory();

        /// <summary>
        /// Find purchase order by ID
        /// </summary>
        /// <remarks>For valid response try integer IDs with value &lt;&#x3D; 5 or &gt; 10. Other values will generate exceptions</remarks>
        /// <param name="orderId">ID of pet that needs to be fetched</param>
        /// <response code="200">successful operation</response>
        /// <response code="400">Invalid ID supplied</response>
        /// <response code="404">Order not found</response>
        [HttpGet]
        [Route("/v2/store/order/{orderId}")]
        [ValidateModelState]
        [ProducesResponseType(statusCode: 200, type: typeof(Order))]
        public abstract IActionResult GetOrderById([FromRoute (Name = "orderId")][Required][Range(1, 5)]long orderId);

        /// <summary>
        /// Place an order for a pet
        /// </summary>
        /// <param name="order">order placed for purchasing the pet</param>
        /// <response code="200">successful operation</response>
        /// <response code="400">Invalid Order</response>
        [HttpPost]
        [Route("/v2/store/order")]
        [Consumes("application/json")]
        [ValidateModelState]
        [ProducesResponseType(statusCode: 200, type: typeof(Order))]
        public abstract IActionResult PlaceOrder([FromBody]Order order);
    }
}
