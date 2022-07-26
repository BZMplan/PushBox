//
// Created by 15249 on 2022/7/24.
//
//打印地图
#include <iostream>
#include <easyx.h>
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
                    setfillcolor(BLACK);
                    clearcircle(j*100+49,i*100+49,25);
                    clearrectangle(j*100,i*100,j*100+100,i*100+100);
                    clearcircle(j*100+50,i*100+50,50);
                    setfillcolor(WHITE);
                    break;
                case 1:
                    //墙
                    cout << "# ";
                    setfillcolor(WHITE);
                    solidrectangle(j*100+1,i*100+1,j*100+100-1,i*100+100-1);
                    break;
                case 3:
                    //目的地
                    clearcircle(j*100+49,i*100+49,25);
                    circle(j*100+49,i*100+49,50);
                    cout << "! ";
                    break;
                case 4:
                    //箱子
                    clearcircle(j*100+49,i*100+49,25);
                    setfillcolor(WHITE);
                    cout << "* ";
                    rectangle(j*100+1,i*100+1,j*100+100-1,i*100+100-1);
                    break;
                case 5:
                    //人
                    cout << "| ";

                    clearrectangle(j*100,i*100,j*100+100,i*100+100);
                    setfillcolor(WHITE);
                    circle(j*100+49,i*100+49,25);
                    break;
                case 7:
                    //箱子进入目的地
                    clearcircle(j*100+49,i*100+49,25);
                    setfillcolor(RED);
                    fillrectangle(j*100+1,i*100+1,j*100+100-1,i*100+100-1);
                    setfillcolor(WHITE);
                    cout << "@ ";
                    break;
                case 8:
                    //站在目的地上的人
                    clearrectangle(j*100,i*100,j*100+100,i*100+100);
                    setfillcolor(WHITE);
                    circle(j*100+49,i*100+49,25);
                    cout << "| ";
                    break;
            }
        }
        cout << endl;
    }
}