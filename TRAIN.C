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
pieslice(6,getmaxy()-220,0,360,4);
pieslice(18,getmaxy()-220,0,360,4);

// lines joining last and second last boogie

line(26,getmaxy()-228,32,getmaxy()-228);
line(26,getmaxy()-225,32,getmaxy()-225);

//second last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(32,getmaxy()-235,70,getmaxy()-220);
line(32,getmaxy()-230,70,getmaxy()-230);
floodfill(35,getmaxy()-225,RED);

//wheels of second last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(40,getmaxy()-220,0,360,4);
pieslice(60,getmaxy()-220,0,360,4);

//line joining second last and preciding

line(71,getmaxy()-228,77,getmaxy()-228);
line(71,getmaxy()-225,77,getmaxy()-225);

//third last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(77,getmaxy()-235,115,getmaxy()-220);
line(77,getmaxy()-230,115,getmaxy()-230);
floodfill(78,getmaxy()-228,RED);

//wheels of third last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(85,getmaxy()-220,0,360,4);
pieslice(105,getmaxy()-220,0,360,4);

//line joining third and preciding boogie

line(116,getmaxy()-228,122,getmaxy()-228);
line(116,getmaxy()-225,122,getmaxy()-225);

//fourth last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(122,getmaxy()-235,160,getmaxy()-220);
line(122,getmaxy()-230,160,getmaxy()-230);
floodfill(124,getmaxy()-228,RED);

//wheels for third last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(130,getmaxy()-220,0,360,4);
pieslice(150,getmaxy()-220,0,360,4);

//line joining third last and engine

line(161,getmaxy()-228,167,getmaxy()-228);
line(161,getmaxy()-225,167,getmaxy()-225);

//engine of the train

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(167,getmaxy()-245,185,getmaxy()-220);

line(167,getmaxy()-240,185,getmaxy()-240);
floodfill(169,getmaxy()-238,RED);

rectangle(185,getmaxy()-235,205,getmaxy()-220);
floodfill(186,getmaxy()-232,RED);

rectangle(190,getmaxy()-250,196,getmaxy()-235);
floodfill(191,getmaxy()-249,RED);

//smoke of engine

setcolor(7);
line(190,getmaxy()-253,196,getmaxy()-253);
line(190,getmaxy()-255,192,getmaxy()-255);
line(194,getmaxy()-255,196,getmaxy()-255);
line(188,getmaxy()-257,194,getmaxy()-257);
line(187,getmaxy()-259,193,getmaxy()-259);
line(185,getmaxy()-261,190,getmaxy()-261);
line(192,getmaxy()-261,194,getmaxy()-261);
line(188,getmaxy()-263,192,getmaxy()-263);
line(180,getmaxy()-265,190,getmaxy()-265);

//wheels of engine
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(175,getmaxy()-220,0,360,5);
pieslice(188,getmaxy()-220,0,360,4);
pieslice(200,getmaxy()-220,0,360,4);

//front section of engine

sector(206,getmaxy()-228,0,90,8,7);
sector(206,getmaxy()-228,270,360,8,8);

getch();
}
