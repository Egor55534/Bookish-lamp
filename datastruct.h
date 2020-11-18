#ifndef DATASTRUCT_H
#define DATASTRUCT_H
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QVector>
#include <QVariant>

class DataStruct
{
public:
    DataStruct(QByteArray * data);

    QString error;
    bool ok = true;

    QVector<QString> elemType;
    QVector<QString> elemName;
    QVector<int> elemValue;
    QVector<bool> elemIsStatic;

    QJsonDocument json;
    QString structName;
    QString objectName;

    void parceStruct();

    void getError(QString nameError);
};

#endif // DATASTRUCT_H
