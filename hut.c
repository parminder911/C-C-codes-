#include<graphics.h> 
#include<stdio.h> 
#include<conio.h> 
#include<dos.h> 
void main() 
{ 
 int y=300,x=250; 
 int triangle[]={200,100,250,200,150,200,200,100}; 
 int gd=DETECT,gm; 
 initgraph(&gd,&gm,"c:\\turboc3\\bgi"); 
 setcolor(4); 
 rectangle(x,y-100,x+200,y+50); 
 line(x+150,y-200,x+200,y-100); 
 line(x+150,y-200,x-50,y-200); 
 rectangle(x-100,y-100,x,y+50); 
 rectangle(x-70,y-25,x-30,y+50); 
 setfillstyle(11,12); 
 drawpoly(4,triangle); 
 fillpoly(4,triangle); 
 getch(); 
 closegraph(); 
} 
