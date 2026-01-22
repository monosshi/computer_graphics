#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

#define VIS 20

void drawRect(double x[], double y[], int color) {
    setcolor(color);
    for(int i=0;i<4;i++)
        line(x[i], y[i], x[(i+1)%4], y[(i+1)%4]);
}

void translate(double x[], double y[], double tx) {
    for(int i=0;i<4;i++)
        x[i] += tx * VIS;
}

void scaleRect(double x[], double y[], double factor, double px, double py) {
    for(int i=0;i<4;i++) {
        x[i] = px + factor * (x[i] - px);
        y[i] = py + factor * (y[i] - py);
    }
}

void rotateRect(double x[], double y[], double angle) {
    double rad = angle * 3.1416 / 180;
    for(int i=0;i<4;i++) {
        double xm = x[i] - 100;
        double ym = 400 - y[i];
        double xr = xm*cos(rad) - ym*sin(rad);
        double yr = xm*sin(rad) + ym*cos(rad);
        x[i] = xr + 100;
        y[i] = 400 - yr;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    double x[4], y[4];

    cout << "Enter rectangle coordinates (x y) for 4 points:\n";
    for(int i=0;i<4;i++)
        cin >> x[i] >> y[i];

    for(int i=0;i<4;i++) {
        x[i] = x[i]*VIS + 100;
        y[i] = 400 - y[i]*VIS;
    }

    int op;
    while(true) {
        cout << "\n1. Translation (+4 in X)\n2. Scaling (factor 2 about (1,1))\n3. Rotation (45 deg CCW about origin)\n4. Exit\nEnter option: ";
        cin >> op;
        if(op == 4) break;

        cleardevice();
  outtextxy(200, 10, "name");
    outtextxy(200, 30, "ID:");

        drawRect(x, y, WHITE);

        double xt[4], yt[4];
        for(int i=0;i<4;i++) {
            xt[i] = x[i];
            yt[i] = y[i];
        }

        if(op == 1) translate(xt, yt, 4);
        else if(op == 2) scaleRect(xt, yt, 2, 1*VIS + 100, 400 - 1*VIS);
        else if(op == 3) rotateRect(xt, yt, 45);

        drawRect(xt, yt, YELLOW);
    }

    closegraph();
    return 0;
}
