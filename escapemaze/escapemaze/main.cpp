#include <iostream>
#include <cstdlib>
#include <ctime>

namespace res {
    enum {
        WIDTH  = 10,
        HEIGHT = 5
    };
}

void generateMaze(char** maze) {
    for (int i = 0; i < res::HEIGHT; i++) {
        for (int j = 0; j < res::WIDTH; j++) {
            if (std::rand() % 4 == 0) {
                maze[i][j] = '#';  // �� ����
            }
            else {
                maze[i][j] = '.';
            }
        }
    }
    maze[0][0] = 'P';  // �÷��̾� ��ġ
}

void printMaze(char** maze) {
    for (int i = 0; i < res::HEIGHT; i++) {
        for (int j = 0; j < res::WIDTH; j++) {
            std::cout << maze[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::srand(std::time(0));

    char** maze = new char* [res::HEIGHT];
    for (int i = 0; i < res::HEIGHT; i++) {
        maze[i] = new char[res::WIDTH];
    }

    // �̷� ���� �� ���
    generateMaze(maze);
    printMaze(maze);

    // �޸� ����
    for (int i = 0; i < res::HEIGHT; i++) {
        delete[] maze[i];
    }
    delete[] maze;

    return 0;
}
