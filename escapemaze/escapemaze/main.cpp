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
                maze[i][j] = '#';  // 벽 생성
            }
            else {
                maze[i][j] = '.';
            }
        }
    }
    maze[0][0] = 'P';  // 플레이어 위치
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

    // 미로 생성 및 출력
    generateMaze(maze);
    printMaze(maze);

    // 메모리 해제
    for (int i = 0; i < res::HEIGHT; i++) {
        delete[] maze[i];
    }
    delete[] maze;

    return 0;
}
