#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game: public QObject
{
    Q_OBJECT
public:
    Game();
    int **getMatrix();
private:
    int **matrix;
};

#endif // GAME_H
