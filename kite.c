#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
#include<dos.h> 
#include<graphics.h> 
#include<ctype.h> 
#include<math.h> 
void main() 
{ int gm,gd=DETECT; 
 int color; 
 int a=1; 
 int poly[10]; 
 initgraph(&gd,&gm,"c:\\turboc3\\bgi"); 
 while(!kbhit()) 
 { cleardevice(); 
  setcolor(YELLOW); 
  setbkcolor(BLACK); 
  poly[0]=100+a; 
  poly[1]=50; 
  poly[2]=140+a; 
  poly[3]=100; 
  poly[4]=100+a; 
  poly[5]=155; 

  poly[6]=60+a; 
  poly[7]=100; 
  poly[8]=100+a; 
  poly[9]=50; 
  drawpoly(5,poly); 
  setfillstyle(HATCH_FILL,MAGENTA); 
  fillpoly(5,poly); 
  circle(100+a,90,15); 
  setfillstyle(SOLID_FILL,RED); 
  fillellipse(100+a,90,15,15); 
  setlinestyle(SOLID_LINE,1,3); 
  line(100+a,155,100+a,180); 
  line(100+a,155,110+a,180); 
  line(100+a,155,90+a,180); 
  setlinestyle(SOLID_LINE,1,0); 
  line(0,480,100+a,90); 
  a=a+5; 
  if(a>500) 
   a=0; 
  delay(660); 
 } 
 setlinestyle(SOLID_LINE,0,0); 
 fflush(stdin); 
}