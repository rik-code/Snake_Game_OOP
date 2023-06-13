#ifndef SNAKE_GAME_OOP
#define SNAKE_GAME_OOP

//#include <windows.h>
#include <cstdio>

#define WIDTH 50
#define HEIGHT 25

using namespace std;

class Snake {
private:
    COORD pos;
    int vel;
    char dir;
    int len;
    vector<COORD> body;
public:
    Snake(CORD pos, int vel);

    void grow();
    void move_snake();
    void direction(char dir);

    vector<COORD> get_body();

    bool collided();
    bool eaten(COORD food);

    COORD get_pos();
};

#endif //SNAKE_GAME_OOP
