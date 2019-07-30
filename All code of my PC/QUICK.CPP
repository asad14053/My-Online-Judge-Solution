#include<stdio.h>
#include<conio.h>
void quick(int a[],int beg,int end);
main()
{
	int n,a[20],i=1,start=1,end=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	end=n;
	i=1;
	quick(a,start,end);
	for(;i<=n;i++)
	{
		printf("%d ,",a[i]);

        
	}
	getch();
	return 0;
}
void quick(int a[],int beg,int end)
{
	int left=0,right=0,temp,loc;
	if(beg<end)
	{
	left=beg;
	right=end;
    loc=a[left];
	while(a[left]<=loc&&left<right)
		++left;
	while(a[right]>=loc&&right>beg)

		--right;
	if(left<right)
	{
		temp=a[left];
		a[left]=a[right];
		a[right]=temp;
	}
	temp=a[beg];
	a[beg]=a[right];
	a[right]=temp;
	quick(a,beg,right-1);
	quick(a,left,end);
	}
	return;

}
