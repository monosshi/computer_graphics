#include <bits/stdc++.h>
#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    outtextxy(200, 10, "Name");
    outtextxy(200, 30, "ID:");

    float x1=100, y1=215, x2=300, y2=250, dx, dy, steps, Xinc, Yinc, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    steps = (fabs(dx) > fabs(dy)) ? fabs(dx) : fabs(dy);
    Xinc = dx / steps;
    Yinc = dy / steps;

    x = x1;
    y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += Xinc;
        y += Yinc;
    }
    outtextxy(100, 252, "DDA Line");
    getch();
    closegraph();
    return 0;
}

