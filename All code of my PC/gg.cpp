#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int a[t+3];
        for(int i=0; i<t; i++)
            cin>>a[i];
            int c=0;
        for(int i=1; i<t-1; i++)
        {
            if(a[i]%2)
            {
                if(a[i+1]%2 and a[i-1]%2==0)
                {
                    a[i]+=1;
                    a[i+1]+=1;
                    c+=2;
                }
                else if(a[i+1]%2==0 and a[i-1]%2)
                {
                    a[i]+=1;
                    a[i-1]+=1;
                    c+=2;
                }

            }
        }
        bool flag=false;
        for(int i=0;i<t;i++)
            {
                cout<<a[i]<<endl;
                if(a[i]%2==0)
               flag=true;
               else
               {
                   flag=false;
                   break;
               }
            }
            cout<<"=="<<c<<endl;
            if(flag)
                cout<<c<<endl;
            else cout<<"NO"<<endl;
    }
    return 0;
}
