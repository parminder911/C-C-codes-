#include<graphics.h>
#include<conio.h>
main()
{
	int gm,gd=DETECT;
	initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
	circle(100,100,50);
	getch();
	closegraph();
	return(0);
}
