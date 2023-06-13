#ifndef SNAKE_GAME_OOP_FOOD_H
#define SNAKE_GAME_OOP_FOOD_H

#include <windows.h>
#include <cstdio>
#include <random>

#define WIDTH 50
#define HEIGHT 25

class Food {
private:
    COORD pos;
public:
    void gen_food();

    COORD get_pos();
};


#endif //SNAKE_GAME_OOP