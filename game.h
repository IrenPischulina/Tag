#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game: public QObject
{
    Q_OBJECT
public:
    Game();
    int **getMatrix();
    void setMatrix(int **matr);
    void moveDown();
private:
    int **matrix;
};

#endif // GAME_H
