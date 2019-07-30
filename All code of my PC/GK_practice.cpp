#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int x,y,z;
	x=y=z=0;
	char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
	cout<<"		Guest Enter Your Name
";
	cin>>ch1;
	clrscr();
	cout<<"		Welcome "<<ch1<<".

 Sobriquet is an unofficial title or
name given to someone or something.";
	cout<<"
 Enter answer in form of 'a','b' and'c'only.";
	cout<<"

		What is called as ' THE HOLY
LAND'?
a.Jerusalem
b.Mathura
c.Mecca
";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Good Job.
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE ROOF OF THE
WORLD'?
a.Nepal
b.Rome
c.Tibet
";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"Good Job.
Your score is "<<x;

	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();

	cout<<"

		What is called as ' THE LAND OF RISING
SUN'?
a.Chicago
b.Japan
c.Tibet
";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Good Job.
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE GIFT OF
NILE'?
a.Chicago
b.Egypt
c.Africa
";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE LAND OF MIDNIGHT
SUN'?
a.Norway
b.Japan
c.Australia
";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE LAND OF
THUNDERBOLT'?
a.Bhutan
b.Canada
c.Arab
";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE WINDY
CITY?
a.Jerusalem
b.Japan
c.Chicago
";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE LAND OF WHITE
ELEPHANTS'?
a.Bangladesh
b.Thailand
c.India
";
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE CITY OF SEVEN
HILLS'?
a.Rome
b.Nilgiri Hills
c.Tibet
";
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"
Your score is "<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"

		What is called as ' THE DARK
CONTIENENT'?
a.Asia
b.Australia
c.Africa
";
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"
Your score is "<<x;

	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	if(x==100)
	cout<<"No cheating...... You have done this earlier also.";
	if(x==90)
	cout<<"You are extremely intelligent
 Your Score is 90";
	if(x==80)
	cout<<"You are intelligent
 Your Score is 80";
	if(50==x||x==70||x==60)
	cout<<"You are average
 Your Score is "<<x<<"
Better luck next
time";
	else if(x<=40)
	cout<<"No use........ Not even 5 questions right";
	getch();
}
