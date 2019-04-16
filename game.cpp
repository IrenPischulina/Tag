#include "game.h"

Game::Game()
{
    matrix = nullptr;
    matrix = new int*[4];
    for ( int i = 0; i < 4; i ++)
    {
        matrix[i] = new int[4];
    }

    //инициализация матрицы
    for ( int i = 0; i < 4; i ++)
    {
        for ( int j = 0; j < 4; j ++)
        {
            matrix[i][j] = ( i * 4 ) + j + 1;
        }
    }
    matrix[3][3] = 0;
}

int **Game::getMatrix()
{
    return matrix;
}
