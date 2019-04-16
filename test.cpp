#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

void Test::gameClassCreationTest()
{
    Game *game = new Game();

}
