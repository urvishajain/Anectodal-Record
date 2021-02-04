#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void skills();
void search();
void Edit();
void choice()
{
ax1: cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
int ch;
cout<<"Enter 1 for entering records"<<"\n";
cout<<"enter 2 for search"<<"\n";
cout<<"enter 3 for edit"<<"\n";
cout<<"enter 4 for delete"<<"\n";
cout<<"enter 5 for exit"<<"\n";
cout<<"enter your choice"<<"\n";
cin>>ch;
char cont;
switch (ch)
{
case 1:
{
skills();
cout<<"wanna continue y/Y or n/N";
cin>>cont;
if(cont=='Y'||cont=='y')
{goto ax1;}
else{
exit(0);
}
break;
}
case 2:
{
search();
cout<<"wanna continue y/Y or n/N";
cin>>cont;
if(cont=='Y'||cont=='y')
{goto ax1;}
else{
exit(0);
}
break;
}
}
}
void skills()
{
  clrscr();
   int roll,cl,csaA,csaB,i,i1;
  float acp;
  char sec,Nm[10],we,ae,phe,ts,ss,es,at1,at2,at3,at4,vs,ia,ib,csaA1,csaA2;
  cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";

cout<<"Enter class of the student\n";
cin>>cl;

S1: cout<<"Enter section\n";
cout<<"Press E for section excellent\n";
cout<<"Press G for section glorious\n";
cout<<"Press M for section marvellous\n";
cout<<"Press S for section superb\n";
cin>>sec;
if(sec!='E'&&sec!='G'&&sec!='M'&&sec!='S')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto S1;
}

  clrscr();
  cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";

  cout<<"Enter name of the student\n";
  gets(Nm);
   clrscr();
  cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";

cout<<"ENTER ROLL NUMBER\n";
cin>>roll;
clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";

cout<<"Academic Performance:Scholostic Areas \n";
cout<<"part A\n";
cout<<"Enter percentage\n";
cin>>acp;
Y: clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Academic Performance:Scholostic Areas \n";
cout<<"part B\n";

cout<<"Work Experience\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>we;
if(we!='A'&&we!='B'&&we!='C'&&we!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto Y;
}
X: clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Academic Performance:Scholostic Areas \n";
cout<<"part B\n";

cout<<"Art Education\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>ae;
if(ae!='A'&&ae!='B'&&ae!='C'&&ae!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto X;
}
W:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Academic Performance:Scholostic Areas \n";
cout<<"part B\n";

cout<<"Physical and Health Education\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>phe;
if(phe!='A'&&phe!='B'&&phe!='C'&&phe!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto W;
}
V:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part A\n";

cout<<"Thinking Skills(Creative and Critical Thinking,Problem Solving,Decision Making,Self Awareness)\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>ts;
if(ts!='A'&&ts!='B'&&ts!='C'&&ts!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto V;
}
U:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part A\n";

cout<<"Social Skills(Interpersonal,Communicative,Empathy)\n";
cout<<"press A for excellent\n";
cout<<"press B  for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>ss;
if(ss!='A'&&ss!='B'&&ss!='C'&&ss!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto U;
}
T:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part A\n";

cout<<"Emotional Skills(Dealing with Stress,Managing Emotions)\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>es;
if(es!='A'&&es!='B'&&es!='C'&&es!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto T;
}
S:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part B\n";
cout<<"1. Attitude Towards\n";
cout<<"1.1 TEACHERS\n";

cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>at1;
if(at1!='A'&&at1!='B'&&at1!='C'&&at1!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto S;
}
R:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part B\n";
cout<<"1. Attitude Towards\n";
cout<<"1.2 SCHOOL MATES\n";

cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>at2;
if(at2!='A'&&at2!='B'&&at2!='C'&&at2!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto R;
}
Q:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part B\n";
cout<<"1. Attitude Towards\n";
cout<<"1.3 SCHOOL PROGRAMMES\n";

cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>at3;
if(at3!='A'&&at3!='B'&&at3!='C'&&at3!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto Q;
}
P:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part B\n";
cout<<"1. Attitude Towards\n";
cout<<"1.4 ENVIRONMENT\n";

cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>at4;
if(at4!='A'&&at4!='B'&&at4!='C'&&at4!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto P;
}
O:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Co-scholastic Areas\n";
cout<<"part B\n";
cout<<"2. Value Systems\n";

cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cout<<"press D for poor\n";
cin>>vs;
if(vs!='A'&&vs!='B'&&vs!='C'&&vs!='D')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto O;
}
F1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"CO-scholastic Activities\n";
cout<<"part A\n";
cout<<"Only two activities should be assesed\n";
cout<<"Press 1 for literary and creative skills\n";
cout<<"press 2 for scientific skills\n";
cout<<"press 3 for aesthatics and performing art\n";
cout<<"press 4 for clubs(eco club,health and wellness and others\n";

cin>>csaA;
switch(csaA)
{
case 1:
{
N:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Literary and Creative Skills\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA1;
if(csaA1!='A'&&csaA1!='B'&&csaA1!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto N;
}
break;
}
case 2:
{
M:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Scientific Skills\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA1;
if(csaA1!='A'&&csaA1!='B'&&csaA1!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto M;
}
break;
}
case 3:
{
L:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Aesthatics and Performing Art\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA1;
if(csaA1!='A'&&csaA1!='B'&&csaA1!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto L;
}
break;
}
case 4:
{
K:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Clubs(Eco club and Health and wellness and others)\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA1;
if(csaA1!='A'&&csaA1!='B'&&csaA1!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto K;
}
break;
}
default:
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"You have entered a wrong choice\n";
delay(700);
goto F1;
}
}
H:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"CO-scholastic Activities\n";
cout<<"part A\n";
cout<<"Enter your second choice \n";
cout<<"Press 1 for literary and creative skills\n";
cout<<"press 2 for scientific skills\n";
cout<<"press 3 for aesthatics and performing art\n";
cout<<"press 4 for clubs(eco club,health and wellness and others\n";
cin>>csaB;
if(csaB==csaA)
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"You have already entered it\n";
delay(700);
goto H;
}
else
{
switch(csaB)
{
case 1:
{
I:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Literary and Creative Skills\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA2;
if(csaA2!='A'&&csaA2!='B'&&csaA2!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto I;
}
break;
}
case 2:
{
G:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Scientific Skills\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA2;
if(csaA2!='A'&&csaA2!='B'&&csaA2!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto G;
}
break;
}
case 3:
{
F:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Aesthatics and Performing Art\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA2;
if(csaA2!='A'&&csaA2!='B'&&csaA2!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto F;
}
break;
}
case 4:
{
E:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Clubs(Eco club and Health and wellness and others)\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>csaA2;
if(csaA2!='A'&&csaA2!='B'&&csaA2!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto E;
}
break;
}
default:
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"You have entered a wrong choice\n";
delay(700);
goto H;
}
}
}
A2:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Health and Physical Education\n";
cout<<"Select any two\n";
cout<<"Press 1 for Sports/Indigineous Sports\n";
cout<<"Press 2 for NCC/NSS\n";
cout<<"Press 3 for Scouting and Guiding \n";
cout<<"Press 4 for Swimming\n";
cout<<"Press 5 for Gymnastics\n";
cout<<"Press 6 for Yoga\n";
cout<<"Press 7 for First Aid\n";
cout<<"Press 8 for Gardening/Shramdan\n";

cin>>i;

switch(i)
{
case 1:
{
Z:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Sports / Indigineous Sports\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto Z;
}
break;
}
case 2:
{
D:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"NCC/NSS\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto D;
}
break;
}
case 3:
{
C:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Scouting and Guiding\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto C;
}
break;
}
case 4:
{
B:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Swimming\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto B;
}
break;
}
case 5:
{
A1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Gymanastics\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto A1;
}
break;
}
case 6:
{
X1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Yoga\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto X1;
}
break;
}
case 7:
{
Y1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"First Aid\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto Y1;
}
break;
}
case 8:
{
W1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Gardening/Shramdan \n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ia;
if(ia!='A'&&ia!='B'&&ia!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto W1;
}
break;
}
default:
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto A2;
}
}
A3:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Health and Physical Education\n";
cout<<"Select the other\n";
cout<<"Press 1 for Sports/Indigineous Sports\n";
cout<<"Press 2 for NCC/NSS\n";
cout<<"Press 3 for Scouting and Guiding \n";
cout<<"Press 4 for Swimming\n";
cout<<"Press 5 for Gymnastics\n";
cout<<"Press 6 for Yoga\n";
cout<<"Press 7 for First Aid\n";
cout<<"Press 8 for Gardening/Shramdan\n";

cin>>i1;
if(i1==i)
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"You have already entered it";
delay(700);
goto A3;
}
else
{
switch(i1)
{
case 1:
{
Z1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Sports / Indigineous Sports\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto Z1;
}
break;
}
case 2:
{
D1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"NCC/NSS\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto D1;
}
break;
}
case 3:
{
C1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Scouting and Guiding\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto C1;
}
break;
}
case 4:
{
B1:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Swimming\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto B1;
}
break;
}
case 5:
{
A4:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Gymanastics\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto A4;
}
break;
}
case 6:
{
X2:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Yoga\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto X2;
}
break;
}
case 7:
{
Y2:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"First Aid\n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto Y2;
}
break;
}
case 8:
{
W2:clrscr();
cout<<"\t"<<"\t"<<"SHRI KANWARTARA PUBLIC HIGHER SECONDARY SCHOOL"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"MANDLESHWAR"<<"\n";
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"ANA-TOTAL RECORD"<<"\n";
cout<<"Gardening/Shramdan \n";
cout<<"press A for excellent\n";
cout<<"press B for good\n";
cout<<"press C for average\n";
cin>>ib;
if(ib!='A'&&ib!='B'&&ib!='C')
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto W2;
}
break;
}
default:
{
clrscr();
cout<<"\n"<<"\n"<<"\n"<<"Wrong choice";
delay(700);
goto A3;
}
}

}

fstream r;
r.open("SKILL.xlsx",ios::app);
r<<cl<<"\t"<<sec<<"\t"<<Nm<<"\t"<<roll<<"\t"<<acp<<"\t"<<we<<"\t"<<ae<<"\t"<<phe<<"\t"<<ts<<"\t"<<ss<<"\t"<<es<<"\t"<<at1<<"\t"<<at2<<"\t"<<at3<<"\t"<<at4<<"\t"<<vs<<"\t"<<csaA1<<"\t"<<csaA2<<"\t"<<ia<<"\t"<<ib<<"\n";
cout<<cl<<"\t"<<sec<<"\t"<<Nm<<"\t"<<roll<<"\t"<<acp<<"\t"<<we<<"\t"<<ae<<"\t"<<phe<<"\t"<<ts<<"\t"<<ss<<"\t"<<es<<"\t"<<at1<<"\t"<<at2<<"\t"<<at3<<"\t"<<at4<<"\t"<<vs<<"\t"<<csaA1<<"\t"<<csaA2<<"\t"<<ia<<"\t"<<ib<<"\n";
delay(3500);
r.close();

}
/////////////////////////////////////////////////////////////////
void search()
{
int rno;
 int roll,cl,csaA,csaB,i,i1;
  float acp;
  char sec,Nm[10],we,ae,phe,ts,ss,es,at1,at2,at3,at4,vs,ia,ib,csaA1,csaA2;
 cout<<"Enter the roll no \n";
 cin>>rno;
 fstream f("SKILL.xlsx",ios::app);
 while(f)
 {
f>>cl>>sec>>Nm>>roll>>acp>>we>>ae>>phe>>ts>>ss>>es>>at1>>at2>>at3>>at4>>vs>>csaA1>>csaA2>>ia>>ib>>"\n";
if(roll==rno)
{
cout<<cl<<"\t"<<sec<<"\t"<<Nm<<"\t"<<roll<<"\t"<<acp<<"\t"<<we<<"\t"<<ae<<"\t"<<phe<<"\t"<<ts<<"\t"<<ss<<"\t"<<es<<"\t"<<at1<<"\t"<<at2<<"\t"<<at3<<"\t"<<at4<<"\t"<<vs<<"\t"<<csaA1<<"\t"<<csaA2<<"\t"<<ia<<"\t"<<ib<<"\n";

}
else{
cout<<cl<<"\t"<<sec<<"\t"<<Nm<<"\t"<<roll<<"\t"<<acp<<"\t"<<we<<"\t"<<ae<<"\t"<<phe<<"\t"<<ts<<"\t"<<ss<<"\t"<<es<<"\t"<<at1<<"\t"<<at2<<"\t"<<at3<<"\t"<<at4<<"\t"<<vs<<"\t"<<csaA1<<"\t"<<csaA2<<"\t"<<ia<<"\t"<<ib<<"\n";
delay(3500);
cout<<"did not match";
delay(900);
exit(0);
}

 }}
void Edit()
{
int rno;
 int roll,cl,csaA,csaB,i,i1;
  float acp;
  char sec,Nm[10],we,ae,phe,ts,ss,es,at1,at2,at3,at4,vs,ia,ib,csaA1,csaA2;
cout<<"Enter the roll no to be edited";
cin>>rno;
 fstream f("SKILL.xlsx",ios::app);
 while(f)
 {
f>>cl>>sec>>Nm>>roll>>acp>>we>>ae>>phe>>ts>>ss>>es>>at1>>at2>>at3>>at4>>vs>>csaA1>>csaA2>>ia>>ib>>"\n";
if(roll==rno)
{
skills();
fstream r;
r.open("SKILL2.xlsx",ios::app);
r<<cl<<"\t"<<sec<<"\t"<<Nm<<"\t"<<roll<<"\t"<<acp<<"\t"<<we<<"\t"<<ae<<"\t"<<phe<<"\t"<<ts<<"\t"<<ss<<"\t"<<es<<"\t"<<at1<<"\t"<<at2<<"\t"<<at3<<"\t"<<at4<<"\t"<<vs<<"\t"<<csaA1<<"\t"<<csaA2<<"\t"<<ia<<"\t"<<ib<<"\n";

}
else
{
fstream r;
r.open("SKILL2.xlsx",ios::app);
r<<cl<<"\t"<<sec<<"\t"<<Nm<<"\t"<<roll<<"\t"<<acp<<"\t"<<we<<"\t"<<ae<<"\t"<<phe<<"\t"<<ts<<"\t"<<ss<<"\t"<<es<<"\t"<<at1<<"\t"<<at2<<"\t"<<at3<<"\t"<<at4<<"\t"<<vs<<"\t"<<csaA1<<"\t"<<csaA2<<"\t"<<ia<<"\t"<<ib<<"\n";
}
remove("SKILL.xlsx");
rename("SKILL2.xlsx","SKILL.xlsx");


}

}




///////////////////////////////////////////////////////////////////
void main()
{
clrscr();
choice();
getch();
}