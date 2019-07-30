/*            Written By : Saurabh Jain
                           II Year B.sc (Hons) Computer Science
						   College Of Vocational Studies
						   Delhi University



		  This Program Will Split Or Join Any File
		  Its A Complete Bug Free Program

  If Modified Please Send To : sid_isin@yahoo.com


*/



#include<stdio.h>
#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<io.h>
#include <fcntl.h>

struct s
{
unsigned long char c;
}
data;

int main()
{
char name[40],filename[40],ans;

long double size=0,i=0,j,parts,loop,mod=0,mod1=0,option,counter=0;

unsigned int handel,st=0;

long int status=0,whrex,whrey;

FILE *fp,*fp1;

cout<<"                       Welcome To The File Spliter Programe



";
cout<<"1. Split A File
2. Join A File

Enter Your Option    ";
cin>>option;

if(option==1)
{
cout<<"
Enter The Path Of The File Which Is To Be Splited
";
gets(name);

fp=fopen(name,"rb");

if(fp==NULL)
{
cout<<"
Cannot Open The Source File ------> Press Any Key To
Exit.......
";
getch();
exit(1);
}

cout<<"
Please Wait ---------------> WHILE FILE BEING ANALYSED
.........
";

while(fread(&data,sizeof(data),1,fp)>0)
{
size++;
}

handel=open(name,O_CREAT);

cout<<"
The Size Of The File Is "<<filelength(handel)<<" BYTES
";

mod=size-1;

rewind(fp);

status=size/100;

cout<<"
Enter The Parts In Which File Is To Be Splited
";
cin>>parts;

loop=size/parts;

for(i=1;i<=parts;i++)
{
cout<<"
Enter The "<<i<<" Target File Name
";
gets(filename);

fp1=fopen(filename,"wb");

if(fp1==NULL)
{
cout<<"
Cannot Open Target File Name ------> Press Any Key To
Exit.......
";
getch();
exit(1);
}

cout<<"
Please Wait ......................
";

whrex=wherex();
whrey=wherey();

for(j=1;j<=loop;j++)
{
fread(&data,sizeof(data),1,fp);

mod1++;
counter++;
if(counter==status)
{
st++;
gotoxy(50,15);cout<<"completion status.... "<<st<<" %
";
counter=0;
}

if(mod1!=mod)
{
fwrite(&data,sizeof(data),1,fp1);
}
}
gotoxy(whrex,whrey+1);
fclose(fp1);
}
fclose(fp);
cout<<"
File Spliting Completed Press Any Key To Exit";
getch();
}



if(option==2)
{
cout<<"
Enter The Name Of The Target File
";
gets(name);

fp=fopen(name,"wba");

if(fp==NULL)
{
cout<<"
Cannot Open Target File ------> Press Any Key To
Exit.......
";
getch();
exit(1);
}

do
{
i++;
cout<<"
Enter The Name Of The "<<i<< " File
";
gets(filename);

fp1=fopen(filename,"rb");

if(fp1==NULL)
{
cout<<"
Cannot Open Source File ------> Press Any Key To
Exit.......
";
getch();
exit(1);
}

cout<<"
Please Wait ......................
";

while(fread(&data,sizeof(data),1,fp1)>0)
{
fwrite(&data,sizeof(data),1,fp);
}
fclose(fp1);
cout<<"
Do You Want To Join Another File  (y/n)
";
cin>>ans;

}while(ans=='y');

fclose(fp);

handel=open(name,O_CREAT);

cout<<"
The Size Of The File Is "<<filelength(handel)<<" BYTES
";
cout<<"
Joining Of Files Completed Press Any Key To Exit ";
getch();
exit(1);
}

return 0;
}
