#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundary(int,int,int,int);
int  main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");
     int x = 200, y = 200, radius = 50;

    // circle function
    circle(x, y, radius);

    // Function calling
    boundary(x, y, 6, 15);

    getch();
}
void boundary(int x,int y,int fillColor, int boundaryColor)
{
    if(getpixel(x, y) != boundaryColor &&
       getpixel(x, y) != fillColor)
    {
       delay(100);
        putpixel(x,y,fillColor);
        boundary(x+1,y,fillColor,boundaryColor);
        boundary(x-1,y,fillColor,boundaryColor);
        boundary(x,y+1,fillColor,boundaryColor);
        boundary(x,y-1,fillColor,boundaryColor);
    }
}
