#include<fstream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
void res_menu();
void help();
void colyb()	{textcolor(YELLOW);textbackground(BLUE);}
void coldes(int a,int b)	{textcolor(a);textbackground(b);}
void s(int i,int j)
	{
	for(int a=i;a>0;a-=j)sound (a);
	}
void saund(int j)
	{
	j=0;
	for(int i=20;i<20000;i+=1000)
	{sound(i);delay(j);nosound();}
	}
class address{      protected :
		    char hno[10],city[30],post[30],colony[30],pin[10];
		    public :
	    void address_inp()
		    {
		    cout<<"
              House No.       :            ";gets(hno);
		    cout<<"
              Colony          :
";gets(colony);
		    cout<<"
              Post            :            ";gets(post);
		    cout<<"
	      City            :            ";gets(city);
		    cout<<"
              Pin Code No.    :            ";gets(pin);
		    }
	    void address_out()
		 {
		   cout<< hno<<" , "<<colony<<" , "<<post<<" ,

"
		   <<city<<" - "<<pin;
		 }
	    };

class p_det
{
		protected :
		address add;
		float age;
		char name[40];
		char sex;
		public:

		void p_det_inp()
		{   colyb();
		    cout<<"
              Enter Name      :            ";gets(name);
		    cout<<"
              Enter address         ";
		    add.address_inp();
		    cout<<"
              Enter age (Years.Months)  :
";cin>>age;
		    cout<<"
              Enter sex group (M / F)   :
";cin>>sex;

		}
		void p_det_out()
		{   colyb();
		    cout<<"
    PERSONAL DETAILS";
		    cout<<"
             Name                :
";puts(name);
		    cout<<"
             Adress              :            ";
		    add.address_out();
		    cout<<"
             Age (Years.Months)  :         ";cout<<age;
		    cout<<"
             Sex group (M/F)     :         ";cout<<sex;
		    delay(500);
		    }

		void assign_name(p_det p,char str[]);
		};
		void p_det :: assign_name(p_det p,char str[])
		{
		strcpy(str,p.name);
		}
class dat{

		int dd,mm,yy;
				public :
		   void dat_inp()
			  {
				h:
				cout<<"	      date  :
		dd  :  ";cin>>dd;
				cout<<"		mm  :  ";cin>>mm;
				if((dd>31) || (mm>12))
				 {
				 cout<<"the date is invalid";
				 goto h;
				  }

				 cout<<"		yy  :  ";cin>>yy;


			  }
		    void dat_out()
			 {
			    if( (dd>0 && dd<31) && (mm>0 && mm <13) )
				{
				cout<<"
             DATE                 :            "
				<<dd<<" # "<<mm<<" # "<<yy;

				delay(500);
				}
			 }
	  };
class res :public dat
	  {
		char fcode[5];char to[15],from[15],via[15];
		float fare;
		public :
		p_det p;
	  void dest_out(){cout<<"
		from  :   ";puts(from);cout<<"
		via
:
";puts(via);cout<<"
		to  :  ";puts(to);}
	  void res_inp()
		{ textcolor(RED); clrscr();
		res_menu();
		cout<<"
             		    RESERVATION FORM";
		cout<<"
                          ------------------";
		cout<<"
	Enter flight code : ";gets(fcode);
		if( strcmp(fcode,"0871")==0 )
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"DELHI");strcpy(via,"--");
		   fare=100;
		   }
		else if(strcmp(fcode,"0037")==0)
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"CHENNAI");strcpy(via,"DELHI");
		   fare=700;
		   }
		else if(strcmp(fcode,"1070")==0)
		   {
		   strcpy(from,"DELHI");strcpy(to,"COCHIN");strcpy(via,"--");
		   fare=730;
		   }
		else if(strcmp(fcode,"1007")==0)
		   {
		   strcpy(from,"DELHI");strcpy(to,"BANGALORE");strcpy(via,"--");
		   fare=800;
		   }
		else if(strcmp(fcode,"1017")==0)
		   {
		   strcpy(from,"LUCKNOW");strcpy(to,"BANGALORE");strcpy(via,"DELHI");
		   fare=850;
		   }
		else if(strcmp(fcode,"7001")==0 )
		   {
		   strcpy(from,"ALLAHBAD");strcpy(to,"DELHI");strcpy(via,"--");
		   fare=80;
		   }
		else
		{ coldes(1+128,0);clrscr();
		cout<<"



		     ERROR";saund(30);delay(1000);
		strcpy(from,"ERROR");strcpy(to,"ERROR");strcpy(via,"ERROR");exit(0);
		}
		p.p_det_inp();
		dat_inp();
		getch();
		clrscr();
		}
	   void res_out()
		{
		cout<<"
        		  RESERVATION ENTRIES";
		cout<<"
                         ---------------------";
		cout<<"
	Flight Code :  ";puts(fcode);
		p.p_det_out();
		dest_out();
		dat_out();
		}
		friend void assign_code(res p,char str[]);
	   };
		void assign_code(res p,char str[])
		{
		strcpy(str,p.fcode);
		}


void menu()
{
coldes(13,9);clrscr();
clrscr();
cout<<"



                                    MENU";
cout<<"
_________________________________________________________________
_______________";
cout<<"
                                 1 . Reservation";
cout<<"
                                 2 . Querries";
cout<<"
                                 3 . Cancellation";
cout<<"
                                 4 . Help";
cout<<"
                                 5 . Exit";
cout<<"
_________________________________________________________________
_______________";
delay(1200);
cout<<"
";
textcolor(BLINK+YELLOW);
cprintf("                                          Press any key to
continue ...");
getch();
textcolor(YELLOW);
}
void res_menu()
{
textcolor(YELLOW);textbackground(8);
cout<<"

";saund(15);
cout<<"		        +-----------------------------+
";
cout<<"		        ¦      SAHARA  AIRLINES       ¦
";
cout<<"		        +-----------------------------1/4
";
cout<<"                      RESERVATION / ROUTE / FARE MENU
";saund(15);
cout<<"	                      ------------------------------------

";saund(15);
cout<<"¦__________________________________________________________________
____________ ";s(10000,500);
cout<<" ¦ SN ¦   FROM   ¦   TO     ¦    VIA   ¦F.CODE¦   TIMING    ¦
DAY
¦ FARE ¦ ";s(10000,500);
cout<<" ¦    ¦          ¦          ¦          ¦      ¦ (ARR)¦(DEP) ¦
¦  ($) ¦ ";s(10000,500);
cout<<" ¦  1 ¦ LUCKNOW  ¦ DELHI    ¦ ¯¯¯¯¯    ¦ 0871 ¦ 1530 ¦ 1615 ¦
MONDAY   ¦ 100  ¦ ";s(10000,500);
cout<<" ¦  2 ¦ LUCKNOW  ¦ CHENNAI  ¦ DELHI    ¦ 0037 ¦ 1200 ¦ 1230 ¦
THURSDAY ¦ 700  ¦ ";s(10000,500);
cout<<" ¦  3 ¦ DELHI    ¦ COCHIN   ¦ ¯¯¯¯¯    ¦ 1070 ¦ 1740 ¦ 1830 ¦
FRIDAY   ¦ 730  ¦ ";s(10000,500);
cout<<" ¦  4 ¦ DELHI    ¦ BANGALORE¦ ¯¯¯¯¯    ¦ 1007 ¦ 2040 ¦ 2100 ¦
SUNDAY   ¦ 800  ¦ ";s(10000,500);
cout<<" ¦  5 ¦ LUCKNOW  ¦ BANGALORE¦ DELHI    ¦ 1017 ¦ 1615 ¦ 1700 ¦
MONDAY   ¦ 850  ¦ ";s(10000,500);
cout<<" ¦  6 ¦ ALLAHBAD ¦ DELHI    ¦ -----    ¦ 7001 ¦ 0845 ¦ 0910 ¦
SUNDAY   ¦  80  ¦"; s(10000,500);
cout<<"¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦ ";s(10000,500);
delay(1000);
saund(50);
textcolor(BLINK+YELLOW);
cprintf("                                     Press any to continue
...");
getch();

}

void main()
{
textcolor(12);
textbackground(8);
int mch;
res r;
int flag=0,rec=0;
char ch;

do {  clrscr();
	saund(50);
//if(oo>0)restart();oo++;
char name[36],code[5],name1[36],code1[5];
char name2[36],code2[5];
int flag=0;
fstream fin,fin1;
textcolor(YELLOW);
	menu();
	saund(30);
	gotoxy(4,15);

	puts("     Enter your choice  :
");
	gotoxy(30,15);
	cin>>mch;
	switch(mch)
		 {

//------------------------------------------------------------------------
----------
//			 C A S E  1  :  W R I T I N G
//###################################3####################################
#####
    case 1:       r.res_inp();
		  fin.open("oldmas.dat",ios::binary |ios::app);
		  fin.write( (char *) &r,sizeof(r));
		  fin.close();
		  fin.open("oldmas.dat",ios::binary |ios::in);
		  fin1.open("newmas.dat",ios::binary |ios::out);
		  fin.read( (char*)&r,sizeof(res) );
		  while(!fin.eof() )
			{

			fin1.write( (char*)&r,sizeof(res) );
			fin.read( (char*)&r,sizeof(res) );
			}
		  fin.close();
		  fin1.close();
     break;

//------------------------------------------------------------------------
----------
//                       C A S E : 2  " S E A R C H I N G"
//########################################################################
#####
  case 2:
	      fin.open("newmas.dat",ios::in|ios::binary);
	       cout<<"




--------------------------------------------------------------------------
-";
	       cout<<"
	Enter the name  :  ";gets(name);
	       cout<<"
	Enter the flight code  :  ";gets(code);
	   while( !fin.eof() )
	     {
	       assign_code(r,code1);
	       r.p.assign_name(r.p,name1);
	       if(strcmpi(name1,name)==0  &&  strcmp(code1,code)==0)
		 {
		 clrscr();

cout<<"



a---------------------------------------------------------
----------------------";
		 cout<<"
a                          Welcome to `Sahara Querries' ";

cout<<"
a---------------------------------------------------------------
----------------";
		 r.res_out();
		 rec=1;

cout<<"

a-------------------------------------------------------------
------------------";

cout<<"a-----------------------------------------------------------------
--------------";
		 cout<<"                    Press  any  key  to  continue";  getch();
		 }
		 fin.read((char *)&r , sizeof(res));
	     }

	    fin.close();							clrscr();
		 if(rec==0)
		 {
		 coldes(14+128,0);
		 clrscr();
		 cout<<"









		       Record not found  in
Reservation
Master";
		 getch();
		 }

		break;
//------------------------------------------------------------------------
----------
//			C A S E : 3  " C A N C L A T I O N "
//########################################################################
#########
case 3:
	cout<<"
enter the name ";
	gets(name);
	cout<<"
enter the code ";
	gets(code);
	cout<<"
	Checking for record";
	fin.open("oldmas.dat",ios::binary | ios::in);
	fin1.open("newmas.dat",ios::binary | ios::out);
	if(fin==NULL && fin1==NULL)
	  {
	  cout<<" No records found in Reservation Master";getch();
	  goto label;
	  }
	else
	{      fin.read( (char*)&r,sizeof(res) );
	   while(!fin.eof() )
	     {

	       assign_code(r,code1);
	       r.p.assign_name(r.p,name1);// cout<<"
name 1 & code1  :
";puts(name1);puts(code1);getch();
	       if(strcmpi(name1,name)==0  &&  strcmp(code1,code)==0)
		 {
		 cout<<"
 record found ";
		 cout<<"
	Deleting.a.a.a.a.";
		 }
	       else
		 {
		 fin1.write( (char*)&r ,sizeof(res));
		 }
		  fin.read( (char*)&r,sizeof(res) );
	     }
	}
	fin.close();fin1.close();
	cout<<"

		Record marked for deletion";
	getch();
		  unlink("oldmas.dat");
		  fin.open("oldmas.dat",ios::app|ios::binary );
		  fin1.open("newmas.dat",ios::binary |ios::in);
		  if(fin1==NULL)exit(0);
		  else
		    {
		     fin1.read( (char*)&r,sizeof(res) );
		     while(!fin1.eof() )
			{
			fin.write( (char*)&r,sizeof(res) );
			fin1.read( (char*)&r,sizeof(res) );
			}
		    }
		  fin.close();
		  fin1.close();


 label  :
	break;

//------------------------------------------------------------------------
----------
//			C A S E  4 : H E L P
//########################################################################
#####
	 case 4:help();break;

//------------------------------------------------------------------------
----------
//                      C A S E  5 : E X I T
//########################################################################
######
		 case 5:
		       //	for(int a=1;a<5;a++)
			{
			textcolor(YELLOW+BLINK);clrscr();
			puts("





                            Exiting . . .


				please wait");
			saund(70);
		       //	delay(10);nosound();saund(20);nosound();delay(150);

			}
			exit(1);
			break;
		 default :
		 cout<<"Out of choice  !!!
Try Again  (y/n)  :  ";
		 cin>>ch; break;
		}
		//  END  OF  SWITCH
   }while( (mch>0 && mch<6) || (ch=='y' || ch=='Y') );
delay(2000);
}

//------------------------------------------------------------------------
----------
//			        END OF MAIN
//########################################################################
######




//------------------------------------------------------------------------
----------
//			    H E L P   M E N U
//########################################################################
######

      void help()
	      {  coldes(13,8);
		 clrscr();
		 cout<<"
                          Welcome to online 'HELP'";
		 delay(700);

cout<<"
-----------------------------------------------------------------
--------------";
		 cout<<"
                  You are provided with irlines 'MENU'
";
		 cout<<"
	          According  to  your  need , you may
";
		 cout<<"
	          choose any valid option & enter your
";
		 cout<<"
                  choice . ";
		 delay(2000);
		 cout<<"
                  Example ";delay(700);
		 clrscr();
		 delay(1500);
		 cout<<"
                          Welcome to online 'HELP'";

cout<<"
-----------------------------------------------------------------
--------------";
		 delay(2000);
		 menu();
		 for(int i=0;i<53;i++)
			{
			gotoxy(i+28,19);
			puts("  »--»");
			delay(50);
			}
		 cout<<"	If your choice is reservation ,
	number to be input is
1";
		 cout<<"			press any key to continue";
		 getch();

		 }
//------------------------------------------------------------------------
----------

//                       E N D   O F   P R O G R A M M E

//########################################################################
####


