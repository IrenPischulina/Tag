#ifndef TEST_H
#define TEST_H

#include <QObject>

#include "game.h"

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:

private slots:
    void gameClassCreationTest();
};

#endif // TEST_H