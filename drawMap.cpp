//
// Created by 15249 on 2022/7/24.
//
//打印地图
#include <iostream>
using namespace std;
extern int map[8][8];
void drawMap() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            switch (map[i][j]) {
                case 0:
                    //路
                    cout << "  ";
                    break;
                case 1:
                    //墙
                    cout << "# ";
                    break;
                case 3:
                    //目的地
                    cout << "! ";
                    break;
                case 4:
                    //箱子
                    cout << "* ";
                    break;
                case 5:
                    //人
                    cout << "| ";
                    break;
                case 7:
                    //箱子进入目的地
                    cout << "@ ";
                    break;
                case 8:
                    //站在目的地上的人
                    cout << "| ";
                    break;
            }
        }
        cout << endl;
    }
}