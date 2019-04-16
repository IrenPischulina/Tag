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

void Game::setMatrix(int **matr)
{
    for ( int i = 0; i < 4; i ++)
    {
        for ( int j = 0; j < 4; j ++)
        {
            matrix[i][j] = matr[i][j];
        }
    }
}

void Game::moveDown()
{
    for ( int i = 0; i < 4; i ++)
    {
        for ( int j = 0; j < 4; j ++)
        {
            if(matrix[i][j] == 0 && i > 0)
            {
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[i - 1][j];
                matrix[i - 1][j] = temp;
            }
        }
    }
}

void Game::moveUp()
{
    for ( int i = 0; i < 4; i ++)
    {
        for ( int j = 0; j < 4; j ++)
        {
            if(matrix[i][j] == 0 && i < 3)
            {
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[i + 1][j];
                matrix[i + 1][j] = temp;
            }
        }
    }
}

void Game::moveRight()
{
    for ( int i = 0; i < 4; i ++)
    {
        for ( int j = 0; j < 4; j ++)
        {
            if(matrix[i][j] == 0 && j > 0)
            {
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][j - 1];
                matrix[i][j - 1] = temp;
            }
        }
    }
}

void Game::moveLeft()
{
    for ( int i = 0; i < 4; i ++)
    {
        for ( int j = 0; j < 4; j ++)
        {
            if(matrix[i][j] == 0 && j < 3)
            {
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][j + 1];
                matrix[i][j + 1] = temp;
            }
        }
    }
}
