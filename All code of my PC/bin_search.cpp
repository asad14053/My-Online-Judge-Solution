/*#include <stdio.h>
void binary_search();
int a[50], n, item, loc, beg, mid, end, i;
main()
{
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array in sorted form:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter ITEM to be searched: ");
    scanf("%d", &item);
    binary_search();
}
void binary_search()
{
    beg = 0;
    end = n-1;
    mid = (beg+end)/2;
    while ((beg<=end) && (a[mid]!=item))
    {
        if (item < a[mid])
            end = mid-1;
        else
            beg = mid+1;
        mid = (beg+end)/2;
    }
    if (a[mid] == item)
        printf("\n\nITEM found at location %d", mid+1);
    else
        printf("\n\nITEM doesn't exist");
}
*/
#include<stdio.h>
int main(){

    int a[10],i,n,m,c=0,l,u,mid;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements in ascending order: ");
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&m);

    l=0,u=n-1;
    while(l<=u){
         mid=(l+u)/2;
         if(m==a[mid]){
             c=1;
             break;
         }
         else if(m<a[mid]){
             u=mid-1;
         }
         else
             l=mid+1;
    }
    if(c==0)
         printf("The number is not found\n");
    else
         printf("The number is found  at %d\n",mid+1);

    return 0;
}

