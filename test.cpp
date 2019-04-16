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

void Test::testSetMatrix()
{
    Game *game = new Game();
    int **tmp = game -> getMatrix();
    tmp[0][0] = -10;
    game -> setMatrix(tmp);
    tmp = game -> getMatrix();
    QCOMPARE(tmp[0][0], -10);
}

void Test::testMoveDown()
{
    Game *game = new Game();
    game -> moveDown();
    int **tmp = game -> getMatrix();
    QCOMPARE(tmp[2][3], 0);
    QCOMPARE(tmp[3][3], 12);
}

void Test::testMoveUp()
{
    Game *game = new Game();
    game -> moveDown();
    game -> moveUp();
    int **tmp = game -> getMatrix();
    QCOMPARE(tmp[2][3], 12);
    QCOMPARE(tmp[3][3], 0);
}

void Test::testMoveRight()
{
    Game *game = new Game();
    game -> moveRight();
    int **tmp = game -> getMatrix();
    QCOMPARE(tmp[3][2], 0);
    QCOMPARE(tmp[3][3], 15);
}

void Test::testMoveLeft()
{
    Game *game = new Game();
    game -> moveRight();
    game -> moveLeft();
    int **tmp = game -> getMatrix();
    QCOMPARE(tmp[2][3], 15);
    QCOMPARE(tmp[3][3], 0);
}
