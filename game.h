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
    void moveUp();
    void moveRight();
    void moveLeft();
private:
    int **matrix;
};

#endif // GAME_H
