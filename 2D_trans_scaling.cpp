#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<iostream>
#include<math.h>
int main()
{

	    int gd=DETECT,gm;
	    int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
	    int sx,sy,xt,yt,r;
	    float t;
	    printf("\n\t Enter the points of triangle: ");

	    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

	    detectgraph(&gd,&gm);
	    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
        setcolor(3);
	    line(x1,y1,x2,y2);
	    line(x2,y2,x3,y3);
	    line(x3,y3,x1,y1);



				    printf("\n Enter the translation factor:");
				    scanf("%d%d",&xt,&yt);
				    printf("\n Enter the scaling factor:");
				    scanf("%d%d",&sx,&sy);
				    nx1=sx*(x1+xt);
				    ny1=sy*(y1+yt);
				    nx2=sx*(x2+xt);
				    ny2=sy*(y2+yt);
				    nx3=sx*(x3+xt);
				    ny3=sy*(y3+yt);
				    setcolor(6);

				    line(nx1,ny1,nx2,ny2);
				    line(nx2,ny2,nx3,ny3);
				    line(nx3,ny3,nx1,ny1);
				    getch();


				    closegraph();
				    }
