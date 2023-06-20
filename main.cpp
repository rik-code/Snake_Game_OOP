#include <iostream>
#include <conio.h>
#include <ctime>

#include "include/snake.h"
#include "include/food.h"

#define width 50
#define height 50
using namespace std;

Snake snake({WIDTH / 2, HEIGHT / 2}, 1);
Food food;

int score;

void board() {
    COORD snake_pos = snake.get_pos();
    COORD food_pos = food.get_pos();

    vector<COORD> snake_body = snake.get_body();

    cout << "Score: " << score << "\n\n";
    for (int i = 0; i < height; i++) {
        cout << "\t\t#";
        for (int j = 0; j < width - 2; j++) {
            if (i == 0 || i == height - 1) {
                cout << "#";
            } else if (i == snake_pos.Y && j + 1 == snake_pos.X) {
                cout << '0';
            } else if (i == food_pos.Y && j + 1 == food_pos.X) {
                cout << '@';
            } else {
                bool isBodyPart = false;
                for (int k = 0; k < snake_body.size() - 1; k++) {
                    if (i == snake_body[k].Y && j + 1 == snake_body[k].X) {
                        cout << 'o';
                        isBodyPart = true;
                        break;
                    }
                }
                if (!isBodyPart) {
                    cout << ' ';
                }
            }
        }
        cout << "#\n";
    }
}

int main() {
    score = 0;
    srand(time(NULL));
    char game_over = false;

    while (!game_over) {
        board();

        if (kbhit()) {
            switch (getch()) {
                case 'w': snake.direction('u'); break;
                case 'a': snake.direction('l'); break;
                case 's': snake.direction('d'); break;
                case 'd': snake.direction('r'); break;
            }
        }

        if (snake.collided()) {
            game_over = true;
        }


        if (snake.eaten(food.get_pos())) {
            food.gen_food();
            snake.grow();
            score += 10;
        }
    }
    return 0;
}
