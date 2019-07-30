// PIANO saves output in c:piano.txt



#include<conio.h>
#include<dos.h>
#include<fstream.h>

void jain(int a)
{
sound((a*8)/2);
delay(300);
nosound();
}

void main(int argc,char *argv[])
{
char anuj;
fstream file1;
file1.open(argv[1],ios::out);
clrscr();
cout<<"PIANO "<<"


 Press `q' to exit.
";
while(anuj!='q')
{
jain(anuj);
anuj=getch();
if(anuj!='q')
file1.put(anuj);
}
file1.close();
}

