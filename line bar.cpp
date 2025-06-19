#include <graphics.h>
#include <conio.h>
#include<stdio.h> 


main() {
      char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    // initgraph(&gd, &gm, data);


    int gd = DETECT,gm;
   // clrscr();
    initgraph(&gd, &gm, data); // Use nullptr instead of ""
  setcolor(YELLOW);
    line(50, 50, 50, 100);
  

    getch();
    // closegraph();
    // return 0;
}
