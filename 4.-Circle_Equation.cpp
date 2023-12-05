#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void circle_sym(int x, int y, int h, int k, int c)
{
    putpixel(h+x, k+y, c);
    putpixel(h+y, k+x, c);
    putpixel(h-y, k+x, c);
    putpixel(h-x, k+y, c);
    putpixel(h-x, k-y, c);
    putpixel(h-y, k-x, c);
    putpixel(h+y, k-x, c);
    putpixel(h+x, k-y, c);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int r, x, y, h, k, OA;

    cout << "Enter the co-ordinate of Circle's Center (h,k): ";
    cin >> h >> k;

    cout << "Enter the radius: ";
    cin >> r;

    OA = r / sqrt(2);

    for(x=0; x<=OA; x++)
    {
        y = sqrt(r*r - x*x);

        circle_sym(x, y, h, k, 12);
        delay(20);
    }

    getch();
    closegraph();

    return 0;
}
