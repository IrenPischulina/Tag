#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QTest>

#include "game.h"

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:

private slots:
    void gameClassCreationTest();
    void testGetMatrix();
};

#endif // TEST_H
