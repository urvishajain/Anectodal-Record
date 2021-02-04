#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
void main()
   {
   /* request auto detection */
   int gdriver = DETECT, gmode;
								 /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */

   /* draw a rectangle */
   rectangle(50,220,280,100);
   rectangle(320,220,550,100);
   line(50,130,280,130);
   line(50,160,280,160);
   line(50,190,280,190);
   line(220,220,220,100);
   outtextxy(225,110,"GRADE");
   outtextxy(80,140,"WORK EXPERIENCE");
   outtextxy(80,170,"ART EDUCATION");
   outtextxy(55,200,"PHYSICAL HEALTH EDU.");
   outtextxy(281,60,"TERM I");
   line(320,130,550,130);
   line(320,160,550,160);
   line(320,190,550,190);
   line(490,220,490,100);
   outtextxy(100,10,"SHRI KANWARTARA SENIOR SECONDARY SCHOOL,MANDLESHWAR");
   outtextxy(10,30,"Name of the Student:");
   outtextxy(170,30,"xyz");
   outtextxy(290,30,"Roll No.:");
   outtextxy(360,30,"11111");
   outtextxy(410,30,"Class&Section:");
   outtextxy(520,30,"11S");
   outtextxy(370,110,"SKILL");
   outtextxy(500,110,"GRADE");
   outtextxy(350,140,"THINKING SKILLS");
   outtextxy(350,170,"SOCIAL SKILLS");
   outtextxy(350,200,"EMOTIONAL SKILLS");
   rectangle(50,260,280,400);
   line(50,280,280,280);
   line(50,300,280,300);
   line(50,320,280,320);
   line(50,340,280,340);
   line(50,360,280,360);
   line(50,380,280,380);
   line(220,260,220,400);
   outtextxy(65,285,"1.ATTITUDE TOWARDS");
   outtextxy(65,305,"A.TEACHERS");
   outtextxy(65,325,"B.SCHOOL MATES");
   outtextxy(65,345,"C.SCHOOL PROGRAMMES");
   outtextxy(65,365,"D.ENVIRONMENT");
   outtextxy(65,385,"2.VALUE SYSTEMS");
   outtextxy(225,265,"GRADE");
   rectangle(320,260,550,360);
   line(320,280,550,280);
   line(320,300,550,300);
   line(320,320,550,320);
   line(320,340,550,340);
   line(490,260,490,360);
   outtextxy(370,265,"ACTIVITY");
   outtextxy(500,265,"GRADE");
   outtextxy(340,285,"LITERARY&CREATIVE ");
   outtextxy(340,305,"SCIENTIFIC SKILLS");
   outtextxy(325,325,"AESTHETIC&PRFRMNG ART");
   outtextxy(340,345,"CLUBS");




   /* clean up */
   getch();
   closegraph();
   }

