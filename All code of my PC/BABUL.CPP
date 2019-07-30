#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,a,pti,ptr,data[50];
printf("how many number");
scanf("%d",&n);

for(pti=0;pti<n;pti++)
 scanf("%d",&data[pti]);

  for(ptr=0;ptr<n;ptr++)


     for(pti=(ptr+1);pti<n;pti++)
       {

	if(data[pti]<data[ptr])
	 {

	   a=data[ptr];
	   data[ptr]=data[pti];
	   data[pti]=a;

	 }
	 }
	 printf("shorting number=");

	    for(pti=0;pti<n;pti++)
	      printf("%d",data[pti]);
	     // }

	      getch();

    }