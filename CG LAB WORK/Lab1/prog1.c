//Basic Structure of a C-graphics program //
#include <stdio.h>
#include <graphics.h> //must be included for every graphics program
#include <conio.h>
#include <dos.h> //for including delay function.
int main()
{
    int gd = DETECT, gm;             // gd=detects best available graphics driver, gm =graphics mode.
    initgraph(&gd, &gm, (char *)""); // for initializing graph mode
    line(100, 100, 200, 200);        // draws a line segment.
    getch();
    closegraph();
    return 0;
}
