#include<bits/stdc++.h>
using namespace std;
#define m 5
int main()
{
    int a[1000]={0},n,t=0;
    while(cin>>n)
    {
        if(n==1)
        {
            if(t<m)
            {
            cin>>a[t];
            t++;
            cout<<"push"<<endl;
            }
            else
            cout<<"overflow"<<endl;
        }
            else if(n==2)
            {
                if(t!=0)
                {
                    a[t-1]=0;
                    t--;
                    cout<<"pop"<<endl;
                }
                else cout<<"under flow"<<endl;
            }
            else if(n==3)
            {
                cout<<"stack"<<endl;
                for(int i=0;i<m;i++)
                    cout<<a[i]<<endl;
            }
            else cout<<"wrong choice"<<endl;

        }

    return 0;
}
