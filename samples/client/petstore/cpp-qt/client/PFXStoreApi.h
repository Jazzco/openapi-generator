/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef PFX_PFXStoreApi_H
#define PFX_PFXStoreApi_H

#include "PFXHelpers.h"
#include "PFXHttpRequest.h"
#include "PFXServerConfiguration.h"
#include "PFXOauth.h"

#include "PFXOrder.h"
#include <QMap>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace test_namespace {

class PFXStoreApi : public QObject {
    Q_OBJECT

public:
    PFXStoreApi(const int timeOut = 0);
    ~PFXStoreApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, PFXServerVariable> &variables = QMap<QString, PFXServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, PFXServerVariable> &variables =  QMap<QString, PFXServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, PFXServerVariable> &variables =  QMap<QString, PFXServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  order_id QString [required]
    */
    void deleteOrder(const QString &order_id);


    void getInventory();

    /**
    * @param[in]  order_id qint64 [required]
    */
    void getOrderById(const qint64 &order_id);

    /**
    * @param[in]  pfx_order PFXOrder [required]
    */
    void placeOrder(const PFXOrder &pfx_order);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<PFXServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    PFXHttpRequestInput _latestInput;
    PFXHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void deleteOrderCallback(PFXHttpRequestWorker *worker);
    void getInventoryCallback(PFXHttpRequestWorker *worker);
    void getOrderByIdCallback(PFXHttpRequestWorker *worker);
    void placeOrderCallback(PFXHttpRequestWorker *worker);

Q_SIGNALS:

    void deleteOrderSignal();
    void getInventorySignal(QMap<QString, qint32> summary);
    void getOrderByIdSignal(PFXOrder summary);
    void placeOrderSignal(PFXOrder summary);

    void deleteOrderSignalFull(PFXHttpRequestWorker *worker);
    void getInventorySignalFull(PFXHttpRequestWorker *worker, QMap<QString, qint32> summary);
    void getOrderByIdSignalFull(PFXHttpRequestWorker *worker, PFXOrder summary);
    void placeOrderSignalFull(PFXHttpRequestWorker *worker, PFXOrder summary);

    Q_DECL_DEPRECATED_X("Use deleteOrderSignalError() instead")
    void deleteOrderSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteOrderSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getInventorySignalError() instead")
    void getInventorySignalE(QMap<QString, qint32> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getInventorySignalError(QMap<QString, qint32> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getOrderByIdSignalError() instead")
    void getOrderByIdSignalE(PFXOrder summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrderByIdSignalError(PFXOrder summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use placeOrderSignalError() instead")
    void placeOrderSignalE(PFXOrder summary, QNetworkReply::NetworkError error_type, QString error_str);
    void placeOrderSignalError(PFXOrder summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use deleteOrderSignalErrorFull() instead")
    void deleteOrderSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteOrderSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getInventorySignalErrorFull() instead")
    void getInventorySignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getInventorySignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getOrderByIdSignalErrorFull() instead")
    void getOrderByIdSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrderByIdSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use placeOrderSignalErrorFull() instead")
    void placeOrderSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void placeOrderSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace test_namespace
#endif
