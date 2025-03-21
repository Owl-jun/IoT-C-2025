#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
namespace res {
    enum {
        WIDTH = 10,
        HEIGHT = 5
    };
}

class escape_maze
{
private:
    char** maze;
private:
    void generateMaze();
    void printMaze();
public:
    void run();
public:
    escape_maze();
    ~escape_maze();
};

