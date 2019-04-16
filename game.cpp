#include "game.h"

Game::Game()
{
    matrix = nullptr;

}

int **Game::getMatrix()
{
    matrix = new int*[4];
    for ( int i = 0; i < 4; i ++)
    {
        matrix[i] = new int[4];
    }
    return matrix;
}
