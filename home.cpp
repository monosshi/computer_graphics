#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(100, 100, 200, 100);
    line(200, 100, 150, 50);
    line(150, 50, 100, 100);
    rectangle(105,100,195,200);
    rectangle(140,150,170,200);


    getch();
    closegraph();
    return 0;
}


