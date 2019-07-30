#include<iostream.h>
#include<alloc.h>
#include<fstream.h>
#include<graphics.h>
#include<process.h>
#include<io.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
class telephone
{
 char name[25];
 char address[40];
 char phoneno[15];
 public:
  telephone(){ }
  telephone(char nam[25], char add[40], char phone[15])
  {
   strcpy(name,nam);
   strcpy(address,add);
   strcpy(phoneno,phone);
  }
  void init();
  void button(int x1,int y1,int x2,int y2,char str[]);
  int press(int,int,int,int);
  int unpress(int,int,int,int);
  int mouseini();
  int showmp();
  int hidemp();
  int getmp(int *button,int *x,int *y);
  int setmp();
  int click(int x1,int y1,int x2,int y2,char str[]);
  int screen();
  int search1(char *name);
  void login();
  void search();
  void delete1();
  void insert();
  void update();
  void bar1();
  void exit1();
  void display()
  {
   textattr(7);
   textbackground(0);
   gotoxy(0,0);
   cout<<"
 Name          : "<<name;
   cout<<"
 Address       : "<<address;
   cout<<"
 Phone Number  : "<<phoneno;
  }
  int compare(char nam1[25])
  {
   if(strcmp(nam1,name)==0)
    return 1;
   else
    return 0;
  }
  int compare1(char num[25])
  {
   if(strcmp(num,phoneno)==0)
    return 1;
   else
    return 0;
  }
};
void telephone::login()
{
 setcolor(13);
 line (170,207,470,207);
 line (170,232,470,232);
 line (170,207,170,232);
 line (470,232,470,207);
 int s=30,w;
 gotoxy(33,18);
 cout<<"LOADING ";
 for (int x1=171,x2=171,y1=208,y2=231,y=1,S=0;x1<470;x1++,x2++,y++,S++)
 {
  setcolor(1);
  line (x1,y1,x2,y2);
  w=(x1-169)/3;
  gotoxy(40,15); cout<<w<<"%";
  if (x2>170) s=15;
  if (x2>270) s=10;
  if (w==89) delay(400);
  else
   delay(s);
  if((w/10)%2==0)
  {
	gotoxy(42+w/10,18);
	cout<<". ";
  }
 }
 delay(800);
}
void telephone::insert()
{
 telephone tel1;
 fstream file;
 file.open("Phone1.txt",ios::app);
 if(!file)
 file.open("Phone1.txt",ios::out);
 tel1.init();
 if(strlen(tel1.name)==0)
 goto a;
 file.write((char *) &tel1, sizeof(tel1));
 setcolor(7);
 outtextxy(250,250,"Inserting Record.....");
 file.close();
 delay(3000);
 a:
}
void telephone::init()
{
 textattr(7);
 textbackground(0);
 a:
 cout<<"
Enter Name        : "; cin.getline(name,25);
 if(strlen(name)==0)
 goto b;
 if(search1(name)==0)
 {
	cout<<"
"<<name<<" already exists
";
	cout<<"
Enter another name or add suffix(like 1,2,3..)";
	goto a;
 }
 cout<<"
Enter Address     : "; cin.getline(address,40);
 cout<<"
Enter Phone Number: "; cin.getline(phoneno,15);
 b:
}
void telephone::delete1()
{
 telephone tel1;
 fstream file ;
 fstream temp ;
 char nam[25],nam1[25];
 strcpy(nam1,"");
 textattr(7);
 textbackground(0);
 cout<<"
Enter the Name to be deleted: ";
 cin.getline(nam,25);
 if(strlen(nam)==0)
 goto a;
 file.open("Phone.txt", ios::in) ;
 temp.open("temp.txt", ios::out) ;
 file.seekg(0,ios::beg) ;
 while (file.read((char *) &tel1, sizeof(telephone)))
 {
  if(!tel1.compare(nam))
   temp.write((char *) &tel1, sizeof(telephone)) ;
  else
   strcpy(nam1,nam);
 }
 file.close() ;
 temp.close() ;
 setcolor(7);
 if(strlen(nam1)!=0)
 {
  file.open("Phone.txt", ios::out) ;
  temp.open("temp.txt", ios::in) ;
  temp.seekg(0,ios::beg) ;
  while (temp.read((char *) &tel1, sizeof(telephone)))
  {
   file.write((char *) &tel1, sizeof(telephone)) ;
  }
  file.close() ;
  temp.close() ;
  outtextxy(250,250,"Deleting Record.....");
 }
 else
  outtextxy(250,250,"Record not found");
  delay(3000);
 a:
}
void telephone::update()
{
 telephone tel1;
 fstream file ;
 fstream temp ;
 char nam[25],nam1[25];
 strcpy(nam1,"");
 textattr(7);
 textbackground(0);
 cout<<"
Enter the Name to be updated: ";
 cin.getline(nam,25);
 if(strlen(nam)==0)
 goto a;
 file.open("Phone.txt", ios::in) ;
 temp.open("temp.txt", ios::out) ;
 file.seekg(0,ios::beg) ;
 while (file.read((char *) &tel1, sizeof(telephone)))
 {
  if(!tel1.compare(nam))
   temp.write((char *) &tel1, sizeof(telephone)) ;
  else
   strcpy(nam1,nam);
 }
 file.close() ;
 temp.close() ;
 setcolor(7);
 if(strlen(nam1)!=0)
 {
  file.open("Phone.txt", ios::out) ;
  temp.open("temp.txt", ios::in) ;
  temp.seekg(0,ios::beg) ;
  while (temp.read((char *) &tel1, sizeof(telephone)))
  {
   file.write((char *) &tel1, sizeof(telephone)) ;
  }
  file.close() ;
  temp.close() ;
  char nam[25],add[40],ph[15];
  file.open("Phone.txt",ios::app);
  textattr(7);
  textbackground(0);
  cout<<"
Enter Name        : ";
  cin.getline(nam,25);
  cout<<"
Enter Address     : "; cin.getline(add,40);
  cout<<"
Enter Phone Number: "; cin.getline(ph,15);
  tel1=telephone(nam,add,ph);
  file.write((char *) &tel1, sizeof(tel1));
  file.close();
  outtextxy(250,250,"Updating Record.....");
 }
 else
  outtextxy(250,250,"Record not found");
  delay(3000);
  a:
}

int telephone::search1(char *nam)
{
 fstream file;
 telephone tel1;
 int i=1;
 file.open("Phone.txt",ios::in);
 textattr(7);
 textbackground(0);
 file.seekg(0,ios::beg);
 while(file.read((char *) &tel1, sizeof(telephone)))
 {
  if(tel1.compare(nam))
  {
   tel1.display();
   i=0;
   break ;
  }
 }
 file.close() ;
 if(i==1)
	return 1;
 else
	return 0;
}
void telephone::bar1()
{
    void   *buffer,*b;
    unsigned int size;

    cout<<"




























";

    line(230,230,370,230);
    line(230,250,370,250);

    line(226,235,226,245);

    line(226,235,230,230);
    line(226,245,230,250);

    line(374,235,374,245);
    line(374,235,370,230);
    line(374,245,370,250);

    int x=232,y=236,x1=236,y1=244;
    for(int i=1;i<5;i++)
    {
	setfillstyle(1,RED);
	bar(x,y,x1,y1);
	x=x1+2;
	x1=x1+6;
    }
    size=imagesize(232,236,256,244);
    buffer=malloc(size);
    getimage(232,236,256,244,buffer);
    x=232;
    int m=0;
    while(m!=5)
    {
	textcolor(random(20));
	outtextxy(276,265,"Searching");
	putimage(x,236,buffer,XOR_PUT);
	x=x+2;
	if(x>=350)
	{
		m++;
		x=232;
	}
	putimage(x,236,buffer,XOR_PUT);
	delay(20);
    }
    setfillstyle(1,BLACK);
    bar(0,0,400,350);
}
void telephone::search()
{
 fstream file;
 telephone tel1;
 int i=1,l,j;
 char c;
 char nam[25],num[15],nam1[25];
 file.open("Phone.txt",ios::in);
 textattr(7);
 textbackground(0);
 cout<<"
				SEARCH
";
 cout<<"
				1.By Name
";
 cout<<"
				2.By Number
";
 cout<<"

Enter your choice ... ";
 cin>>c;
 if(c==49||c==50)
 {
	 if(c==49)
	 {
		 cout<<"
Enter name to be Searched: ";
		 cin>>nam;
		 file.seekg(0,ios::beg);
		 bar1();
		 while(file.read((char *) &tel1, sizeof(telephone)))
		 {
		  for(j=0;j<strlen(nam);j++)
		  nam1[j]=tel1.name[j];
		  nam1[j]='
