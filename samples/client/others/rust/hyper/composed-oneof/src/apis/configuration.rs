/*
 * oneOf test
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

use hyper;
use hyper_util::client::legacy::Client;
use hyper_util::client::legacy::connect::Connect;
use hyper_util::client::legacy::connect::HttpConnector;
use hyper_util::rt::TokioExecutor;

pub struct Configuration<C: Connect = HttpConnector>
    where C: Clone + std::marker::Send + Sync + 'static {
    pub base_path: String,
    pub user_agent: Option<String>,
    pub client: Client<C, String>,
    pub basic_auth: Option<BasicAuth>,
    pub oauth_access_token: Option<String>,
    pub api_key: Option<ApiKey>,
    // TODO: take an oauth2 token source, similar to the go one
}

pub type BasicAuth = (String, Option<String>);

pub struct ApiKey {
    pub prefix: Option<String>,
    pub key: String,
}

impl Configuration<HttpConnector> {
    /// Construct a default [`Configuration`](Self) with a hyper client using a default
    /// [`HttpConnector`](hyper_util::client::legacy::connect::HttpConnector).
    ///
    /// Use [`with_client`](Configuration<T>::with_client) to construct a Configuration with a
    /// custom hyper client.
    ///
    /// # Example
    ///
    /// ```
    /// let api_config = {
    ///   api_key: "my-api-key",
    ///   ...Configuration::new()
    /// }
    /// ```
    pub fn new() -> Configuration<HttpConnector> {
        Configuration::default()
    }
}

impl<C: Connect> Configuration<C>
    where C: Clone + std::marker::Send + Sync {

    /// Construct a new Configuration with a custom hyper client.
    ///
    /// # Example
    ///
    /// ```
    /// let client = Client::builder(TokioExecutor::new())
    ///   .pool_idle_timeout(Duration::from_secs(30))
    ///   .build_http();
    ///
    /// let api_config = Configuration::with_client(client);
    /// ```
    pub fn with_client(client: Client<C, String>) -> Configuration<C> {
        Configuration {
            base_path: "http://localhost:8000".to_owned(),
            user_agent: Some("OpenAPI-Generator/1.0.0/rust".to_owned()),
            client,
            basic_auth: None,
            oauth_access_token: None,
            api_key: None,
        }
    }
}

impl Default for Configuration<HttpConnector> {
    fn default() -> Self {
        let client = Client::builder(TokioExecutor::new()).build_http();
    	Configuration::with_client(client)
    }
}
