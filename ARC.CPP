#include<graphics.h>
#include<conio.h>
main()
{
	int gm, gd=DETECT;
	initgraph(&gd,&gm, "c:\\TURBOC3\\bgi");
	arc(100,100,0,180,75);
	getch();
	closegraph();
	return(0);
}d