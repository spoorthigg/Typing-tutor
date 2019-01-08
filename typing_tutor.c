                SOURCE CODE

/*
TYPING TUTOR
*/
//#include<iostream.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
//#include<fstream.h>
#include<fstream.h>
#include<graphics.h>
#include<process.h>
//#include<ncurses.h>
void basics();
void letters();
void sentence();
int main()
{
system("cls");
int opt;
menu:
system("cls");
printf("\n\n\t\t\t   =====TYPING TUTOR =====");
printf("\n\n\n\t\t  ::MAIN MENU::");
printf("\n\n\t\t1.Learn basics");
printf("\n\n\t\t2.Type the letters");
printf("\n\n\t\t3.Type the sentence");
printf("\n\n\t\t0.Exit");
printf("\n\n\n\t\tEnter your choice : ");
scanf("%d",&opt);
switch(opt)
{
case 1: basics();
    goto menu;
    break;
case 2: letters();
    goto menu;
    break;
case 3: sentence();
    goto menu;
    break;
case 0: exit(0);
    break;
default: goto menu;
     break;
}
}
void basics()
{
clrscr();
int rep;
char choice1,choice2;
char key;
char mid[]="asdfgf ;lkjhj";
char top[]="qwertr poiuyu";
char bot[]="zxcvbv /.,mnm";
printf("\n\nHello! I think you are new dude to the world of fast typing.");
delay(1000);
printf("\n\nAnd as I have now agreed to teach you how to be fast in typing......");
delay(1000);
printf("\n\nLet us start.Are you ready ?(y/n)");
choice1=getche();
if(choice1=='y'||choice1=='Y')
{
    clrscr();
    printf("\n\nUnderstand, it is very to do this....");
    delay(1000);
    printf("\n\nFollow me.......");
    delay(1000);
    printf("\n\nPress any key to start.");
    getch();
    printf("\n\nLet us study the basics....");
    delay(1000);
    printf("\n\nFirst you have to learn the mid row.....");
    printf("\n\nHow many times do you want to practice : ");
    scanf("%d",&rep);
    printf("\n\nDo you want to see the finger positioning ?(y/n)");
    choice2=getche();
    if(choice2=='y'||choice2=='Y')
    {
	/************************************/
	printf("\n\nUnder development..........");
	getch();
    }
    printf("\n\nType what you see on the screen...");
    for(int i=0;i<rep;++i)
    {
	for(int j=0;j<13;++j)
	{
	    printf("\n\nEnter this:"<<mid[j]);
	    printf("\tYou entered:");
	    key=getche();
	    if(key==mid[j])
	    {
		printf("\tCorrect..");
		sound(300);
		delay(200);
		nosound();
	    }
	    else
	    {
		printf("\tWrong");
		sound(600);
		delay(100);
		nosound();
		sound(700);
		delay(100);
		nosound();
	    }
	}
    }
//Top row
    printf("\n\nNow you have to learn the top row.....");
    printf("\n\nHow many times do you want to practice : ");
    scanf("%d",&rep);
    printf("\n\nDo you want to see the finger positioning ?(y/n)");
    choice2=getche();
    if(choice2=='y'||choice2=='Y')
    {
	/************************************/
	printf("\n\nUnder development..........");
	getch();
    }
    printf("\n\nType what you see on the screen...");
    for(i=0;i<rep;++i)
    {
	for(int j=0;j<13;++j)
	{
	    printf("\n\nEnter this:"<<top[j]);
	    printf("\tYou entered:");
	    key=getche();
	    if(key==top[j])
	    {
		printf("\tCorrect..");
		sound(300);
		delay(200);
		nosound();
	    }
	    else
	    {
		printf("\tWrong");
		sound(600);
		delay(100);
		nosound();
		sound(700);
		delay(100);
		nosound();
	    }
	}
    }
//Bottom Row
    printf("\n\nFirst you have to learn the bottom row.....");
    printf("\n\nHow many times do you want to practice : ");
    scanf("%d",&rep);
    printf("\n\nDo you want to see the finger positioning ?(y/n)");
    choice2=getche();
    if(choice2=='y'||choice2=='Y')
    {
	/************************************/
	printf("\n\nUnder development..........");
	getch();
    }
    printf("\n\nType what you see on the screen...");
    for(i=0;i<rep;++i)
    {
	for(int j=0;j<13;++j)
	{
	    printf("\n\nEnter this:"<<bot[j]);
	    printf("\tYou entered:");
	    key=getche();
	    if(key==bot[j])
	    {
		printf("\tCorrect..");
		sound(300);
		delay(200);
		nosound();
	    }
	    else
	    {
		printf("\tWrong");
		sound(600);
		delay(100);
		nosound();
		sound(700);
		delay(100);
		nosound();
	    }
	}
    }
}  //wanna learn
else
{
printf("\n\nOh! I think you are busy. OK See you later.......");
delay(3000);
}
}
void letters()
{
randomize();
char choice;
int num;
int score=0,randnum;
char letter,key;
clrscr();
printf("In this test you will have to type the letters you see on the screen.");
delay(1000);
printf("\n\nDo you want to see the help menu ?(y/n)");
choice=getche();
if(choice=='y'||choice=='Y')
{
printf("\n\n1.You are to type the random letters you see on the screen.");
delay(2000);
printf("\n\n2.If your answer is correct you can hear this beep.");
while(!kbhit())
{
sound(300);
delay(200);
nosound();
}
getch();
printf("\n\n3.If your answer is wrong you will hear this");
while(!kbhit())
{
sound(600);
delay(100);
nosound();
sound(700);
delay(100);
nosound();
}
}
printf("\n\nPress any key when you are ready.");
getch();
int number;
printf("\n\nWhat should be the max score:");
scanf("%d",&number);
for(int i=0;i<number;i++)
{
clrscr();
randnum=random(25);
for(int j=0;j<randnum;j++)
printf("\n");
randnum=random(25);
for(j=0;j<randnum;j++)
printf("\t");

num=65+random(25);
letter=(char)num;
printf("%c",letter);
key=getch();
if(key==letter)
{
sound(300);
delay(200);
nosound();
score++;
}
else
{
sound(600);
delay(200);
nosound();
sound(700);
delay(200);
nosound();
}
}
printf("\n\n\nYour total score is %d",score);
getch();
}
void sentence()
{
clrscr();
time_t t1,t2;
char line[300];
printf("This is speed test to try your speed.\n");
delay(1000);
type:
printf("\nYou will have to type the sentence given.\n");
delay(1000);
printf("\n\nPress any key to start.");
getch();
clrscr();
t1 = time(NULL);
printf("I am learning to type.");
printf("\n\nEnter the sentence:");
gets(line);
t2 = time(NULL);
t3= time(NULL);
if(!strcmp(line,"I am learning to type."))
{
t3=t2-t1;
printf("\n\nYou could type the sentence in %d seconds.", t3);
getch();
}
else
{
printf("\n\nThe sentence you typed was wrong..");
getch();
goto type;
}
}
