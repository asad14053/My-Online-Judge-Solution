#include<bits/stdc++.h>
using namespace std;
#define max 5
int a[max];
int main()
{
    int top=0,i,j,choice;
    printf("MENU \n");
    printf("1: insert an element in queue\n");
    printf("2: delete an element from queue\n");
    printf("3: display the queue\n");
    printf("4:exit!\n");
    while(1)
    {
        printf("your choice:\n");
        scanf("%i",&choice);
        switch(choice)
        {
        case 1:
            if(top<max)
            {
                printf("enter the no:");
                scanf("%d",&a[top]);
                top++;
                cout<<"insertion successful"<<"\n";

            }
            else
                printf("over flow\n");
            break;
        case 2:
            if(top!=0)
            {
                a[top]=0;
                top=top-1;
                printf("value deleted !\n");
            }
            else
                printf("under flow\n");
            break;
        case 3:
            int i;
            cout<<"stack :"<<"\n";
            for(i=0; i<=top-1; i++)
                printf("%i\n",a[i]);
            break;
        case 4:
            break;
        default:
            printf("you entered wrong choice!\n");
            break;
        }
    }
    return 0;
}

