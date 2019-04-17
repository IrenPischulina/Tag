#include <QCoreApplication>
#include <QtTest/QTest>
#include "test.h"
#include "game.h"
#include "iostream"

using namespace std;

int main(int argc, char *argv[])
{
    //QTest::qExec(new Test, argc, argv);
    Game *game = new Game();
    while(true)
    {
        QString str;
        int **tmp = game->getMatrix();
        for (int i=0; i<4; i++)
        {
            str = "";
            for(int j=0; j<4; j++)
            {
                if(tmp[i][j]<10)
                    str += " ";
                str += QString::number(tmp[i][j]) + " ";
            }
            cout << str.toStdString() << endl;
        }

        char a;
        cin >> a;
        switch (a) {
            case 'd':{game ->moveRight(); break;}
            case 'a':{game->moveLeft(); break;}
            case 's':{game->moveDown(); break;}
            case 'w':{game->moveUp(); break;}
        default:break;
        }
        system("clear");
    }

}
