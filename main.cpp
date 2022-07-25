#include "function.h"
#include <cstdlib>
#include <graphics.h>

using namespace std;
extern int map[8][8];

int main() {
    //UI创建窗口
    //单位px
    initgraph(400, 400);
    system("pause");

    //关闭窗口
    while (1) {
        drawMap();
        keyDown();
        system("cls");
    }
    //closegraph();
    return 0;

}