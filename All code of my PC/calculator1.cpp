#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	long double x,y;
	char ch,ar;
	do
       {
	clrscr();
	cout<<"
			*WELCOME TO NANU'S CALCULATOR*
";
	cout<<"
This is a Calculator containing the following functions

Addition
 Subtraction
 Multiplication
 Division
 Percentage

Power
";
	cout<<"
Type
 [+] for Addition
 [-] for Subtraction
 [*] for
Multiplication
 [/] for Division
 [%] for Percentage
 [^] for
Power
";
	cout<<"
Enter Function To use =  ";
	cin>>ch;
	cout<<(char)7;
	cout<<endl;
	//For Addition
       if(ch=='+')
		{
		clrscr();
		cout<<"
You are using Addition
";
		cout<<"
Enter First Number= ";
		cin>>x;

		cout<<"
Enter Second Number= ";
		cin>>y;

		cout<<"
Your answer is ";
		cout<<x+y;
		cout<<(char)7;
		}
	// For Subtraction
	 if(ch=='-')
		{
		clrscr();
		cout<<"
You are using Subtraction
";
		cout<<"
Enter First Number= ";
		cin>>x;
		cout<<"
Enter Second Number= ";
		cin>>y;
		cout<<"
Your answer is ";
		cout<<x-y;
		cout<<(char)7;
		}
	// For Multiplication
	 if(ch=='*')
		{
		clrscr();
		cout<<"
You are using Multiplication
";
		cout<<"
Enter First Number= ";
		cin>>x;
		cout<<"
Enter Second Number= ";
		cin>>y;
		cout<<"
Your answer is ";
		cout<<x*y;
		cout<<(char)7;
		}
	// For Division
	 if(ch=='/')
		{
		clrscr();
		cout<<"
You are using Division
";
		cout<<"
Enter First Number= ";
		cin>>x;
		cout<<"
Enter Second Number= ";
		cin>>y;
		cout<<"
Your answer is ";
		cout<<x/y;
		cout<<(char)7;
		}
		// For Percentage
	 if(ch=='%')
		{
		clrscr();
		cout<<"
You are using Percentage
";
		cout<<"
Enter Number= ";
		cin>>x;
		cout<<"
Enter Percentage= ";
		cin>>y;
		cout<<"
Your answer is ";
		cout<<y/100*x;
		cout<<(char)7;
	}
		//For Power
	if(ch=='^')
		{
		clrscr();
		cout<<"
You are using Power
";
		cout<<"
Enter Number= ";
		cin>>x;
		cout<<"
Enter Power= ";
		cin>>y;
		cout<<"
Your answer is ";
		cout<<pow(x,y);
		cout<<(char)7;
	}
		cout<<endl;
		cout<<"
Do you want to continue..Y/N?";
		cin>>ar;

		}
		while(ar=='Y'|| ar=='y');
		if(ar=='N' || ar=='n')
		{
			cout<<"
Thankyou for using this Calculator.Good Bye.
";
			cout<<"
Press any key to exit.......";
		}

		getch();
		cout<<(char)7;

}
