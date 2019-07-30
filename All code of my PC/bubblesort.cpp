#include<stdio.h>
#include<conio.h>
#define SIZE 7
int main()
{
    int i,j,temp;
    int arr[ SIZE ];
     printf("Enter Number : ");
    for(i=0; i<SIZE; i++)
    {

        scanf("%d",&arr[i]);
    }
    for(i=0; i<SIZE ; i++)
    {
        for(j=0; j<(SIZE); j++)
        {
            if( arr[j] < arr[j+1] )
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("%d\t",arr[j]);
    }

    return 0;
}

