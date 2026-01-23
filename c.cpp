#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    
    rectangle(100, 200, 400, 260);
    rectangle(150, 160, 350, 200);

    
    circle(160, 260, 20);
    circle(340, 260, 20);

    getch();
    closegraph();
    return 0;
}
