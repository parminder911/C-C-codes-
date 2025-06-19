#include<graphics.h>
#include<conio.h>
main()
{
	int gm,gd=DETECT;
	int triangle[]={80,50,150,200,30,200,80,50};
	int ftriangle[]={300,100,400,190,200,190,300,100};
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	drawpoly(4,triangle);
	setfillstyle(LTSLASH_FILL,2);
	fillpoly(4,ftriangle);
	getch();
	closegraph();
	return(0);
}
