#ifndef SNAKE_GAME_OOP
#define SNAKE_GAME_OOP

//#include <windows.h>
#include <cstdio>
#include <random>

#define WIDTH 50
#define HEIGHT 25

class Food{
private:
    COORD pos;
public:
    void gen_food()

    CORD get_pos();
};


#endif //SNAKE_GAME_OOP