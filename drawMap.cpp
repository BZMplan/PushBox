//
// Created by 15249 on 2022/7/24.
//
//打印地图
#include <iostream>
#include <graphics.h>
using namespace std;
extern int map[8][8];
void drawMap() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            switch (map[i][j]) {
                case 0:
                    //路
                    cout << "  ";
                    //路不用渲染图像
                    clearrectangle(j*50,i*50,j*50+50,i*50+50);
                    break;
                case 1:
                    //墙
                    cout << "# ";
                    fillrectangle(j*50+1,i*50+1,j*50+50-1,i*50+50-1);
                    break;
                case 3:
                    //目的地
                    cout << "! ";
                    break;
                case 4:
                    //箱子
                    cout << "* ";
                    rectangle(j*50+1,i*50+1,j*50+50-1,i*50+50-1);
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