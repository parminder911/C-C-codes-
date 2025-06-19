#include<graphics.h>
#include<conio.h>
main()
{
	int gm,gd=DETECT;
	char*buff;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	rectangle(10,10,50,75);
	//storing image into memory
	getimage(10,10,50,75,buff);
	//putimage function is used to draw same rectangle to 100,150,location
	putimage(100,150,buff,COPY_PUT);
	getch();
	closegraph();
	return(0);
}