#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>

float a1[4],a2[4],a3[4];                       /* Array declaration */
void show();                                   /* function declaration
*/
void getdata(float [],float [],float []);      /*    //   //    //
*/
void display(float [],float [],float []);      /*    //   //    //
*/
int diagonally();
void swap(float [],float []);                  /*    //   //    //
*/
void jacobi(float [],float [],float []);       /*    //   //    //
*/
void gauss(float [],float [],float []);
void answer();
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*
/
/*....................MAIN FUNCTION OF METHOD............*/
void main()                              /* main function definition
*/
  {
      int  count=4;                           /* { main function body}
*/
      clrscr();

cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^^^^^"<<endl;
      cout<<"..................THIS IS VALID ONLY FOR JACOBI ITTERATIVE
METHOD............."<<endl;

cout<<"___________________________________________________________________
___________"<<endl;
      show();                            /*  function calling  */
      getdata(a1,a2,a3);                 /*  function calling  */
      clrscr();
      cout<<endl<<endl;
      display(a1,a2,a3);                    /*  function calling  */
      count=diagonally();                   /*  function calling  */
      switch (count)
	 {
	  case 0:
	       {
		answer();        /*  function calling */
		break;
	       }
	  case 2:
	       {display(a1,a2,a3);
		answer();       /*  function calling */
		break;
	       }
	  default:
	       {
		cout<<"SORRY;YOUR SYSTEM IS NOT DIAGONALLY DOMINENT";
		break;
	       }
	 }
 getch();
  }
////////////////////////Function To Check
Diagonality////////////////////////
int diagonally()
  {
     int f=4,g=4 ,h=4;
     int count=0;
     float temp[4];
     if(fabs(a1[0])<(fabs(a1[1])+fabs(a1[2])))
	{count++;  f=1;}
     if(fabs(a2[1])<(fabs(a2[0])+fabs(a2[2])))
	{count++;  g=2;}
     if(fabs(a3[2])<(fabs(a3[0])+fabs(a3[1])))
	{count++;  h=3;}
     if(f==1&&g==2&&h==4)
	swap(a1,a2);                           /*  function calling  */
     if(f==1&&h==3&&g==4)
	swap(a1,a3);                           /*  function calling  */
     if(g==2&&h==3&&f==4)
	swap(a2,a3);                           /*  function calling  */

   return(count);
  }
////////////////////////////Function for jacobi itterative
method/////////////////////////
void jacobi(float a[],float b[],float c[]) /*function definition */
  {
     float temp[3];
     long float j1,j2,j3;
     cout<<endl<<"please enter the initial guess:"<<endl;
     cout<<endl<<"X(1) =";
     cin>>j1;
     cout<<endl<<"X(2) =";
     cin>>j2;
     cout<<endl<<"X(3) =";
     cin>>j3;

cout<<"-------------------------------------------------------------------
----";

cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
::::";

cout<<"___________________________________________________________________
____";
     cout<<endl<<endl<<"iterrations #"<<"  "<<"  X(1)"<<"
X(2)"<<"           X(3)";
     cout<<endl<<"   0"<<setw(17)<<j1<<setw(15)<<j2<<setw(14)<<j3;
     cout<<endl;

     for(int s=1;s<=20;s++)
	 {
	  temp[0]=j1;temp[1]=j2;temp[2]=j3;
	  j1=(a[3]-a[1]*temp[1]-a[2]*temp[2])/a[0];
	  j2=(b[3]-b[0]*temp[0]-b[2]*temp[2])/b[1];
	  j3=(c[3]-c[0]*temp[0]-c[1]*temp[1])/c[2];
	  cout<<"   "<<s<<setw(17)<<j1<<setw(15)<<j2<<setw(14)<<j3<<endl;
	  if(j1==temp[0]&&j2==temp[1]&&j3==temp[2])
	     break;
	 }
  }
//////////////////////////Function Of
Swaping////////////////////////////////////
void swap(float a[],float b[])          /*  function definition   */
  {
   float temp[4];

cout<<"-------------------------------------------------------------------
-------------"<<endl;
   cout<<".....................Your System Is Not Diagonally
Dominent....................."<<endl;
   cout<<"___________________Now It Have To Become Diagonally Dominent
As__________________"<<endl;
   for(int i=0;i<4;i++)
       {
       temp[i]=a[i];
       a[i]=b[i];
       b[i]=temp[i];
       }
  }
//////////////////////Function To Show Equations
Form////////////////////////
void show()                  /*       function definition   */
  {
    cout<<endl;
cout<<"__________________Your Equations Will Be Of The Form Like
This_________________"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"                  a(11)X1  +   a(12)X2  +   a(13)X3=
b(1)"<<endl
	<<"                  a(21)X1  +   a(22)X2  +   a(23)X3= b(2)"<<endl
	<<"                  a(31)X1  +   a(32)X2  +   a(33)X3= b(3)"<<endl;
  }
//////////////////////Function To Get Data From
User/////////////////////////
 void getdata(float a[],float b[],float c[])    /*   function
definition
*/
  {
       for(int i=0;i<3;i++)
	   {
	     cout<<"a(1"<<i+1<<")=";
	     cin>>a[i];
	     cout<<endl;
	   }
       cout<<"b(1) =";
       cin>>a[3];
       cout<<endl;
       for(int j=0;j<3;j++)
	   {
	     cout<<"a(2"<<j+1<<")=";
	     cin>>b[j];
	     cout<<endl;
	   }
       cout<<"b(2) =";
       cin>>b[3];
       cout<<endl;
       for(int k=0;k<3;k++)
	   {
	     cout<<"a(3"<<k+1<<")=";
	     cin>>c[k];
	     cout<<endl;
	   }
       cout<<"b(3) =";
       cin>>c[3];
       cout<<endl;
  }
///////////////////////////Function To display
Equations/////////////////////
 void display(float a[],float b[],float c[])   /*    function
definition
*/
  {

cout<<"-------------------------------------------------------------------
-------";
      cout<<"     ::::::::::::::::Your Given System Is Like
This:::::::::::::::: "<<endl<<endl;
      cout<<"		      "<<a[0]<<"X(1)  +  "<<a[1]<<"X(2)  +
"<<a[2]<<"X(3)  = "<<a[3]<<endl
	  <<"		      "<<b[0]<<"X(1)  +  "<<b[1]<<"X(2)  +  "<<b[2]<<"X(3)  =
"<<b[3]<<endl
	  <<"		      "<<c[0]<<"X(1)  +  "<<c[1]<<"X(2)  +  "<<c[2]<<"X(3)  =
"<<c[3];
      cout<<endl<<endl;
  }
///////////////////////////Function of Gauss Seidal
Method////////////////////
  void gauss(float a[],float b[],float c[])         /*function
definition
*/
  {
     float temp[3];
     long float j1,j2,j3;
     cout<<endl<<"please enter the initial guess:"<<endl;
     cout<<endl<<"X(1) =";
     cin>>j1;
     cout<<endl<<"X(2) =";
     cin>>j2;
     cout<<endl<<"X(3) =";
     cin>>j3;

cout<<"-------------------------------------------------------------------
----";

cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
::::";

cout<<"___________________________________________________________________
____";
     cout<<endl<<endl<<"iterrations #"<<"  "<<"  X(1)"<<"
X(2)"<<"           X(3)";
     cout<<endl<<"   0"<<setw(17)<<j1<<setw(15)<<j2<<setw(14)<<j3;
     cout<<endl;

     for(int s=1;s<=20;s++)
	 {
	  temp[0]=j1;temp[1]=j2;temp[2]=j3;
	  j1=(a[3]-a[1]*j2-a[2]*j3)/a[0];
	  j2=(b[3]-b[0]*j1-b[2]*j3)/b[1];
	  j3=(c[3]-c[0]*j1-c[1]*j2)/c[2];
	  cout<<"   "<<s<<setw(17)<<j1<<setw(15)<<j2<<setw(14)<<j3<<endl;
	  if(j1==temp[0]&&j2==temp[1]&&j3==temp[2])
	     break;
	 }
  }
/////////////////     FUNCTION OF  TAKING GAUSS OR JACOBI
//////////////////
void answer()
 {
   char option;
   do
   {
   cout<<"PRESS [G] FOR GAUSS SEIDAL METHOD: "<<endl
       <<"AND"<<endl<<"PRESS [J] FOR JACOBI ITTERATIVE METHOD:"<<endl;
   option=getche();
   switch (option)
       {
	case 'j':
	   {
	    cout<<setw(25)<<"----------BY JACOBI ITTERATIVE
METHOD----------"<<endl;
	    jacobi(a1,a2,a3);                   /*   function calling  */
	    break;
	   }
	case 'g':
	   {
	    cout<<setw(25)<<"----------BY GAUSS SEIDAL
METHOD----------"<<endl;
	    gauss(a1,a2,a3);                            /*   function calling
*/
	    break;
	   }
	default:
	   {
	     cout<<"-------------YOUR OPTION IS NOT CORRECT TRY
AGAIN-------------"<<endl;
	     break;
	   }
       }
   }while(getche()!='
');
  }



