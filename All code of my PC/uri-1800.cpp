#include<bits/stdc++.h>
using namespace std;bool a[1009];
int main()
{
    int t,n,m;
    while(cin>>t>>n)
    {memset(a,false,sizeof(a));

        for(int i=0;i<n;i++)
        {
            cin>>m;
            a[m]=true;
        }
        for(int i=0;i<t;i++)
        {
            cin>>m;
            if(a[m])
                cout<<"0"<<endl;
            else
            {cout<<"1"<<endl;
            a[m]=true;
            }

        }

    }

    return 0;
}
