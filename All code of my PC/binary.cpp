#include<stdio.h>
#include<conio.h>

void main()
{

int data[50],item,i,n,mid,beg,end,loc;
printf("How many data will be input?");
scanf("%d",&n);
printf("data are\n");
for(i=1;i<=n;i++)
    scanf("%d",&data[i]);
printf("item is:");
scanf("%d",&item);
beg=1;
end=n;
while(beg<=end) {
     mid=(beg+end)/2;
     if(item<data[mid])
	 end=mid-1;
     else if(item>data[mid])
	beg=mid+1;
     else
	 loc=mid;
	 }
if(loc==0)
    printf("item is not found");
else
   printf("item is found and location is=%d",loc);
getch();
}

