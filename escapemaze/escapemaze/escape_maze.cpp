#include "escape_maze.h"

escape_maze::escape_maze() {
    std::srand(std::time(0));
    maze = new char* [res::HEIGHT];
    for (int i = 0; i < res::HEIGHT; i++) {
        maze[i] = new char[res::WIDTH];
    }
}
escape_maze::~escape_maze() {
    for (int i = 0; i < res::HEIGHT; i++) {
        delete[] maze[i];
    }
    delete[] maze;
}

void escape_maze::generateMaze() {

    for (int i = 0; i < res::HEIGHT; i++) {
        for (int j = 0; j < res::WIDTH; j++) {
            if (std::rand() % 4 == 0) {
                maze[i][j] = '#';  // 벽 생성
            }
            else {
                maze[i][j] = '.';
            }
        }
    }
    maze[0][0] = 'P';  // 플레이어 위치
}

void escape_maze::printMaze() {
    for (int i = 0; i < res::HEIGHT; i++) {
        for (int j = 0; j < res::WIDTH; j++) {
            std::cout << maze[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void escape_maze::run()
{
    generateMaze();
    while (1)
    {
        system("cls");
        printMaze();
    }
}
