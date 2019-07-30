#include<bits/stdc++.h>
using namespace std;
#define max 5
int main()
{
    int front=-1,rear=-1,i,j,n,value,a[max]={0};
     printf("1 for insert.\n");
        printf("2 for delete.\n");
        printf("3 for display.\n");
        printf("4 break.\n");
    while(1)
    {
       cout<<"enter choice"<<"\n";
        scanf("%d",&n);
        if(n==1)
        {
           if((front==0 && rear==max-1)||front==rear+1)
                printf("queue is overflow\n");
           else
           {
               if(rear==max-1)
                rear=0;
               else if(front==-1)
               {
                   front=0;rear=0;
               }
               else
                rear=rear+1;
                cout<<"enter value"<<"\n";
                scanf("%d",&value);
               a[rear]=value;
               printf("value successfully inserted.\n");
           }
        }
        else if(n==2)
          {
        if(front==-1){
            printf("Queue is underflow.\n");

        }
           else
            {
              if(front==rear)
                  {
                  front=-1;
                  rear=-1;
                  }
              else if(front==max-1)
                  front=0;
              else
              {


                  value=a[front];
                  a[front]=0;
                   front=front+1;
                  printf("value successfully deleted\n");
              }

          }
        }
        else if(n==3)
        {
            cout<<"queue"<<"\n";
                 for(i=0;i<max;i++)
                    printf("%d \n",a[i]);

        }
        else exit(0);

    }

}

