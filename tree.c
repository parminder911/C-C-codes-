#include<graphics.h> 
#include<conio.h> 
main() 
{ 
 int gm, gd=DETECT; 
 initgraph(&gd,&gm,"c:\\turboc3\\bgi"); 
 line(105,200,105,290); 
 line(145,200,145,290); 
 line(105,290,145,290); 
 line(65,200,185,200); 
 line(65,200,90,170); 
 line(185,200,160,170); 
 line(90,170,70,170); 
 line(160,170,180,170); 
 line(70,170,95,140); 
 line(180,170,155,140); 
 line(95,140,80,140); 
 line(155,140,170,140); 
 line(80,140,125,80); 
 line(170,140,125,80); 
 getch(); 
 return(0); 
}