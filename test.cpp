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

void Test::testInitMatrix()
{
    Game *game = new Game();
    int **tmp = game -> getMatrix();
    for (int i = 0; i < 4; i ++)
    {
        for (int j = 0; j < 4; j ++)
        {
            if(i == 3 && j == 3)
                QCOMPARE(tmp[i][j], 0);
            else
                QCOMPARE(tmp[i][j], ( i * 4 ) + j + 1);
        }
    }
}
