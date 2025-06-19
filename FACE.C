#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x,y,r;
	int triangle[]={315,200,290,250,340,250,315,200};
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(!kbhit())
	{
		cleardevice();
		setcolor(3);