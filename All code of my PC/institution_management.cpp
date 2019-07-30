Code :
/*       Written By : Saurabh jain
                      II Year B.sc (Hons) Computer Science
					  College Of Vocational Studies
					  Delhi University

              INSTITUTE MANAGEMENT SYSTEM

THIS PROGRAM WILL TRACK OF ALL FACULTY AND STUDENTS DATA BASICALLY THIS
IS
A VERY SIMPLE
PROGRAM AND HELPS TO OVERCOME FROM ALL THOSE OLD METHODS OF RECORDIND
YHE
DATA
THIS PROGRAM WILL STORE DATA ACCORDING TO THE DIRECTORY BASED SYSTEM
AND MAKE TWO ENCRYTED TEXT FILES OF EACH PERSON NAME FOLLOWED BY A & P
YOU CAN ADD AS MANY AS INFORMATION YOU WANT BY RECODE ONLY TWO
FUNCTIONS
JUST GO THROUGH IT AND YOU WILL UNDERSTAND EASILY REALLY ITS A VERY
SIMPLE
PROGRAM


JUST COMPILE IT MAKE ITS EXECUTABLE FILE AND COPY IT IN ANY DRIVES
EITHER C,D,E OR F AND THEN RUN IT DONT RUN IT WITHIN BORLAND C++ WINDOW
SOME FUNCTIONS WILL NOT WORK

SO PLEASE TAKE CARE

ITS ACCESCODE IS NOPASSWORD

  If Modified Please Send To : urloginid@yahoo.co.in
*/


#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
#include<dir.h>
#include<stdio.h>

#define xy(z) (8*(z-1))

// GLOBAL Funcions

void grap();
void intro();
void box();
void mainwindow();
void faculty();
void student();
void enterdata();
void personaldetial();
void admindetails(char *name);
void seeyearfaculty();
void fullaccessfaculty();
void modifyfaculty();
void deletefaculty();
void prin();
void enterdatast();
void personalst();
void academic(char *name);
void seetotalst();
void fullaccessst();
void modifyst();
void deletest();
void encrypt(char *name);
void closeprog();
void quit();
void typeme(int left,int top,const char *word,int interval);

// GLOBAL Variables


int option,pass,i,access,x,y,status;

char year[10],ch,name[100],temp[200],newfile[100],a[50],mod;

void *p;

size_t area;

void main()
{
	grap();
	a:clearviewport();
	  i=0;

rectangle(getmaxx()/2-140,getmaxy()/2-20,getmaxx()/2+135,getmaxy()/2+4);
	  outtextxy(getmaxx()/2-127,getmaxy()/2-12,"Enter Accesscode:");
	  gotoxy(43,15);


//Password Code


do
{
	pass=getch();
	if(pass==13) goto b;
	a[i]=char(pass);
	cout<<"*";
	sound(500);delay(100);nosound();
	i++;
}while(pass!=13);

b:a[i]=0;
  access=stricmp(a,"nopassword");

  if(access==0)
  {
	  cout<<"
 Access Granted ..
Press Any Key To Continue.......";
	  intro();
	  textcolor(BLACK);
	  textbackground(YELLOW);
	  mainwindow();
  }

  else
  {
	  clearviewport();
	  cout<<"
Unautorised Access ";
	  cout<<"
Press Any Key To Continue......... ";
	  getch();
	  goto a;
  }
}

// INTRODUCTION SCREEN

void intro()
{
	int a,b,c,d;
	setfillstyle(8,1);

for(a=0,b=getmaxx(),c=getmaxx()/2,d=getmaxx()/2;a<getmaxx()/2+3;a+=5,b-=5,
c-=5,d+=5)

	{
		line(c,xy(8),d,xy(8));line(c,xy(51),d,xy(51));
		bar(0,xy(9),a,xy(50));bar(b,xy(9),getmaxx(),xy(50));
		sound(10*(a+250));delay(10);
	}

	nosound();
	char pattern[] ={0xfe,0xbc,0xda,0xe4,0xe2,0xc0,0x88,0x00};
	setfillpattern(pattern,1);
	bar(0,0,640,480);
	settextstyle(1,0,5);
	setcolor(10);
	outtextxy(100,140,"INSTITUTE MANAGEMENT");
	outtextxy(250,200,"SYSTEM");
	getch();
	setcolor(0);

	for(i=0;i<=320;i++)
	{
		rectangle(0+i,0,640-i,480);
		delay(5);
	}

	closegraph();
}


// DETECTION OF GRAPHICS

void grap()
{
	int gd= DETECT, gm, errorcode;
	initgraph(&gd, &gm, "c:\tc\bgi");
	errorcode = graphresult();


if(errorcode != grOk)
{
	printf("Graphics error: %s
", grapherrormsg(errorcode));
	exit(1);
}

}

// FUNCTION TO DRAW A BOX

void box(void)
{
	int i,x,y;
	gotoxy(11,2);

	for(i=1; i<=58; i++)
	{
		putch(196);
	}

	gotoxy(11,6);

	for(i=1; i<=58; i++)
	{
		putch(196);
	}

	gotoxy(68,2);
	putch(191);
	y=3;

	for(i=1; i<=21; i++)
	{
		gotoxy(68,y);
		y++;
		putch(179);
	}

	gotoxy(68,24);
	putch(217);
	gotoxy(11,24);

	for(i=1; i<=57; i++)
	{
		putch(196);
	}

	gotoxy(11,24);
	putch(192);
	y=3;

	for(i=1; i<=21; i++)
	{
		gotoxy(11,y);
		y++;
		putch(179);
	}

	gotoxy(11,2);
	putch(218);

}


// Main Window Function

void mainwindow()
{
	clrscr();
	box();

	gotoxy(26,4);cout<<"INSTITUTE MANAGEMENT SYSTEM ";
	gotoxy(26,5);cout<<"===========================";
	gotoxy(26,8);cout<<"Choose Your Option .......";
	gotoxy(26,10);cout<<"1. Faculty Informaton ";
	gotoxy(26,12);cout<<"2. Students Information ";
	gotoxy(26,14);cout<<"3. Print Any Information ";
	gotoxy(26,16);cout<<"Press 0 To Exit
";
	gotoxy(26,18);cout<<"Option -----> ";

	cin>>option;

	switch(option)
	{
		case 1 : faculty();
			break;

			case 2 : student();
				break;

				case 3 : prin();
					break;

					default : closeprog();
						break;
	};
}


// FUNCTION FOR SHOWING A MAIN WINDOW OF FACULTY INFORMATION

void faculty()
{
	clrscr();
	box();

	gotoxy(26,4);cout<<"INSTITUTE MANAGEMENT SYSTEM ";
	gotoxy(26,5);cout<<"===========================";
	gotoxy(26,8);cout<<"Choose You Option........";
	gotoxy(26,10);cout<<"1. Add A New Record ";
	gotoxy(26,12);cout<<"2. See All Faculty's ";
	gotoxy(26,14);cout<<"3. Full Access To Any Faculty Information ";
	gotoxy(26,16);cout<<"4. Modify Any Information ";
	gotoxy(26,18);cout<<"5. Delete Any Information ";
	gotoxy(26,20);cout<<"Press 0 To Exit....... ";
	gotoxy(26,22);cout<<"Option------> ";

	cin>>option;

	switch(option)
	{
		case 1 : enterdata();
			break;

			case 2 : seeyearfaculty();
				break;

				case 3 : fullaccessfaculty();
					break;

					case 4 : modifyfaculty();
						break;

						case 5 : deletefaculty();
							break;

							default : closeprog();
								break;
	};
}


// FUNCTION TO INSERT A DATA OF FACULTY

void enterdata()
{
	clrscr();

	cout<<"

		Enter The Year Which you Want To Add The Data ";
	cout<<"
		============================================= ";
	gets(year);

	mkdir("data");
	chdir("data");
	mkdir("faculty");
	chdir("faculty");
	mkdir(year);
	chdir(year);

	cout<<"
	    Enter The Faculty Name : ";
	gets(name);

	mkdir(name);
	chdir(name);

	personaldetial();
	chdir("\");
	mainwindow();
}


// FUNCTION TO ENTER A PERSONAL DETAILS OF A FACULTY

void personaldetial()
{
	cout<<"

		      Enter The Personal Details ";
	cout<<"
		      ========================== ";
	cout<<"

	Enter The The Name Of A Person : ";
	gets(name);

	mkdir(name);
	chdir(name);

	strcpy(newfile,"p");
	strcat(newfile,name);
	strcat(newfile,".txt");
	ofstream fout(newfile);

	if(!fout)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	fout<<"NAME : "<<name;

	cout<<"
	Enter The Address : ";
	gets(temp);

	fout<<"
ADDRESS :"<<temp;

	cout<<"
	Enter Contact No. : ";
	gets(temp);

	fout<<"
CONTACT No. :"<<temp;

	fout.close();
	encrypt(newfile);
	admindetails(name);
}


// FUNCTION TO ENTER A ADMINISTRATION DETAILS OF A FACULTY


void admindetails(char *name)
{
	clrscr();

	cout<<"

		      Enter The Administration Detials ";
	cout<<"
		      ================================ ";

	strcpy(newfile,"a");
	strcat(newfile,name);
	strcat(newfile,".txt");

	ofstream foutt(newfile);

	if(!foutt)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	foutt<<"NAME : "<<name;

	cout<<"

	Enter Educational Qualification :";
	gets(temp);

	foutt<<"
EDUCATIONAL QUALIFICATIONS :"<<temp;

	cout<<"
	          Enter The Name Of The Subjects Taught ";
	cout<<"
	          ===================================== ";

	foutt<<"
SUBJECTS TAUGHT :";

	cout<<"

	Subject(s) Taught to First Year: ";
	gets(temp);

	foutt<<"

	 First Year :"<<temp;

	cout<<"
	Type Of Subject (Theory / Practical) :";
	gets(temp);

	foutt<<"
	 Type of Subject :"<<temp;

	cout<<"

	Subject(s) Taught to Second Year: ";
	gets(temp);

	foutt<<"

	 Second Year :"<<temp;

	cout<<"
	Type Of Subject (Theory / Practical) :";
	gets(temp);

	foutt<<"
	 Type of Subject :"<<temp;

	cout<<"

	Subject(s) Taught to Third Year: ";
	gets(temp);

	foutt<<"

	 Third Year :"<<temp;

	cout<<"
	Type Of Subject (Theory / Practical) :";
	gets(temp);

	foutt<<"
	 Type of Subject :"<<temp;

	cout<<"
	Enter Type of Faculty (Permanent / Visiting)";
	gets(temp);

	foutt<<"
TYPE OF FACULTY :"<<temp;

	foutt.close();
	encrypt(newfile);

}


// FUNCTION TO ENCRYPT A DATA

void encrypt(char *newfile)
{
	ofstream fout("temp.txt");
	ifstream fin(newfile);

	while(fin)
	{
		fin.get(ch);
		if(ch==EOF)break;
		mod=~ch;
		fout<<mod;
	}

	remove(newfile);
	rename("temp.txt",newfile);
}


// FUNCTION TO SEE THE TOTAL FACULTY OF A YEAR

void seeyearfaculty()
{
	clrscr();

	cout<<"

	Enter The Year Of Which You Want To See The Faculties

";
	gets(year);

	chdir("data");
	chdir("faculty");
	chdir(year);

	cout<<"

	Enter The Faculty Name
	";
	gets(name);

	chdir(name);

	clrscr();

	cout<<"

";
	cout<<"

	  These Are The Teachers Of A Stream

";

	system("dir /b /ad /w");
	getch();
	chdir("\");
	mainwindow();
}


// FUNCTION TO GET FULL ACCESS TO A PARTICULAR DATA

void fullaccessfaculty()
{
	clrscr();

	chdir("data");
	chdir("faculty");

	cout<<"

	Enter The Year Of The Faculty : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of The Faculty : ";
	gets(name);

	chdir(name);

	cout<<"

	Enter The Name Of A Person : ";
	gets(name);

	chdir(name);

	cout<<"
	What You Want To See Personal Information Or Admin
Information
";
	cout<<"
	1. Personal ";
	cout<<"
	2. Adminstration ";
	cout<<"

	 Option------> ";

	cin>>option;

	clrscr();

	cout<<"


";

	if(option==1)
	{
		strcpy(newfile,"p");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	if(option==2)
	{
		strcpy(newfile,"a");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	chdir("\");
	mainwindow();
}


// FUNTION TO MODIFY A FACULTY DATA

void modifyfaculty()
{
	clrscr();

	chdir("data");
	chdir("faculty");

	cout<<"

	Enter The Year : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of A Faculty : ";
	gets(name);

	chdir(name);

	cout<<"

	Enter The Name Of A Person : ";
	gets(name);

	status=rmdir(name);

	if(status==0)
	{
		personaldetial();
	}

	else
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	chdir("\");
	mainwindow();
}

// FUNTION FOR DELETING A FACULTY DATA

void deletefaculty()
{
	clrscr();

	chdir("data");
	chdir("faculty");

	cout<<"

	Enter The Year : ";
	gets(year);

	chdir(year);

	cout<<"


	Enter The Name Of A Faculty : ";
	gets(name);

	chdir(name);

	cout<<"

	Enter The Name Of A Person : ";
	gets(name);

	cout<<"

		Are You Sure You Want To Remove It (y/n) : ";
	cin>>ch;

	if(ch=='y')
	{
		status=rmdir(name);

		if(status==0)
		{
			cout<<"

		Record Have Been Removed Succesfully ";
			cout<<"
		Press Any Key To Return To Main Menu ";
			getch();
			chdir("\");
			mainwindow();
		}

		else
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}
	}

	else
	{
		chdir("\");
		mainwindow();
	}
}


// FUNCTION FOR PRINTING THE DATA

void prin()
{
	clrscr();

	cout<<"
Enter The Option ";
	cout<<"
1. Faculty ";
	cout<<"
2. Student ";
	cout<<"

 Option------> ";
	cin>>option;

	chdir("data");

	if(option==1)
	{
		chdir("faculty");

		cout<<"
Enter The Year ";
		gets(year);

		chdir(year);

		cout<<"
Enter The Name Of Faculty ";
		gets(name);

		chdir(name);

		cout<<"
Want Take A Print Document Of Personal Or Admin Details ";
		cout<<"
1. Personal ";
		cout<<"
2. Adminstration ";
		cout<<"

 Option------> ";

		cin>>option;

		if(option==1)
		{
			strcpy(newfile,"p");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fout)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}

		if(option==2)
		{
			strcpy(newfile,"a");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}
	}

	if(option==2)
	{
		chdir("student");

		cout<<"
Enter The Year ";
		gets(year);

		chdir(year);

		cout<<"
Enter The Name Of Student ";
		gets(name);

		chdir(name);

		cout<<"
Want Take A Print Document Of Personal Or Admin Details ";
		cout<<"
1. Personal ";
		cout<<"
2. Academic ";
		cout<<"

 Option------> ";

		cin>>option;

		if(option==1)
		{
			strcpy(newfile,"p");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fout)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}

		if(option==2)
		{
			strcpy(newfile,"a");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fout)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}
	}

	chdir("\");
	mainwindow();
}


// FUNCTION FOR SHOWING A MAIN WINDOW OF STUDENT INFORMATION

void student()
{
	clrscr();
	box();

	gotoxy(26,4);cout<<"INSTITUTE MANAGEMENT SYSTEM ";
	gotoxy(26,5);cout<<"===========================";
	gotoxy(26,8);cout<<"Choose You Option........";
	gotoxy(26,10);cout<<"1. Add A New Student Record ";
	gotoxy(26,12);cout<<"2. See All Students ";
	gotoxy(26,14);cout<<"3. Full Access To Any Student Information ";
	gotoxy(26,16);cout<<"4. Modify Any Information ";
	gotoxy(26,18);cout<<"5. Delete Any Information ";
	gotoxy(26,20);cout<<"Press 0 To Exit....... ";
	gotoxy(26,22);cout<<"Option------> ";

	cin>>option;

	switch(option)
	{
		case 1 : enterdatast();
			break;

			case 2 : seetotalst();
				break;

				case 3 : fullaccessst();
					break;

					case 4 : modifyst();
						break;

						case 5 : deletest();
							break;

							default : closeprog();
								break;
	};
}


// FUNCTION TO ENTER A STUDENT DATA

void enterdatast()
{
	clrscr();

	cout<<"

		Enter The Year Which you Want To Add The Data ";
	cout<<"
		=============================================== ";
	gets(year);

	mkdir("data");
	chdir("data");
	mkdir("student");
	chdir("student");
	mkdir(year);
	chdir(year);

	personalst();
	chdir("\");
	mainwindow();
}


// FUNCTION TO ENTER A PERSONAL DETAILS OF A STUDENT

void personalst()
{
	cout<<"

		    Enter The Personal Details ";
	cout<<"
		    ========================== ";

	cout<<"

	Enter The The Name Of The Student : ";
	gets(name);

	mkdir(name);
	chdir(name);

	strcpy(newfile,"p");
	strcat(newfile,name);
	strcat(newfile,".txt");
	ofstream fout(newfile);

	if(!fout)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	fout<<" NAME : "<<name;

	cout<<"
	Fathers Name : ";
	gets(temp);
	fout<<"
 Fathers Name : "<<temp;

    cout<<"
	Date Of Birth : ";
	gets(temp);
	fout<<"
 Date Of Birth : "<<temp;

    cout<<"
	Contact Number : ";
	gets(temp);
	fout<<"
 Contact Number : "<<temp;

    cout<<"
	Address : ";
	gets(temp);
	fout<<"
 ADDRESS :"<<temp;

    cout<<"
	Course Name : ";
	gets(temp);
	fout<<"
 Course Name : "<<temp;

	fout.close();
	encrypt(newfile);
	academic(name);
}


// FUNCTION TO ENTER A ACADEMIC DETAILS OF A STUDENT

void academic(char *name)
{
	clrscr();

	cout<<"

		    Enter The Academic Detials ";
	cout<<"
		    ========================== ";

	strcpy(newfile,"a");
	strcat(newfile,name);
	strcat(newfile,".txt");

	ofstream foutt(newfile);

	if(!foutt)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	foutt<<" NAME : "<<name;

	cout<<"
	Type Of Course (Semster/Annual) : ";
	gets(temp);
	foutt<<"
 Type Of Course (Semester/Annual) : "<<temp;

    cout<<"
	Year Of Admission : ";
	gets(temp);
	foutt<<"
 Year Of Admission : "<<temp;

    cout<<"
	Admission Number : ";
	gets(temp);
	foutt<<"
 Admission Number : "<<temp;

    cout<<"
	Percentage In Intermediate : ";
	gets(temp);
	foutt<<"
 Percentage In Intermediate : "<<temp;

    cout<<"
		Percentage In College :";
    foutt<<"
	 Percentage In College : ";

    cout<<"
	First Year : ";
	gets(temp);
	foutt<<"
 First Year :"<<temp;

    cout<<"
	Second Year : ";
	gets(temp);
	foutt<<"
 Second Year :"<<temp;

    cout<<"
	Third Year : ";
	gets(temp);
	foutt<<"
 third Year :"<<temp;

	foutt.close();
	encrypt(newfile);
}


// FUNCTION TO SEE A TOTAL STUDENTS OF A PARTICULAR YEAR

void seetotalst()
{
	clrscr();

	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year Of Which You Want To See The Students
";
	gets(year);

	chdir(year);

	cout<<"

	  These Are The Students

";

	system("dir /b /ad /w");

	getch();
	chdir("\");
	mainwindow();
}


// FUNCTION TO SEE ALL DETAILS OF A STUDENT

void fullaccessst()
{
	clrscr();

	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year Of The Student : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of The Student : ";
	gets(name);

	chdir(name);

	cout<<"

	What You Want To See Personal Information Or Academic
Information ";
	cout<<"
	1. Personal ";
	cout<<"
	2. Academic ";
	cout<<"

	 Option------> ";

	cin>>option;

	clrscr();

	cout<<"


";

	if(option==1)
	{
		strcpy(newfile,"p");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	if(option==2)
	{
		strcpy(newfile,"a");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	chdir("\");
	mainwindow();
}


// FUNCTION TO MODIFY DETAILS OF A STUDENT

void modifyst()
{
	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year Of You Want To Change The Information : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of A Student : ";
	gets(name);

	status=rmdir(name);

	if(status==0)
	{
		personalst();
	}

	else
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	chdir("\");
	mainwindow();
}


// FUNCTION TO DELETE A STUDENT RECORD

void deletest()
{
	clrscr();

	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of A Student : ";
	gets(name);

	cout<<"

		Are You Sure You Want To Remove It (y/n) : ";
	cin>>ch;

	if(ch=='y')
	{
		status=rmdir(name);

		if(status==0)
		{
			cout<<"

		Record Have Been Removed Succesfully ";
			cout<<"
		Press Any Key To Return To Main Menu ";
			getch();
			chdir("\");
			mainwindow();
		}

		else
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}
	}

	else
	{
		chdir("\");
		mainwindow();
	}
}


// FUNCTION TO CLOSE A PROGRAM

void closeprog()
{
	grap();
	setcolor(6);

	for(i=0;i<=220;i++)
	{
		rectangle(0+i,0+i,640-i,480-i);
		delay(15);
	}

	for(i=0;i<=220;i++)
	{
		rectangle(100+i,100,540-i,380);
		delay(10);
	}

	quit();
	closegraph();
	exit(0);
}


void quit()
{
	int a,b,c;
	setcolor(0);

	for(a=1,b=getmaxy()-1,c=200;a<=getmaxy()/2;a++,b--,c--)
	{
		line(1,a,getmaxx()-1,a);
		line(1,b,getmaxx()-1,b);
		sound(10*(c+200));
		delay(1);
	}

	delay(300);
	nosound();
	setcolor(4);

	typeme(xy(2),xy(20),"DEVELOPED BY: VIVEK AND SAURABH JAIN",30);
	delay(1000);
	setcolor(0);

	typeme(xy(2),xy(20),"  DEVELOPED BY : SAURABH JAIN ",30);
	delay(100);
	setcolor(4);

	typeme(xy(2),xy(20),"FOR YOUR COMMENTS AND YOUR SUGGESTIONS",30);
	delay(500);
	setcolor(4);

	typeme(xy(2),xy(26),"EMAIL ME AT urloginid@yahoo.co.in",30);
	delay(2000);
}


void typeme(int left,int top,const char *word,int interval)
{
	char code[2];
	int length=strlen(word);
	for(int i=0;i<=length;i++)
	{
		code[0]=word[i];
		code[1]='Code :
/*       Written By : Saurabh jain
                      II Year B.sc (Hons) Computer Science
					  College Of Vocational Studies
					  Delhi University

              INSTITUTE MANAGEMENT SYSTEM

THIS PROGRAM WILL TRACK OF ALL FACULTY AND STUDENTS DATA BASICALLY THIS
IS
A VERY SIMPLE
PROGRAM AND HELPS TO OVERCOME FROM ALL THOSE OLD METHODS OF RECORDIND
YHE
DATA
THIS PROGRAM WILL STORE DATA ACCORDING TO THE DIRECTORY BASED SYSTEM
AND MAKE TWO ENCRYTED TEXT FILES OF EACH PERSON NAME FOLLOWED BY A & P
YOU CAN ADD AS MANY AS INFORMATION YOU WANT BY RECODE ONLY TWO
FUNCTIONS
JUST GO THROUGH IT AND YOU WILL UNDERSTAND EASILY REALLY ITS A VERY
SIMPLE
PROGRAM


JUST COMPILE IT MAKE ITS EXECUTABLE FILE AND COPY IT IN ANY DRIVES
EITHER C,D,E OR F AND THEN RUN IT DONT RUN IT WITHIN BORLAND C++ WINDOW
SOME FUNCTIONS WILL NOT WORK

SO PLEASE TAKE CARE

ITS ACCESCODE IS NOPASSWORD

  If Modified Please Send To : urloginid@yahoo.co.in
*/


#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
#include<dir.h>
#include<stdio.h>

#define xy(z) (8*(z-1))

// GLOBAL Funcions

void grap();
void intro();
void box();
void mainwindow();
void faculty();
void student();
void enterdata();
void personaldetial();
void admindetails(char *name);
void seeyearfaculty();
void fullaccessfaculty();
void modifyfaculty();
void deletefaculty();
void prin();
void enterdatast();
void personalst();
void academic(char *name);
void seetotalst();
void fullaccessst();
void modifyst();
void deletest();
void encrypt(char *name);
void closeprog();
void quit();
void typeme(int left,int top,const char *word,int interval);

// GLOBAL Variables


int option,pass,i,access,x,y,status;

char year[10],ch,name[100],temp[200],newfile[100],a[50],mod;

void *p;

size_t area;

void main()
{
	grap();
	a:clearviewport();
	  i=0;

rectangle(getmaxx()/2-140,getmaxy()/2-20,getmaxx()/2+135,getmaxy()/2+4);
	  outtextxy(getmaxx()/2-127,getmaxy()/2-12,"Enter Accesscode:");
	  gotoxy(43,15);


//Password Code


do
{
	pass=getch();
	if(pass==13) goto b;
	a[i]=char(pass);
	cout<<"*";
	sound(500);delay(100);nosound();
	i++;
}while(pass!=13);

b:a[i]=0;
  access=stricmp(a,"nopassword");

  if(access==0)
  {
	  cout<<"
 Access Granted ..
Press Any Key To Continue.......";
	  intro();
	  textcolor(BLACK);
	  textbackground(YELLOW);
	  mainwindow();
  }

  else
  {
	  clearviewport();
	  cout<<"
Unautorised Access ";
	  cout<<"
Press Any Key To Continue......... ";
	  getch();
	  goto a;
  }
}

// INTRODUCTION SCREEN

void intro()
{
	int a,b,c,d;
	setfillstyle(8,1);

for(a=0,b=getmaxx(),c=getmaxx()/2,d=getmaxx()/2;a<getmaxx()/2+3;a+=5,b-=5,
c-=5,d+=5)

	{
		line(c,xy(8),d,xy(8));line(c,xy(51),d,xy(51));
		bar(0,xy(9),a,xy(50));bar(b,xy(9),getmaxx(),xy(50));
		sound(10*(a+250));delay(10);
	}

	nosound();
	char pattern[] ={0xfe,0xbc,0xda,0xe4,0xe2,0xc0,0x88,0x00};
	setfillpattern(pattern,1);
	bar(0,0,640,480);
	settextstyle(1,0,5);
	setcolor(10);
	outtextxy(100,140,"INSTITUTE MANAGEMENT");
	outtextxy(250,200,"SYSTEM");
	getch();
	setcolor(0);

	for(i=0;i<=320;i++)
	{
		rectangle(0+i,0,640-i,480);
		delay(5);
	}

	closegraph();
}


// DETECTION OF GRAPHICS

void grap()
{
	int gd= DETECT, gm, errorcode;
	initgraph(&gd, &gm, "c:\tc\bgi");
	errorcode = graphresult();


if(errorcode != grOk)
{
	printf("Graphics error: %s
", grapherrormsg(errorcode));
	exit(1);
}

}

// FUNCTION TO DRAW A BOX

void box(void)
{
	int i,x,y;
	gotoxy(11,2);

	for(i=1; i<=58; i++)
	{
		putch(196);
	}

	gotoxy(11,6);

	for(i=1; i<=58; i++)
	{
		putch(196);
	}

	gotoxy(68,2);
	putch(191);
	y=3;

	for(i=1; i<=21; i++)
	{
		gotoxy(68,y);
		y++;
		putch(179);
	}

	gotoxy(68,24);
	putch(217);
	gotoxy(11,24);

	for(i=1; i<=57; i++)
	{
		putch(196);
	}

	gotoxy(11,24);
	putch(192);
	y=3;

	for(i=1; i<=21; i++)
	{
		gotoxy(11,y);
		y++;
		putch(179);
	}

	gotoxy(11,2);
	putch(218);

}


// Main Window Function

void mainwindow()
{
	clrscr();
	box();

	gotoxy(26,4);cout<<"INSTITUTE MANAGEMENT SYSTEM ";
	gotoxy(26,5);cout<<"===========================";
	gotoxy(26,8);cout<<"Choose Your Option .......";
	gotoxy(26,10);cout<<"1. Faculty Informaton ";
	gotoxy(26,12);cout<<"2. Students Information ";
	gotoxy(26,14);cout<<"3. Print Any Information ";
	gotoxy(26,16);cout<<"Press 0 To Exit
";
	gotoxy(26,18);cout<<"Option -----> ";

	cin>>option;

	switch(option)
	{
		case 1 : faculty();
			break;

			case 2 : student();
				break;

				case 3 : prin();
					break;

					default : closeprog();
						break;
	};
}


// FUNCTION FOR SHOWING A MAIN WINDOW OF FACULTY INFORMATION

void faculty()
{
	clrscr();
	box();

	gotoxy(26,4);cout<<"INSTITUTE MANAGEMENT SYSTEM ";
	gotoxy(26,5);cout<<"===========================";
	gotoxy(26,8);cout<<"Choose You Option........";
	gotoxy(26,10);cout<<"1. Add A New Record ";
	gotoxy(26,12);cout<<"2. See All Faculty's ";
	gotoxy(26,14);cout<<"3. Full Access To Any Faculty Information ";
	gotoxy(26,16);cout<<"4. Modify Any Information ";
	gotoxy(26,18);cout<<"5. Delete Any Information ";
	gotoxy(26,20);cout<<"Press 0 To Exit....... ";
	gotoxy(26,22);cout<<"Option------> ";

	cin>>option;

	switch(option)
	{
		case 1 : enterdata();
			break;

			case 2 : seeyearfaculty();
				break;

				case 3 : fullaccessfaculty();
					break;

					case 4 : modifyfaculty();
						break;

						case 5 : deletefaculty();
							break;

							default : closeprog();
								break;
	};
}


// FUNCTION TO INSERT A DATA OF FACULTY

void enterdata()
{
	clrscr();

	cout<<"

		Enter The Year Which you Want To Add The Data ";
	cout<<"
		============================================= ";
	gets(year);

	mkdir("data");
	chdir("data");
	mkdir("faculty");
	chdir("faculty");
	mkdir(year);
	chdir(year);

	cout<<"
	    Enter The Faculty Name : ";
	gets(name);

	mkdir(name);
	chdir(name);

	personaldetial();
	chdir("\");
	mainwindow();
}


// FUNCTION TO ENTER A PERSONAL DETAILS OF A FACULTY

void personaldetial()
{
	cout<<"

		      Enter The Personal Details ";
	cout<<"
		      ========================== ";
	cout<<"

	Enter The The Name Of A Person : ";
	gets(name);

	mkdir(name);
	chdir(name);

	strcpy(newfile,"p");
	strcat(newfile,name);
	strcat(newfile,".txt");
	ofstream fout(newfile);

	if(!fout)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	fout<<"NAME : "<<name;

	cout<<"
	Enter The Address : ";
	gets(temp);

	fout<<"
ADDRESS :"<<temp;

	cout<<"
	Enter Contact No. : ";
	gets(temp);

	fout<<"
CONTACT No. :"<<temp;

	fout.close();
	encrypt(newfile);
	admindetails(name);
}


// FUNCTION TO ENTER A ADMINISTRATION DETAILS OF A FACULTY


void admindetails(char *name)
{
	clrscr();

	cout<<"

		      Enter The Administration Detials ";
	cout<<"
		      ================================ ";

	strcpy(newfile,"a");
	strcat(newfile,name);
	strcat(newfile,".txt");

	ofstream foutt(newfile);

	if(!foutt)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	foutt<<"NAME : "<<name;

	cout<<"

	Enter Educational Qualification :";
	gets(temp);

	foutt<<"
EDUCATIONAL QUALIFICATIONS :"<<temp;

	cout<<"
	          Enter The Name Of The Subjects Taught ";
	cout<<"
	          ===================================== ";

	foutt<<"
SUBJECTS TAUGHT :";

	cout<<"

	Subject(s) Taught to First Year: ";
	gets(temp);

	foutt<<"

	 First Year :"<<temp;

	cout<<"
	Type Of Subject (Theory / Practical) :";
	gets(temp);

	foutt<<"
	 Type of Subject :"<<temp;

	cout<<"

	Subject(s) Taught to Second Year: ";
	gets(temp);

	foutt<<"

	 Second Year :"<<temp;

	cout<<"
	Type Of Subject (Theory / Practical) :";
	gets(temp);

	foutt<<"
	 Type of Subject :"<<temp;

	cout<<"

	Subject(s) Taught to Third Year: ";
	gets(temp);

	foutt<<"

	 Third Year :"<<temp;

	cout<<"
	Type Of Subject (Theory / Practical) :";
	gets(temp);

	foutt<<"
	 Type of Subject :"<<temp;

	cout<<"
	Enter Type of Faculty (Permanent / Visiting)";
	gets(temp);

	foutt<<"
TYPE OF FACULTY :"<<temp;

	foutt.close();
	encrypt(newfile);

}


// FUNCTION TO ENCRYPT A DATA

void encrypt(char *newfile)
{
	ofstream fout("temp.txt");
	ifstream fin(newfile);

	while(fin)
	{
		fin.get(ch);
		if(ch==EOF)break;
		mod=~ch;
		fout<<mod;
	}

	remove(newfile);
	rename("temp.txt",newfile);
}


// FUNCTION TO SEE THE TOTAL FACULTY OF A YEAR

void seeyearfaculty()
{
	clrscr();

	cout<<"

	Enter The Year Of Which You Want To See The Faculties

";
	gets(year);

	chdir("data");
	chdir("faculty");
	chdir(year);

	cout<<"

	Enter The Faculty Name
	";
	gets(name);

	chdir(name);

	clrscr();

	cout<<"

";
	cout<<"

	  These Are The Teachers Of A Stream

";

	system("dir /b /ad /w");
	getch();
	chdir("\");
	mainwindow();
}


// FUNCTION TO GET FULL ACCESS TO A PARTICULAR DATA

void fullaccessfaculty()
{
	clrscr();

	chdir("data");
	chdir("faculty");

	cout<<"

	Enter The Year Of The Faculty : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of The Faculty : ";
	gets(name);

	chdir(name);

	cout<<"

	Enter The Name Of A Person : ";
	gets(name);

	chdir(name);

	cout<<"
	What You Want To See Personal Information Or Admin
Information
";
	cout<<"
	1. Personal ";
	cout<<"
	2. Adminstration ";
	cout<<"

	 Option------> ";

	cin>>option;

	clrscr();

	cout<<"


";

	if(option==1)
	{
		strcpy(newfile,"p");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	if(option==2)
	{
		strcpy(newfile,"a");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	chdir("\");
	mainwindow();
}


// FUNTION TO MODIFY A FACULTY DATA

void modifyfaculty()
{
	clrscr();

	chdir("data");
	chdir("faculty");

	cout<<"

	Enter The Year : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of A Faculty : ";
	gets(name);

	chdir(name);

	cout<<"

	Enter The Name Of A Person : ";
	gets(name);

	status=rmdir(name);

	if(status==0)
	{
		personaldetial();
	}

	else
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	chdir("\");
	mainwindow();
}

// FUNTION FOR DELETING A FACULTY DATA

void deletefaculty()
{
	clrscr();

	chdir("data");
	chdir("faculty");

	cout<<"

	Enter The Year : ";
	gets(year);

	chdir(year);

	cout<<"


	Enter The Name Of A Faculty : ";
	gets(name);

	chdir(name);

	cout<<"

	Enter The Name Of A Person : ";
	gets(name);

	cout<<"

		Are You Sure You Want To Remove It (y/n) : ";
	cin>>ch;

	if(ch=='y')
	{
		status=rmdir(name);

		if(status==0)
		{
			cout<<"

		Record Have Been Removed Succesfully ";
			cout<<"
		Press Any Key To Return To Main Menu ";
			getch();
			chdir("\");
			mainwindow();
		}

		else
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}
	}

	else
	{
		chdir("\");
		mainwindow();
	}
}


// FUNCTION FOR PRINTING THE DATA

void prin()
{
	clrscr();

	cout<<"
Enter The Option ";
	cout<<"
1. Faculty ";
	cout<<"
2. Student ";
	cout<<"

 Option------> ";
	cin>>option;

	chdir("data");

	if(option==1)
	{
		chdir("faculty");

		cout<<"
Enter The Year ";
		gets(year);

		chdir(year);

		cout<<"
Enter The Name Of Faculty ";
		gets(name);

		chdir(name);

		cout<<"
Want Take A Print Document Of Personal Or Admin Details ";
		cout<<"
1. Personal ";
		cout<<"
2. Adminstration ";
		cout<<"

 Option------> ";

		cin>>option;

		if(option==1)
		{
			strcpy(newfile,"p");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fout)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}

		if(option==2)
		{
			strcpy(newfile,"a");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}
	}

	if(option==2)
	{
		chdir("student");

		cout<<"
Enter The Year ";
		gets(year);

		chdir(year);

		cout<<"
Enter The Name Of Student ";
		gets(name);

		chdir(name);

		cout<<"
Want Take A Print Document Of Personal Or Admin Details ";
		cout<<"
1. Personal ";
		cout<<"
2. Academic ";
		cout<<"

 Option------> ";

		cin>>option;

		if(option==1)
		{
			strcpy(newfile,"p");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fout)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}

		if(option==2)
		{
			strcpy(newfile,"a");
			strcat(newfile,name);
			strcat(newfile,".txt");

			ifstream fin;
			fin.open(newfile);

			if(!fin)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			ofstream fout;
			fout.open("PRN");

			if(!fout)
			{
				clrscr();
				perror("




		Cannot Open The File ");
				cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
				getch();
				chdir("\");
				mainwindow();
			}

			while(fin.get(ch)!=0)
			{
				mod=~ch;
				fout.put(mod);
			}

			fout.close();
			fin.close();
		}
	}

	chdir("\");
	mainwindow();
}


// FUNCTION FOR SHOWING A MAIN WINDOW OF STUDENT INFORMATION

void student()
{
	clrscr();
	box();

	gotoxy(26,4);cout<<"INSTITUTE MANAGEMENT SYSTEM ";
	gotoxy(26,5);cout<<"===========================";
	gotoxy(26,8);cout<<"Choose You Option........";
	gotoxy(26,10);cout<<"1. Add A New Student Record ";
	gotoxy(26,12);cout<<"2. See All Students ";
	gotoxy(26,14);cout<<"3. Full Access To Any Student Information ";
	gotoxy(26,16);cout<<"4. Modify Any Information ";
	gotoxy(26,18);cout<<"5. Delete Any Information ";
	gotoxy(26,20);cout<<"Press 0 To Exit....... ";
	gotoxy(26,22);cout<<"Option------> ";

	cin>>option;

	switch(option)
	{
		case 1 : enterdatast();
			break;

			case 2 : seetotalst();
				break;

				case 3 : fullaccessst();
					break;

					case 4 : modifyst();
						break;

						case 5 : deletest();
							break;

							default : closeprog();
								break;
	};
}


// FUNCTION TO ENTER A STUDENT DATA

void enterdatast()
{
	clrscr();

	cout<<"

		Enter The Year Which you Want To Add The Data ";
	cout<<"
		=============================================== ";
	gets(year);

	mkdir("data");
	chdir("data");
	mkdir("student");
	chdir("student");
	mkdir(year);
	chdir(year);

	personalst();
	chdir("\");
	mainwindow();
}


// FUNCTION TO ENTER A PERSONAL DETAILS OF A STUDENT

void personalst()
{
	cout<<"

		    Enter The Personal Details ";
	cout<<"
		    ========================== ";

	cout<<"

	Enter The The Name Of The Student : ";
	gets(name);

	mkdir(name);
	chdir(name);

	strcpy(newfile,"p");
	strcat(newfile,name);
	strcat(newfile,".txt");
	ofstream fout(newfile);

	if(!fout)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	fout<<" NAME : "<<name;

	cout<<"
	Fathers Name : ";
	gets(temp);
	fout<<"
 Fathers Name : "<<temp;

    cout<<"
	Date Of Birth : ";
	gets(temp);
	fout<<"
 Date Of Birth : "<<temp;

    cout<<"
	Contact Number : ";
	gets(temp);
	fout<<"
 Contact Number : "<<temp;

    cout<<"
	Address : ";
	gets(temp);
	fout<<"
 ADDRESS :"<<temp;

    cout<<"
	Course Name : ";
	gets(temp);
	fout<<"
 Course Name : "<<temp;

	fout.close();
	encrypt(newfile);
	academic(name);
}


// FUNCTION TO ENTER A ACADEMIC DETAILS OF A STUDENT

void academic(char *name)
{
	clrscr();

	cout<<"

		    Enter The Academic Detials ";
	cout<<"
		    ========================== ";

	strcpy(newfile,"a");
	strcat(newfile,name);
	strcat(newfile,".txt");

	ofstream foutt(newfile);

	if(!foutt)
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	foutt<<" NAME : "<<name;

	cout<<"
	Type Of Course (Semster/Annual) : ";
	gets(temp);
	foutt<<"
 Type Of Course (Semester/Annual) : "<<temp;

    cout<<"
	Year Of Admission : ";
	gets(temp);
	foutt<<"
 Year Of Admission : "<<temp;

    cout<<"
	Admission Number : ";
	gets(temp);
	foutt<<"
 Admission Number : "<<temp;

    cout<<"
	Percentage In Intermediate : ";
	gets(temp);
	foutt<<"
 Percentage In Intermediate : "<<temp;

    cout<<"
		Percentage In College :";
    foutt<<"
	 Percentage In College : ";

    cout<<"
	First Year : ";
	gets(temp);
	foutt<<"
 First Year :"<<temp;

    cout<<"
	Second Year : ";
	gets(temp);
	foutt<<"
 Second Year :"<<temp;

    cout<<"
	Third Year : ";
	gets(temp);
	foutt<<"
 third Year :"<<temp;

	foutt.close();
	encrypt(newfile);
}


// FUNCTION TO SEE A TOTAL STUDENTS OF A PARTICULAR YEAR

void seetotalst()
{
	clrscr();

	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year Of Which You Want To See The Students
";
	gets(year);

	chdir(year);

	cout<<"

	  These Are The Students

";

	system("dir /b /ad /w");

	getch();
	chdir("\");
	mainwindow();
}


// FUNCTION TO SEE ALL DETAILS OF A STUDENT

void fullaccessst()
{
	clrscr();

	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year Of The Student : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of The Student : ";
	gets(name);

	chdir(name);

	cout<<"

	What You Want To See Personal Information Or Academic
Information ";
	cout<<"
	1. Personal ";
	cout<<"
	2. Academic ";
	cout<<"

	 Option------> ";

	cin>>option;

	clrscr();

	cout<<"


";

	if(option==1)
	{
		strcpy(newfile,"p");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	if(option==2)
	{
		strcpy(newfile,"a");
		strcat(newfile,name);
		strcat(newfile,".txt");

		ifstream fin(newfile);

		if(!fin)
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}

		while(fin.get(ch)!=0)
		{
			mod=~ch;
			cout<<mod;
		}

		getch();
		fin.close();
	}

	chdir("\");
	mainwindow();
}


// FUNCTION TO MODIFY DETAILS OF A STUDENT

void modifyst()
{
	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year Of You Want To Change The Information : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of A Student : ";
	gets(name);

	status=rmdir(name);

	if(status==0)
	{
		personalst();
	}

	else
	{
		clrscr();
		perror("




		Cannot Open The File ");
		cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
		getch();
		chdir("\");
		mainwindow();
	}

	chdir("\");
	mainwindow();
}


// FUNCTION TO DELETE A STUDENT RECORD

void deletest()
{
	clrscr();

	chdir("data");
	chdir("student");

	cout<<"

	Enter The Year : ";
	gets(year);

	chdir(year);

	cout<<"

	Enter The Name Of A Student : ";
	gets(name);

	cout<<"

		Are You Sure You Want To Remove It (y/n) : ";
	cin>>ch;

	if(ch=='y')
	{
		status=rmdir(name);

		if(status==0)
		{
			cout<<"

		Record Have Been Removed Succesfully ";
			cout<<"
		Press Any Key To Return To Main Menu ";
			getch();
			chdir("\");
			mainwindow();
		}

		else
		{
			clrscr();
			perror("




		Cannot Open The File ");
			cout<<"

		PRESS ANY KEY TO Return To Main Menu  ";
			getch();
			chdir("\");
			mainwindow();
		}
	}

	else
	{
		chdir("\");
		mainwindow();
	}
}


// FUNCTION TO CLOSE A PROGRAM

void closeprog()
{
	grap();
	setcolor(6);

	for(i=0;i<=220;i++)
	{
		rectangle(0+i,0+i,640-i,480-i);
		delay(15);
	}

	for(i=0;i<=220;i++)
	{
		rectangle(100+i,100,540-i,380);
		delay(10);
	}

	quit();
	closegraph();
	exit(0);
}


void quit()
{
	int a,b,c;
	setcolor(0);

	for(a=1,b=getmaxy()-1,c=200;a<=getmaxy()/2;a++,b--,c--)
	{
		line(1,a,getmaxx()-1,a);
		line(1,b,getmaxx()-1,b);
		sound(10*(c+200));
		delay(1);
	}

	delay(300);
	nosound();
	setcolor(4);

	typeme(xy(2),xy(20),"DEVELOPED BY: VIVEK AND SAURABH JAIN",30);
	delay(1000);
	setcolor(0);

	typeme(xy(2),xy(20),"  DEVELOPED BY : SAURABH JAIN ",30);
	delay(100);
	setcolor(4);

	typeme(xy(2),xy(20),"FOR YOUR COMMENTS AND YOUR SUGGESTIONS",30);
	delay(500);
	setcolor(4);

	typeme(xy(2),xy(26),"EMAIL ME AT urloginid@yahoo.co.in",30);
	delay(2000);
}


void typeme(int left,int top,const char *word,int interval)
{
	char code[2];
	int length=strlen(word);
	for(int i=0;i<=length;i++)
	{
		code[0]=word[i];
		code[1]='
