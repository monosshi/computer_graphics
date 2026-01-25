#include<bits/stdc++.h>
#include<graphics.h>
int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
     outtextxy(200, 10, "Name");
     outtextxy(200, 30, "ID:");

    int x1,y1,x2,y2,dx,dy,x,y,p;
    x1=150,x2=300,y1=200,y2=320;
    dx=x2-x1;
    dy=y2-y1;
    x=x1,y=y1;
    p=2*dy-dx;
    putpixel(x, y,WHITE);
     for (int i = 0; i <= dx; i++) {
        x++;
        if (p < 0) {
            p = p + 2 * dy;
        } else {
            y++;
            p = p + 2 * (dy - dx);
        }
        putpixel(x, y,WHITE);
    }
    outtextxy(250,325,"Bresenham's Line");

    getch();
    closegraph();
    return 0;
}
