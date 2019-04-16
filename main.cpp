#include <QCoreApplication>
#include <QtTest/QTest>
#include "test.h"

int main(int argc, char *argv[])
{
    QTest::qExec(new Test, argc, argv);
}
