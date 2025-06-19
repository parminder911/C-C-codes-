#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm,c=1,b=1,i=1,n=7,r=100;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(i=1;i<=n;i++)
	{
		r=r-5;
		setfillstyle(c,b);
		c=c+1;
		setcolor(b);
		circle(200,150,r);
		floodfill(200,150,b);
		b=b+1;
	}
	getch();
	closegraph();
}