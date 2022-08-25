#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i;
int gdriver= DETECT,gm,errorcode;
initgraph(&gdriver,&gm,"c:\\TURBOC3\\bgi");
for(i=0;i<getmaxx();i++)
{
setbkcolor(LIGHTBLUE);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);

   //FOR CLOUD 1

line(330+i,100,422+i,100);

//upper side

sector(345+i,99,90,180,15,10);
sector(360+i,99,90,180,20,15);
sector(375+i,99,0,180,25,20);
sector(390+i,99,0,180,20,25);
sector(415+i,100,0,180,15,10);

//lower side


sector(345+i,99,180,360,15,10);
sector(360+i,99,180,360,20,15);
sector(375+i,99,180,360,25,20);
sector(390+i,99,180,360,20,25);
sector(415+i,100,180,360,15,10);

//cloud 2

   line(100+i,150,190+i,150);

//upper side

sector(115+i,150,90,180,15,10);
sector(130+i,150,90,180,20,15);
sector(145+i,150,0,180,25,20);
sector(160+i,150,0,180,20,25);
sector(175+i,150,0,180,15,10);

//lower side


sector(115+i,150,180,360,15,10);
sector(130+i,150,180,360,20,15);
sector(145+i,150,180,360,25,20);
sector(160+i,150,180,360,20,25);
sector(175+i,150,180,360,15,10);

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
rectangle(0+i,getmaxy()-235,25+i,getmaxy()-220);
line(0+i,getmaxy()-228,25+i,getmaxy()-228);
floodfill(10+i,getmaxy()-225,RED);

//wheels of last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(6+i,getmaxy()-220,0,360,4);
pieslice(18+i,getmaxy()-220,0,360,4);

// lines joining last and second last boogie

line(26+i,getmaxy()-228,32+i,getmaxy()-228);
line(26+i,getmaxy()-225,32+i,getmaxy()-225);

//second last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(32+i,getmaxy()-235,70+i,getmaxy()-220);
line(32+i,getmaxy()-230,70+i,getmaxy()-230);
floodfill(35+i,getmaxy()-225,RED);

//wheels of second last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(40+i,getmaxy()-220,0,360,4);
pieslice(60+i,getmaxy()-220,0,360,4);

//line joining second last and preciding

line(71+i,getmaxy()-228,77+i,getmaxy()-228);
line(71+i,getmaxy()-225,77+i,getmaxy()-225);

//third last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(77+i,getmaxy()-235,115+i,getmaxy()-220);
line(77+i,getmaxy()-230,115+i,getmaxy()-230);
floodfill(78+i,getmaxy()-228,RED);

//wheels of third last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(85+i,getmaxy()-220,0,360,4);
pieslice(105+i,getmaxy()-220,0,360,4);

//line joining third and preciding boogie

line(116+i,getmaxy()-228,122+i,getmaxy()-228);
line(116+i,getmaxy()-225,122+i,getmaxy()-225);

//fourth last boogie

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(122+i,getmaxy()-235,160+i,getmaxy()-220);
line(122+i,getmaxy()-230,160+i,getmaxy()-230);
floodfill(124+i,getmaxy()-228,RED);

//wheels for third last boogie

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(130+i,getmaxy()-220,0,360,4);
pieslice(150+i,getmaxy()-220,0,360,4);

//line joining third last and engine

line(161+i,getmaxy()-228,167+i,getmaxy()-228);
line(161+i,getmaxy()-225,167+i,getmaxy()-225);

//engine of the train

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(167+i,getmaxy()-245,185+i,getmaxy()-220);

line(167+i,getmaxy()-240,185+i,getmaxy()-240);
floodfill(169+i,getmaxy()-238,RED);

rectangle(185+i,getmaxy()-235,205+i,getmaxy()-220);
floodfill(186+i,getmaxy()-232,RED);

rectangle(190+i,getmaxy()-250,196+i,getmaxy()-235);
floodfill(191+i,getmaxy()-249,RED);

//smoke of engine

setcolor(7);
line(190+i,getmaxy()-253,196+i,getmaxy()-253);
line(190+i,getmaxy()-255,192+i,getmaxy()-255);
line(194+i,getmaxy()-255,196+i,getmaxy()-255);
line(188+i,getmaxy()-257,194+i,getmaxy()-257);
line(187+i,getmaxy()-259,193+i,getmaxy()-259);
line(185+i,getmaxy()-261,190+i,getmaxy()-261);
line(192+i,getmaxy()-261,194+i,getmaxy()-261);
line(188+i,getmaxy()-263,192+i,getmaxy()-263);
line(180+i,getmaxy()-265,190+i,getmaxy()-265);

//wheels of engine
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
pieslice(175+i,getmaxy()-220,0,360,5);
pieslice(188+i,getmaxy()-220,0,360,4);
pieslice(200+i,getmaxy()-220,0,360,4);

//front section of engine

sector(206+i,getmaxy()-228,0,90,8,7);
sector(206+i,getmaxy()-228,270,360,8,8);
delay(150);
cleardevice();
}
getch();
}
