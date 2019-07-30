#include<stdio.h>

void radix_sort(int array[], int n);
int main()
{
 int array[100],n,i;

 printf("Enter the number of elements to be sorted: ");
 scanf("%d",&n);
 printf("\nEnter the elements to be sorted: \n");
 for(i = 0 ; i < n ; i++ )
 {
  printf("\tArray[%d] = ",i);
  scanf("%d",&array[i]);
 }

 printf("\nArray Before Radix Sort:");  //Array Before Radix Sort
 for(i = 0; i < n; i++)
 {
  printf("%d", array[i]);
 }
 printf("\n");

 radix_sort(array,n);

 printf("\nArray After Radix Sort: ");  //Array After Radix Sort
 for(i = 0; i < n; i++)
 {
  printf("%d\t", array[i]);
 }
 printf("\n");
 return 0;
}

void radix_sort(int arr[], int n)
{
 int bucket[10][5],buck[10],b[10];
 int i,j,k,l,num,div,large,passes;

 div=1;
 num=0;
 large=arr[0];

 for(i=0 ; i<n ; i++)
 {
  if(arr[i] > large)
   {
    large = arr[i];
   }

  while(large > 0)
  {
   num++;
   large = large/10;
  }

  for(passes=0 ; passes<num ; passes++)
  {
   for(k=0 ; k<10 ; k++)
   {
    buck[k] = 0;
   }
   for(i=0 ; i<n  ;i++)
   {
    l = ((arr[i]/div)%10);
    bucket[l][buck[l]++] = arr[i];
   }

   i=0;
   for(k=0 ; k<10 ; k++)
   {
    for(j=0 ; j<buck[k] ; j++)
    {
     arr[i++] = bucket[k][j];
    }
   }
   div*=10;
  }
 }
}

