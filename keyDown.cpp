//
// Created by Mplan on 2022/7/24.
//
#include <iostream>
#include <conio.h>
#include "function.h"
using namespace std;
extern int map[8][8];
//按键交互:移动
void keyDown() {
    //动起来:人动,箱子动
    //定位人物
    int i, j;
    for (i = 0; i < 8; ++i) {
        for (j = 0; j < 8; ++j) {
            if (map[i][j] == 5 || map[i][j] == 8) {
                break;
            }
        }
        if (map[i][j] == 5 || map[i][j] == 8) {
            break;
        }
    }
    //找到人后:让人动:按键操作
    //等待键盘输出一个值
    char userKey = _getch();
    switch (userKey) {
        //向上
        case 'w':
        case 'W':
        case 72:
            //先判断当前位置
            if (map[i][j] == 5) {
                if (map[i - 1][j] == 0) {
                    map[i][j] = 0;
                    map[i - 1][j] = 5;
                } else if (map[i - 1][j] == 3) {
                    map[i][j] = 0;
                    map[i - 1][j] = 8;
                } else if (map[i - 1][j] == 4) {
                    moveBox('w',4);
                } else if (map[i - 1][j] == 7) {
                    moveBox('w',7);
                }
            } else if (map[i][j] == 8) {
                if (map[i - 1][j] == 0) {
                    map[i][j] = 3;
                    map[i - 1][j] = 5;
                } else if (map[i - 1][j] == 3) {
                    map[i][j] = 3;
                    map[i - 1][j] = 8;
                } else if (map[i - 1][j] == 4) {
                    moveBox('w',4);
                } else if (map[i - 1][j] == 7) {
                    moveBox('w',7);
                }
            }
            break;
            //向下
        case 's':
        case 'S':
        case 80:
            if (map[i][j] == 5) {
                if (map[i + 1][j] == 0) {
                    map[i][j] = 0;
                    map[i + 1][j] = 5;
                } else if (map[i + 1][j] == 3) {
                    map[i][j] = 0;
                    map[i + 1][j] = 8;
                } else if (map[i + 1][j] == 4) {
                    moveBox('s',4);
                } else if (map[i + 1][j] == 7) {
                    moveBox('s',7);
                }
            } else if (map[i][j] == 8) {
                if (map[i + 1][j] == 0) {
                    map[i][j] = 3;
                    map[i + 1][j] = 5;
                } else if (map[i + 1][j] == 3) {
                    map[i][j] = 3;
                    map[i + 1][j] = 8;
                } else if (map[i + 1][j] == 4) {
                    moveBox('s',4);
                } else if (map[i + 1][j] == 7) {
                    moveBox('s',7);
                }
            }
            break;
            //向左
        case 'a':
        case 'A':
        case 75:
            if (map[i][j] == 5) {
                if (map[i][j - 1] == 0) {
                    map[i][j] = 0;
                    map[i][j - 1] = 5;
                } else if (map[i][j - 1] == 3) {
                    map[i][j] = 0;
                    map[i][j - 1] = 8;
                } else if (map[i][j - 1] == 4) {
                    moveBox('a',4);
                } else if (map[i][j - 1] == 7) {
                    moveBox('a',7);
                }
            }
            if (map[i][j] == 8) {
                if (map[i][j - 1] == 0) {
                    map[i][j] = 3;
                    map[i][j - 1] = 5;
                } else if (map[i][j - 1] == 3) {
                    map[i][j] = 0;
                    map[i][j - 1] = 8;
                } else if (map[i][j - 1] == 4) {
                    moveBox('a',4);
                } else if (map[i][j - 1] == 7) {
                    moveBox('a',7);
                }
            }
            break;
            //向右
        case 'd':
        case 'D':
        case 77:
            if (map[i][j] == 5) {
                if (map[i][j + 1] == 0) {
                    map[i][j] = 0;
                    map[i][j + 1] = 5;
                } else if (map[i][j + 1] == 3) {
                    map[i][j] = 0;
                    map[i][j + 1] = 8;
                } else if (map[i][j + 1] == 4) {
                    moveBox('d',4);
                } else if (map[i][j + 1] == 7) {
                    moveBox('d',7);
                }
            }
            if (map[i][j] == 8) {
                if (map[i][j + 1] == 0) {
                    map[i][j] = 3;
                    map[i][j + 1] = 5;
                } else if (map[i][j + 1] == 3) {
                    map[i][j] = 0;
                    map[i][j + 1] = 8;
                } else if (map[i][j + 1] == 4) {
                    moveBox('d',4);
                } else if (map[i][j + 1] == 7) {
                    moveBox('d',7);
                }
            }
            break;
    }
    cout << map[i][j];
}