#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    int n;
    initgraph(&gd, &gm, "");

    int choice, x1=400, y1=50, x2=450, y2=100;

    /// Y-axis
    line(320, 0, 320, 480);
    /// X-axis
    line(0, 245, 640, 245);
    // initial rectangle
    line(x1, y1, x1, y2);
    line(x1, y2, x2, y2);
    line(x2, y2, x2, y1);
    line(x2, y1, x1, y1);

    // final rectangle after reflection
    line(x1, 480-y1, x1, 480-y2);
    line(x1, 480-y1, x2, 480-y1);
    line(x2, 480-y1, x2, 480-y2);
    line(x2, 480-y2, x1, 480-y2);

    getch();
    return 0;
}

