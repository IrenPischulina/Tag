#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

void Test::gameClassCreationTest()
{
    Game *game = new Game();

}

void Test::testGetMatrix()
{
    Game *game = new Game();
    int **tmp = game -> getMatrix();
    QVERIFY(tmp!=nullptr);
}
