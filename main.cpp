#include <iostream>
using namespace std;

#define sq(x) x * x
#define width 50
#define height 50

int score;

void board() {
    for (int i = 0; i < height; i++) {
        cout << "\t\t#";
        for (int j = 0; j < width - 2; j++) {
            if (i == 0 || i == height - 1) {
                cout << "#";
            } else {
                cout << ' ';
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
    }
    return 0;
}
