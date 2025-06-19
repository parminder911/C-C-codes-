#include<graphics.h>
#include<conio.h>
main()
{
	int gm,gd=DETECT;
	initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
	setfillstyle(LTSLASH_FILL,1);
	bar3d(50,50,75,150,5,1);
	setfillstyle(LTSLASH_FILL,1);
	bar3d(250,50,275,150,5,0);
	getch();
	closegraph();
	return(0);
}