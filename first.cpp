#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    outtextxy(200, 10, "name");
    outtextxy(200, 30, "ID:");
    outtextxy(120,60,"Welcome to Graphics Lab!");

    line(300, 180, 100, 210);

    outtextxy(150, 215, "This is a Line");

    circle(200, 280, 50);

    outtextxy(145, 340, "This is a Circle");

    rectangle(140, 360, 260, 420);

    outtextxy(160, 430, "This is a Rectangle");

    getch();
    closegraph();
    return 0;
}


