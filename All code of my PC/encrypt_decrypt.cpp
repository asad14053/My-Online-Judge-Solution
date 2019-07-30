/*            Written By : Saurabh Jain
                           I Year B.sc (Hons) Computer Science
						   College Of Vocational Studies
						   Delhi University



		  This Program Will Encrypt Or Decrypt Ant Text Document
		  Its A Complete Bug Free Program

  If Modified Please Send To : sid_isin@yahoo.com


*/


/* This Program Will Encrypt Any Type Of Text Document */

#include<fstream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
char name[30],target[30],ch,mod;                             //Declare
Variables
int num[100],i,option;

cout<<"Enter Your Option ";
cout<<"
1. To Encrypt The File ";
cout<<"
2. To Decrypt The File ";
cout<<"
Option : ";
cin>>option;

if(option==1)
{

cout<<"Enter The Path Of A File Which Is To Be Encrypted : ";
gets(name);

ifstream fin(name,ios::binary);                              //Open The
Input File In A Binary Mode
if(!fin)
 {                                                          //Show
Error
Occur If File Does Not Exist
  cout<<"
Error In Openinig Of A File : ";                 //Or Any
Error
Occurs
  return 1;
 }

cout<<"
Enter The New Encrypted File Name : ";
gets(target);

ofstream fout(target,ios::binary);                         //Open The
OutPut File In A Binary Mode
if(!fout)
 {
  cout<<"
Error In Opening Of Target File : ";            //Show Error
If
Any Error Occrs In Opening Of A File
  return 1;
 }

for(i=0;i<9;i++)
 {                                                         //Multiple
For
Loops For Storing The Numbers
  num[i]=i;                                                //In An
Array
 }

for(i=14;i<31;i++)                                         //Loops Will
Store 100 Numbers
 {
  num[i-5]=i;                                              //Which Will
Encrypt The Contents Of A File
 }

for(i=33;i<=68;i++)                                        //To Avoid
The
Error Ocuur Caused By The
 {                                                         //Enter Key
,
Tab Key & Space Key
  num[i-7]=i;                                              //These
Variations In Loops Is Made
 }

for(i=97;i<=122;i++)
 {
  num[i-35]=i;
 }

while(fin)
{                                                       //Open The
Input
File
fin.get(ch);

if(ch==EOF)break;                                       //Exit To Loop
When End Of File

if((ch>=97) && (ch<=122))
 {                                                     //Encrypt The
Small
Letters
  i=97;
  mod=num[ch-i];
  fout<<mod;
 }

if((ch>=65) && (ch<=90))
 {
  i=39;                                                 //Encrypt The
Capital Letters
  mod=num[ch-i];                                        //And Store In
An
Output File
  fout<<mod;
 }

if((ch>=48) && (ch<=57))
 {
  i=4;                                                //Encrypt The
Numbers
  mod=num[ch+i];
  fout<<mod;
 }

if((ch==10)||(ch==13))
 {
  mod=ch;                                             //For Enter Key
  fout<<mod;
 }

if(ch==32)
fout<<ch;                                             //For Space Key

if(ch==9)
fout<<ch;                                             //For Tab Key

if((ch>=33)&&(ch<=47))
 {                                                    //For Special
Symbols
  mod=ch+64;
  fout<<mod;
 }

if((ch>=58)&&(ch<=64))
 {                                                    //For Special
Symbols
  mod=ch+54;
  fout<<mod;
 }

if((ch>=91)&&(ch<=96))
 {
  mod=ch+28;                                          //For Special
Symbols
  fout<<mod;
 }

if((ch>=123)&&(ch<=126))
 {
  mod=ch-40;                                          //For Special
Symbols
  fout<<mod;
 }
}

fin.close();                                          //Close The Input
File
fout.close();                                         //Close The
Output
File

cout<<"
Your File Is Encrypted Now........... ";
getch();
return 0;
}




/*========================================================================
=======================================*/


/* This Program Will Decrypt The Document */


if(option==2)
{
char name[30],target[30],ch,mod;                             //Declare
Variables
int num[100],i,flag;

cout<<"Enter The Path Of A File Name Which Is To Be Decrypted : ";
gets(name);

ifstream fin(name,ios::binary);
if(!fin)                                                     //Open The
Encryped File In A Binary Mode
{
cout<<"Error In Opening Of A File : ";
return 1;                                                    //Show
Error
If File Does Not Exist
}                                                            //Or Any
Occurs In Opening Of A File

cout<<"
Enter The New Decrypted File Name : ";
gets(target);

ofstream fout;
fout.open(target,ios::binary);                              //Opens The
Output File In An Binary Mode
if(!fout)
 {                                                          //Show
Error
If Any Error Occurs In Opening Of A File
  cout<<"Error In Opening Of A Target File : ";
  return 1;
 }

for(i=0;i<9;i++)
 {                                                          //Same
Multiple For Loops For Storing The Numbers
  num[i]=i;                                                 //In An
Array
 }

for(i=14;i<31;i++)
 {
  num[i-5]=i;                                               //Loops
Will
Store 100 Numbers
 }

for(i=33;i<=68;i++)                                         //Which
Encrypts The Document Also Decrypt It
 {
  num[i-7]=i;
 }

while(fin)
{                                                           //Opens The
Encryped File
fin.get(ch);
flag=0;                                                        //Turn
Off
Flag
if(ch==EOF)break;

for(i=26;i<52;i++)
 {
  if(ch==num[i])                                            //Loop For
Match The Small Letters Letters
  {
	mod=i+39;                                                //If Match
Then
Put Appropriate Letter
	fout<<mod;                                               //In A OutPut
File
	flag=1; break ;                                             //Turn On
Flag And Exit The Loop
  }
 }

if (flag==1) continue ;                                        //If
Flag
Is On Then Continue Outer Loop

for(i=0;i<26;i++)
 {                                                          //Loop For
Match The Capital Letters
  if(ch==num[i])
  {                                                        //If Match
Then
Put Appropriate Letter
	mod=i+97;                                               //In A OutPut
File
	fout<<mod;
	flag=1;break;                                              //Turn On
Flag
And Exit From This Loop
  }
 }

if (flag==1) continue ;                                       //If Flag
Is
On Then Continue Outer Loop

for(i=52;i<62;i++)
 {                                                         //Loop For
Numerical Numbers
  if(ch==num[i])
  {
	mod=i-4;
	fout<<mod;
	flag=1; break ;
  }
}

if (flag==1) continue ;

if((ch==10)||(ch==13))
 {
  mod=ch;                                             //Condition For
Enter Key
  fout<<mod;
 }

if(ch==32)
fout<<ch;                                             //Condition For
Space Key

if(ch==9)
fout<<ch;                                             //Condition For
Tab
Key

if((ch>=97)&&(ch<=111))
 {
  mod=ch-64;                                          //For Special
Symbols
  fout<<mod;
 }

if((ch>=112)&&(ch<=118))
 {
  mod=ch-54;                                         //For Special
Symbols
  fout<<mod;
 }

if((ch>=119)&&(ch<=124))
 {
  mod=ch-28;                                         //For Special
Symbols
  fout<<mod;
 }

if((ch>=83)&&(ch<=86))
 {                                                   //For Special
Symbols
  mod=ch+40;
  fout<<mod;
 }

}

fin.close();                                        //Close The
Encrypted
File
fout.close();                                       //Close Your
Original
Decrypted File

cout<<"
The File Is Being Decrypted............ ";
getch();
return 0;
}
return 0;
}
