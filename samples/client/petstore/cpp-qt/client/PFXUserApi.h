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

#ifndef PFX_PFXUserApi_H
#define PFX_PFXUserApi_H

#include "PFXHelpers.h"
#include "PFXHttpRequest.h"
#include "PFXServerConfiguration.h"
#include "PFXOauth.h"

#include "PFXUser.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace test_namespace {

class PFXUserApi : public QObject {
    Q_OBJECT

public:
    PFXUserApi(const int timeOut = 0);
    ~PFXUserApi();

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
    * @param[in]  pfx_user PFXUser [required]
    */
    void createUser(const PFXUser &pfx_user);

    /**
    * @param[in]  pfx_user QList<PFXUser> [required]
    */
    void createUsersWithArrayInput(const QList<PFXUser> &pfx_user);

    /**
    * @param[in]  pfx_user QList<PFXUser> [required]
    */
    void createUsersWithListInput(const QList<PFXUser> &pfx_user);

    /**
    * @param[in]  username QString [required]
    */
    void deleteUser(const QString &username);

    /**
    * @param[in]  username QString [required]
    */
    void getUserByName(const QString &username);

    /**
    * @param[in]  username QString [required]
    * @param[in]  password QString [required]
    */
    void loginUser(const QString &username, const QString &password);


    void logoutUser();

    /**
    * @param[in]  username QString [required]
    * @param[in]  pfx_user PFXUser [required]
    */
    void updateUser(const QString &username, const PFXUser &pfx_user);


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

    void createUserCallback(PFXHttpRequestWorker *worker);
    void createUsersWithArrayInputCallback(PFXHttpRequestWorker *worker);
    void createUsersWithListInputCallback(PFXHttpRequestWorker *worker);
    void deleteUserCallback(PFXHttpRequestWorker *worker);
    void getUserByNameCallback(PFXHttpRequestWorker *worker);
    void loginUserCallback(PFXHttpRequestWorker *worker);
    void logoutUserCallback(PFXHttpRequestWorker *worker);
    void updateUserCallback(PFXHttpRequestWorker *worker);

Q_SIGNALS:

    void createUserSignal();
    void createUserDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void createUsersWithArrayInputSignal();
    void createUsersWithArrayInputDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void createUsersWithListInputSignal();
    void createUsersWithListInputDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void deleteUserSignal();
    void deleteUserDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void getUserByNameSignal(PFXUser summary);
    void getUserByNameDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void loginUserSignal(QString summary);
    void loginUserDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void logoutUserSignal();
    void logoutUserDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void updateUserSignal();
    void updateUserDownloadProgress(qint64 bytesReceived, qint64 bytesTotal);

    void createUserSignalFull(PFXHttpRequestWorker *worker);
    void createUsersWithArrayInputSignalFull(PFXHttpRequestWorker *worker);
    void createUsersWithListInputSignalFull(PFXHttpRequestWorker *worker);
    void deleteUserSignalFull(PFXHttpRequestWorker *worker);
    void getUserByNameSignalFull(PFXHttpRequestWorker *worker, PFXUser summary);
    void loginUserSignalFull(PFXHttpRequestWorker *worker, QString summary);
    void logoutUserSignalFull(PFXHttpRequestWorker *worker);
    void updateUserSignalFull(PFXHttpRequestWorker *worker);

    Q_DECL_DEPRECATED_X("Use createUserSignalError() instead")
    void createUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createUserSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createUsersWithArrayInputSignalError() instead")
    void createUsersWithArrayInputSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithArrayInputSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createUsersWithListInputSignalError() instead")
    void createUsersWithListInputSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithListInputSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteUserSignalError() instead")
    void deleteUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserByNameSignalError() instead")
    void getUserByNameSignalE(PFXUser summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserByNameSignalError(PFXUser summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use loginUserSignalError() instead")
    void loginUserSignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void loginUserSignalError(QString summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use logoutUserSignalError() instead")
    void logoutUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void logoutUserSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateUserSignalError() instead")
    void updateUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void updateUserSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use createUserSignalErrorFull() instead")
    void createUserSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createUserSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createUsersWithArrayInputSignalErrorFull() instead")
    void createUsersWithArrayInputSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithArrayInputSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createUsersWithListInputSignalErrorFull() instead")
    void createUsersWithListInputSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createUsersWithListInputSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteUserSignalErrorFull() instead")
    void deleteUserSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserByNameSignalErrorFull() instead")
    void getUserByNameSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserByNameSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use loginUserSignalErrorFull() instead")
    void loginUserSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void loginUserSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use logoutUserSignalErrorFull() instead")
    void logoutUserSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void logoutUserSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateUserSignalErrorFull() instead")
    void updateUserSignalEFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateUserSignalErrorFull(PFXHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace test_namespace
#endif
