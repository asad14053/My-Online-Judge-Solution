#include<stdio.h>
struct mynode
{
    struct mynode*LL;
    int D;
    struct mynode *RL;
};
 typedef struct mynode node;
int main()
{
    node *P,*T,*Q,*A[100];
    int i,j,x,n;
    T=0,n=0;
    while(1)
    {
        printf("enter data:\n");
        scanf("%d",&x);
        if(x<0)
            break;
        Q=new(node);
       printf("%x\n",Q);
        Q->D=x;
        Q->LL=0;
        Q->RL=0;
        if(T==NULL)
            T=Q;
        else
        {
            P=T;
            while(1)
                  {
                    if(P->D==x)
                        {
                            printf("duplicate\n");
                            break;
                        }
                    else
                    {
                        if(P->D>x)
                        {
                            if(P->LL==0)
                            {

                                P->LL=Q;
                            break;
                            }
                            else P=P->LL;
                        }
                        else
                        {

                            if(P->RL==0)
                            {

                                P->RL=Q;
                            break;
                            }
                            else P=P->RL;

                        }

                    }
                  }
        }
        n++;
        A[n]=Q;
    }
    for(i=1;i<=n;i++)
    {
        P=A[i];
        printf(" %x  %d   %x\n",P->LL,P->D,P->RL);
    }
    return 0;
}
/*
55
5
50
45
30
20
40
25


-------
40
60
50
33
35
24
45
78

44
65
55
33
75
15


*/
