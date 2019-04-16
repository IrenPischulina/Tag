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
    void testInitMatrix();
};

#endif // TEST_H
