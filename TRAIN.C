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

   line(100,150,190,150);

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

setcolor(RED);

line(0,getmaxy()-200,getmaxx(),getmaxy()-200);  //FOR BRIDGE LINE

setfillstyle(SOLID_FILL,DARKGRAY);

bar(0,getmaxy()-215,getmaxx(),getmaxy()-202);   //FOR THICK ROAD

bar(2,getmaxy()-202,15,getmaxy());   //FOR LEFT SIDE PILLAR

bar(getmaxx()-2,getmaxy()-202,getmaxx()-17,getmaxy());    //FOR RIGHT SIDE PILLAR

//FOR BRIDGE ARC


arc(getmaxx()/2,getmaxy()+180,0,180,355); //LOWER HALF RING

// vertical lines

line(50,getmaxy()-200,50,getmaxy()-52);
line(100,getmaxy()-200,100,getmaxy()-100);
line(150,getmaxy()-200,150,getmaxy()-133);
line(200,getmaxy()-200,200,getmaxy()-155);  //
line(250,getmaxy()-200,250,getmaxy()-169);
line(300,getmaxy()-200,300,getmaxy()-174);
line(350,getmaxy()-200,350,getmaxy()-175);
line(400,getmaxy()-200,400,getmaxy()-167);
line(450,getmaxy()-200,450,getmaxy()-150);
line(500,getmaxy()-200,500,getmaxy()-126);
line(550,getmaxy()-200,550,getmaxy()-90);
line(600,getmaxy()-200,600,getmaxy()-38);

//criss cross lines

moveto(15,getmaxy());

lineto(50,getmaxy()-200);
lineto(100,getmaxy()-100);
lineto(150,getmaxy()-200);
lineto(200,getmaxy()-155);
lineto(250,getmaxy()-200);
lineto(300,getmaxy()-174);
lineto(350,getmaxy()-200);
lineto(400,getmaxy()-167);
lineto(450,getmaxy()-200);
lineto(500,getmaxy()-126);
lineto(550,getmaxy()-200);
lineto(600,getmaxy()-38);
lineto(getmaxx()-17,getmaxy()-202);

moveto(15,getmaxy()-202);

lineto(50,getmaxy()-52);
lineto(100,getmaxy()-200);
lineto(150,getmaxy()-133);
lineto(200,getmaxy()-200);
lineto(250,getmaxy()-169);
lineto(300,getmaxy()-200);
lineto(350,getmaxy()-175);
lineto(400,getmaxy()-200);
lineto(450,getmaxy()-150);
lineto(500,getmaxy()-200);
lineto(550,getmaxy()-90);
lineto(600,getmaxy()-200);
lineto(getmaxx()-17,getmaxy());

//last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(0,getmaxy()-235,25,getmaxy()-220);
line(0,getmaxy()-228,25,getmaxy()-228);
floodfill(10,getmaxy()-225,RED);

//wheels of last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(6,getmaxy()-220,0,360,3);
pieslice(18,getmaxy()-220,0,360,3);

// lines joining last and second last boogie

line(26,getmaxy()-228,32,getmaxy()-228);
line(26,getmaxy()-225,32,getmaxy()-225);

//second last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(32,getmaxy()-235,70,getmaxy()-220);
line(32,getmaxy()-230,70,getmaxy()-230);




getch();
}
