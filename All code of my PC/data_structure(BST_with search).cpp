#include<bits/stdc++.h>
using namespace std;
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
    cout<<"enter data:"<<endl;
    while(1)
    {

        cin>>x;
        if(x<0)
            break;
        Q=new(node);
        cout<<Q<<endl;
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
                    cout<<"duplicate"<<endl;
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
    for(i=1; i<=n; i++)
    {
        P=A[i];
        cout<<P<<" "<<P->LL<<" "<<P->D<<" "<<P->RL<<endl;
    }
    while(1)
    {
        int c;
        cin>>c;
        P=T;
        while(1)
        {
            if(P->D==c)
            {
                cout<<"value found"<<endl;
                break;
            }
            else
            {
                if(P->D>c)
                {
                    if(P->LL==0)
                    {
                        cout<<"value not found"<<endl;
                        break;
                    }
                    else P=P->LL;
                }
                else
                {

                    if(P->RL==0)
                    {

                        cout<<"value not found"<<endl;
                        break;
                    }
                    else P=P->RL;
                }
            }
        }

    }

    return 0;
}
