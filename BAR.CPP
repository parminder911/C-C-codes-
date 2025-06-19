#include<graphics.h>
#include<conio.h>
main()
{
	int gm,gd=DETECT;
	initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
	bar(50,50,75,150);
	getch();
	closegraph();
	return(0);
}