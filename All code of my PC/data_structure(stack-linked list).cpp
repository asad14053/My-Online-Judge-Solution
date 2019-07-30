#include<stdio.h>
#include<conio.h>
#define MAXSIZE 100
struct stack
{
    int stack[MAXSIZE];
    int Top;
};
typedef struct stack NODE;
int push()
{   NODE *pu,*Top;
    int item;
   if (pu->Top==(MAXSIZE–1))
        printf("The Stack Is Full");
//    else
    {
        printf("\nEnter The Element To Be Inserted = ");
        scanf("%d",&item);
        pu->stack[++pu->Top]=item;
    }
    return 0;
}
void pop(NODE *po)
{
    int item;
    if (po->Top == -1)
        printf("\nThe Stack Is Empty");

    else
    {
        item=po->stack[po->Top--];
        printf("\nThe Deleted Element Is = %d",item);
    }
}

void traverse(NODE *pt)
{
    int i;
    if (pt->Top == -1)
        printf("\nThe Stack is Empty");
    else
    {
        printf("\n\nThe Element(s) In The Stack(s) is/are...");
        for(i=pt->Top; i>=0; i--)
            printf ("\n %d",pt->stack[i]);
    }
}
int main( )
{
    int choice;
    char ch;
    NODE *pu;
//    pu->Top=–1;
    do
    {

        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. TRAVERSE");
        printf("\nEnter Your Choice = ");
        scanf ("%d", &choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
//            pop();
            break;
        case 3:
//            traverse();
            break;

        default:
            printf("\nYou Entered Wrong Choice") ;
        }
        printf("\n\nPress (Y/y) To Continue = ");

        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch == 'Y' || ch == 'y');
}
