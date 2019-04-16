#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game: public QObject
{
    Q_OBJECT
public:
    Game();
    ~Game(){}
};

#endif // GAME_H
