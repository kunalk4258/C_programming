#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw circle with center at (250, 250) and radius 50
    circle(250, 250, 50);

    getch();
    closegraph();
    return 0;
}
