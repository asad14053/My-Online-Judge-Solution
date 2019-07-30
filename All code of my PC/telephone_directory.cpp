#include<iostream.h>
#include<fstream.h>
#include<graphics.h>
#include<process.h>
#include<io.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

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
  void login();
  void search();
  void delete1();
  void insert();
  void update();
  void display()
  {
   cout<<"

Name        : "<<name;
   cout<<"
Address     : "<<address;
   cout<<"
Phone Number: "<<phoneno;
  }
  int compare(char nam1[25])
  {
   if(strcmp(nam1,name)==0)
    return 1;
   else
    return 0;
  }
};
void telephone::login()
{
 setcolor(15);
 line (320-150,320-13,320+150,320-13);
 line (320-150,320+12,320+150,320+12);
 line (320-150,320-13,320-150,320+12);
 line (320+150,320+12,320+150,320-13);
 int s=30,w;
 gotoxy(20,23);
 cout<<"LOADING . . .";
 for (int x1=171,x2=171,y1=308,y2=331,y=1,S=0;x1<470;x1++,x2++,y++,S++)
 {
  setcolor(1);
  line (x1,y1,x2,y2);
  w=(x1-169)/3;
  for (int i=34; i<=78; i++)
  {
   gotoxy(i,23) ;
   cout <<" " ;
  }
  gotoxy(34,23); cout<<w<<"%";
  if (x2>270) s=45; if (x2>370) s=10;
  if (x2==320) delay(999); else
   delay(s);
 }
 delay(800);
 for (int i=27; i<=78; i++)
 {
  gotoxy(i,23) ;
  cout <<" " ;
 }
}

void telephone::insert()
{
 telephone tel1;
 fstream file;
 file.open("Phone.txt",ios::app);
 tel1.init();
 file.write((char *) &tel1, sizeof(tel1));
 setcolor(7);
 outtextxy(250,250,"Inserting Record.....");
 file.close();
 delay(3000);
}
void telephone::init()
{
 cout<<"
Enter Name        : "; cin.getline(name,25);
 cout<<"
Enter Address     : "; cin.getline(address,40);
 cout<<"
Enter Phone Number: "; cin.getline(phoneno,15);
}

void telephone::delete1()
{
 telephone tel1;
 fstream file ;
 char nam[25],nam1[25];
 strcpy(nam1,"");
 cout<<"Enter the Name to be deleted: ";
 cin>>nam;
 file.open("Phone.txt", ios::in) ;
 fstream temp ;
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
}

void telephone::update()
{
 telephone tel1;
 fstream file ;
 char nam[25],nam1[25];
 strcpy(nam1,"");
 cout<<"Enter the Name to be updated: ";
 cin>>nam;
 file.open("Phone.txt", ios::in) ;
 fstream temp ;
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
  cout<<"
Enter Name        : ";
cin.getline(nam,25);cin.getline(nam,25);
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
}

void telephone::search()
{
 fstream file;
 telephone tel1;
 int i=1;
 char nam[25];
 file.open("Phone.txt",ios::in);
 cout<<"Enter name to be Searched: ";
 cin>>nam;
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
 if(i)
 {
  setcolor(7);
  outtextxy(250,250,"Record not found");
 }
 getch();
}

void telephone:: button(int x1,int y1,int x2,int y2,char str[])
{
 int xc,yc,i=0,l=0;
 while(i<strlen(str))
 {
  l+=4;
  i++;
 }
 xc=(x2-x1)/2+x1-l;
 yc=(y2-y1)/2+y1;
 unpress(x1,y1,x2,y2);
 settextstyle(0,0,0);
 setcolor(11);
 outtextxy(xc,yc,str);
}

int telephone:: unpress(int x1,int y1,int x2,int y2)
{
 setlinestyle(0,1,1);
 setfillstyle(1,1);
 bar(x1,y1,x2,y2);
 setcolor(WHITE);
 line(x1,y1,x2,y1);
 line(x1,y1,x1,y2);
 setcolor(0);
 line(x1,y2,x2,y2);
 line(x2,y1,x2,y2);
 return 0;
}

int telephone:: press(int x1,int y1,int x2,int y2)
{
 setlinestyle(0,1,1);
 setfillstyle(1,1);
 bar(x1,y1,x2,y2);
 setcolor(0);
 line(x1,y1,x2,y1);
 line(x1,y1,x1,y2);
 setcolor(WHITE);
 line(x1,y2,x2,y2);
 line(x2,y1,x2,y2);
 return 0;
}

int telephone:: mouseini()
{
 union REGS i,o;
 i.x.ax=0;
 int86(0x33,&i,&o);
 return(o.x.ax);
}
int telephone:: showmp()
{
 union REGS i,o;
 i.x.ax=1;
 int86(0x33,&i,&o);
 return 0;
}

int telephone:: hidemp()
{
 union REGS i,o;
 i.x.ax=2;
 int86(0x33,&i,&o);
 return 0;
}

int telephone:: getmp(int *button,int *x,int *y)
{
 union REGS i,o;
 i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
 return 0;
}

int telephone:: setmp()
{
 union REGS i,o;
 i.x.ax=4;
 int mx=getmaxx(),my=getmaxy();
 i.x.cx=(3*mx/4)+20;
 i.x.dx=(3*my/4)+20;
 int86(0x33,&i,&o);
 return 0;
}

int telephone:: click(int x1,int y1,int x2,int y2,char str[])
{
 int button,x,y;
 int xc,yc,i=0,l=0;
 while(i<strlen(str))
 {
  l+=4;
  i++;
 }
 xc=(x2-x1)/2+x1-l;
 yc=(y2-y1)/2+y1;
 getmp(&button,&x,&y);
 if( (x>x1 && x<x2) && (y>y1 && y<y2) && button==1)
 {
  hidemp();
  press(x1,y1,x2,y2);
  setcolor(11);
  settextstyle(0,0,0);
  outtextxy(xc,yc,str);
  showmp();
  while((button==1))
   getmp(&button,&x,&y);
  hidemp();
  unpress(x1,y1,x2,y2);
  showmp();
  setcolor(11);
  settextstyle(0,0,0);
  outtextxy(xc,yc,str);
  for(i=50;i<500;i=i+50)
  {
   delay(10);
   sound(i+200);
  }
  showmp();
  nosound();
  setcolor(11);
  settextstyle(0,0,0);
  outtextxy(xc,yc,str);
  return 0;
 }
 else return 1;
}

int telephone:: screen()
{
 settextstyle(0,1,6);
 setcolor(11);
 outtextxy(100,30,"TELEPHONE");
 outtextxy(600,30,"DIRECTORY");
 setmp();
 button(250,100,400,150,"Insert");
 button(250,150,400,200,"Delete");
 button(250,200,400,250,"Update");
 button(250,250,400,300,"Search");
 button(250,300,400,350,"Exit");
 while(1)
 {
  if(click(250,100,400,150,"Insert")==0)
  {
   cleardevice();
   insert();
   return 0;
  }
  if(click(250,150,400,200,"Delete")==0)
  {
   cleardevice();
   delete1();
   return 0;
  }
  if(click(250,200,400,250,"Update")==0)
  {
   cleardevice();
   update();
   return 0;
  }
  if(click(250,250,400,300,"Search")==0)
  {
   cleardevice();
   search();
   return 0;
  }
  if(click(250,300,400,350,"Exit")==0)
   exit(0);
 }
}

void main()
{
 char user[25]="User Name",*pass,*pass1="user";
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"");
 while(1)
 {
  cleardevice();
  settextstyle(0,0,1);
  outtextxy(250,250,"User Name:");
  outtextxy(250,265,"Password :");
  outtextxy(335,250,user);
  pass=getpass("");
  if(strcmp(pass,pass1)==0)
  {
   cleardevice();
   telephone tel;
   char op[8],cp[8],np[8];
   tel.login();
   while(1)
   {
    cleardevice();
    tel.mouseini();
    tel.showmp();
    tel.screen();
   }
  }
  else
  {
   cleardevice();
   settextstyle(0,0,2);
   outtextxy(250,250,"Illegal User....");
   delay(3000);
  }
 }
}

