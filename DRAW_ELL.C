#include<graphics.h>
#include<conio.h>
main()
{
	int gm, gd=DETECT;
	initgraph(&gm,&gd,"c:\\turboc3\\bgi");
	ellipse(100,100,0,360,80,30);
	getch();
	closegraph();
	return(0);
}
