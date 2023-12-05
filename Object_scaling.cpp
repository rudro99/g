
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x, y, r, sx, sy;
    cout<< "Enter value of Circle: \n\n";
    cout<< "x = ";
    cin>> x;
    cout<< "y = ";
    cin>> y;
    cout<< "radius: ";
    cin>> r;

    // initial circle
    circle(x, y, r);

    cout<< "Enter Scaling value of x: ";
    cin>> sx;
    cout<< "Enter Scaling value of y: ";
    cin>> sy;

    int newX, newY, newR;

    // new circle after Scaling
    for(int i = 0, j = 0; i <= sx, j <= sy; i++, j++)
    {
        newX = x * i;
        newY = y * j;
        newR = sqrt((newX*newX + newY * newY));
        circle(newX, newY, newR);
        delay(50);
        cleardevice();
    }
    circle(newX, newY, newR);

    getch();
    return 0;
}

