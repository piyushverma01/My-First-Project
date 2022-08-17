#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{

int gdriver= DETECT,gm,errorcode;
initgraph(&gdriver,&gm,"c:\\TURBOC3\\bgi");
//for(i=230;i<650;i++)
//{
setbkcolor(LIGHTBLUE);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);

   //FOR CLOUD 1

line(330,100,422,100);

//upper side

sector(345,99,90,180,15,10);
sector(360,99,90,180,20,15);
sector(375,99,0,180,25,20);
sector(390,99,0,180,20,25);
sector(415,100,0,180,15,10);

//lower side


sector(345,99,180,360,15,10);
sector(360,99,180,360,20,15);
sector(375,99,180,360,25,20);
sector(390,99,180,360,20,25);
sector(415,100,180,360,15,10);

//cloud 2

   line(100,150,192,150);

//upper side

sector(115,150,90,180,15,10);
sector(130,150,90,180,20,15);
sector(145,150,0,180,25,20);
sector(160,150,0,180,20,25);
sector(175,150,0,180,15,10);

//lower side


sector(115,150,180,360,15,10);
sector(130,150,180,360,20,15);
sector(145,150,180,360,25,20);
sector(160,150,180,360,20,25);
sector(175,150,180,360,15,10);

//BRIDGE

setcolor(YELLOW);
setfillstyle(SOLID_FILL,DARKGRAY);

getch();
}
