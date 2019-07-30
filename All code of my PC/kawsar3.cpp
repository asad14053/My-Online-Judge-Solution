#include<bits/stdc++.h>
using namespace std;
#define m 5
int a[1000];
int main()
{
    int front=-1,rear=-1,k;
    int n;
    while(cin>>n)
    {
        if(n==1)
        {
            if((front==0&&rear==m-1)||(front==rear+1))
                cout<<"overflow"<<endl;
            else
            {
                if(rear==m-1)
                    rear=0;
                else if(front==-1)
                front=0,rear=0;
                else
                rear=rear+1;
                cin>>k;
                a[rear]=k;
                cout<<"push"<<endl;
            }
        }
        else if(n==2)
        {
            if(front==-1)
                cout<<"underflow"<<endl;
            else
            {
                if(front==rear)
                    front=-1,rear=-1;
                else if(front==m-1)
                    front=0;
                else
                {
                    a[front]=0;
                    front++;
                    cout<<"pop"<<endl;
                }
            }
        }
        else if(n==3)
        {
            cout<<"queue:"<<endl;
            for(int i=0;i<m;i++)
                cout<<a[i]<<endl;
        }
    }

    return 0;
}
