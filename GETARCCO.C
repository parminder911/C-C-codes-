#include<graphics.h>
#include<conio.h>
main()
{
	int gm,gd=DETECT;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	struct arccoordstype r1;
	arc(100,100,0,180,75);
	getarccoords(&r1);
	line(r1.xstart,r1.ystart,r1.xend,r1.yend);
	getch();
	closegraph();
	return (0);
}
