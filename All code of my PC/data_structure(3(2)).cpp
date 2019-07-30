#include<bits/stdc++.h>
using namespace std;
#define max 5
int queue[max];
long front,rear;
void display();
int main()
{
    int choice,i;
    front=rear=0;
    printf("MENU \n");
        printf("1: insert an element in queue\n");
        printf("2: delete an element from queue\n");
        printf("3: display the queue\n");
        printf("4:exit!\n");
    while(1)
    {
        printf("your choice:");
        scanf("%i",&choice);
        switch(choice)
        {
        case 1:
             if((front==0&&rear==5)||(front ==rear +1)) cout<<"over flow"<<"\n";
             if(front ==-1)
             {
                 rear =front=0;
             }
             if(rear==5) rear=rear +1;
             cin>>i;
             queue[rear]=i;
            break;
        case 2:
            int info;
            if(front!=-1)
            {
                info=queue[front];
                if(front==rear)
                {
                    front=-1;
                    rear=-1;
                }
                else
                    front=front+1;
                printf("deleted value is =%d\n",info);
            }
            else
                printf("under flow\n");
            break;
        case 3:
            display();
            break;
        case 4: break;
        default:
            printf("you entered wrong choice!\n");
            break;
        }
    }
    return 0;
}
void display()
{
    int i;
    for(i=front; i<=rear; i++)
        printf("%i\n",queue[i]);
}

