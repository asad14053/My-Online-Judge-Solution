#include<stdio.h>
int main()
{
int a[100],i,n,item,mid,data,beg,end;
   printf("How many data:");
scanf("%d",&n);
printf("Enter the data:");
for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
beg=1;end=n;
puts("");
printf("Item=");
scanf("%d",&item);
mid=(beg+end)/2;

while(beg<end&&a[mid]!=item)
  {
    if(a[mid]<item)
    beg=mid+1;
    else
    end=mid-1;

    mid=(beg+end)/2;
  }

    if(a[mid]==item)
    printf("Location=%d\n",mid);
    else
    printf("\nItem is not found:\n");


    return 0;
}
