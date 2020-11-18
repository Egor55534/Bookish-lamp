#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <QHash>
#include <datastruct.h>

class Expression
{
public:
    Expression(QByteArray * byteArray);

    enum operation {Add,
                   Sub,
                   Mul,
                   Div,
                   Inc,
                   Dec,
                   Reference,
                   ReferenceToTheStatic};

    QString error;
    bool ok = true;

    QString express;
    QVector<QString> stack;

    QVector<QString> result;
    DataStruct* curStruct;

    bool parceExp(DataStruct* curDataStruct);

    /// Взятие числа из стека. Возвращает true, если получилось взять, иначе false
    bool takeNumber(QString & a);

    /// Взятие чисел из стека. Возвращает true, если получилось взять, иначе false
    bool takeNumber(QString & a, QString & b);

    /// Обработчик ошибки во время вычисления
    void getError(QString str);

    /// Выполнение операций
    void calc(operation cur);

    /// Проверка на число
    bool isNum(QString str);
};

#endif // EXPRESSION_H
