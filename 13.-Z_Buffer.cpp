#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x2, y2, x3, y3);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    setcolor(GREEN);
    setfillstyle(1, GREEN);
    rectangle(180, 100, 250, 200);
    floodfill(200, 180, GREEN);
    delay(1000);

    setcolor(RED);
    setfillstyle(1, RED);
    circle(195, 170, 50);
    floodfill(200, 180, RED);
    delay(1000);

    setcolor(BLUE);
    setfillstyle(1, BLUE);
    triangle(180, 150, 230, 200, 200, 250);
    floodfill(200, 180, BLUE);
    delay(1000);

    getch();
    closegraph();

    return 0;
}
