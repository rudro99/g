#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    int n;
    initgraph(&gd, &gm, "");

    int choice, x1=20, y1=20, x2=200, y2=200, shx, shy, g;

    // initial rectangle
    line(x1, y1, x1, y2);
    line(x1, y2, x2, y2);
    line(x2, y2, x2, y1);
    line(x2, y1, x1, y1);

    cout<< "1. X-Shear\n2. Y-Shear\n\nEnter your choice: ";
    cin>> choice;


    if(choice == 1)
    {
        cout<< "Enter value of shx: ";
        cin>> shx;
        int newX1= x1 + y1*shx;

        cleardevice();

        // final quad after x-shear
        line(newX1, y1, x1, y2);
        line(x1, y2, x2, y2);
        line(x2, y2, newX1+x2, y1);
        line(newX1, y1, newX1+x2, y1);
    }
    else if(choice == 2)
    {
        cout<< "Enter value of shy: ";
        cin>> shy;
        int newY1= y1 + x1*shy;

        cout<< newY1;
        cleardevice();

        // final quad after x-shear
        line(x1, y1, x1, y2);
        line(x1, y2, x2, y2+newY1);
        line(x2, y2+newY1, x2, newY1);
        line(x1, y1, x2, newY1);
    }

    getch();
    return 0;
}
