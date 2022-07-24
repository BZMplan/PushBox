#include <iostream>
#include "function.h"
using namespace std;
extern int map[8][8];

int main() {
    int i, j;
    while (1) {
        drawMap();
        keyDown();
        system("cls");
    }
    return 0;
}