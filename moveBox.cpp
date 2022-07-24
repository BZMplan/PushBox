//
// Created by 15249 on 2022/7/24.
//
#include <iostream>
#include <string>

using namespace std;
extern int map[8][8];

void moveBox(char direction, int i, int j) {
    switch (direction) {
        case 'w':
            if (map[i][j] == 5) {
                if (map[i - 2][j] == 3) {
                    map[i][j] = 0;
                    map[i - 1][j] = 5;
                    map[i - 2][j] = 7;
                } else if (map[i - 2][j] == 0) {
                    if (map[i - 1][j] == 7) {
                        map[i][j] = 0;
                        map[i - 1][j] = 8;
                        map[i - 2][j] = 4;
                    } else if (map[i - 1][j] == 4) {
                        map[i][j] = 0;
                        map[i - 1][j] = 5;
                        map[i - 2][j] = 4;
                    }
                }
            } else if (map[i][j] == 8) {
                if (map[i - 2][j] == 3) {
                    map[i][j] = 3;
                    map[i - 1][j] = 5;
                    map[i - 2][j] = 7;
                } else if (map[i - 2][j] == 0) {
                    map[i][j] = 3;
                    map[i - 1][j] = 5;
                    map[i - 2][j] = 4;
                }
            }

            break;
        case 'a':
            break;
        case 's':
            if (map[i][j] == 5) {
                if (map[i + 2][j] == 3) {
                    map[i][j] = 0;
                    map[i + 1][j] = 5;
                    map[i + 2][j] = 7;
                } else if (map[i + 2][j] == 0) {
                    if (map[i + 1][j] == 7) {
                        map[i][j] = 0;
                        map[i + 1][j] = 8;
                        map[i + 2][j] = 4;
                    } else if (map[i + 1][j] == 4) {
                        map[i][j] = 0;
                        map[i + 1][j] = 5;
                        map[i + 2][j] = 4;
                    }
                }
            } else if (map[i][j] == 8) {
                if (map[i + 2][j] == 3) {
                    map[i][j] = 3;
                    map[i + 1][j] = 5;
                    map[i + 2][j] = 7;
                } else if (map[i + 2][j] == 0) {
                    map[i][j] = 3;
                    map[i + 1][j] = 5;
                    map[i + 2][j] = 4;
                }
            }
            break;
        case 'd':
            break;
        default:
            break;

    }
}
