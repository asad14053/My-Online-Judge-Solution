#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    while(cin>>n)
    {
        if(n==1)
        {
            int c;
            cin>>c;
            if(c==1)
              cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
         continue;
        }
        int a[n+2];
        int c=0,c2=0;
        for(int i=0;i<n;i++)
            {cin>>a[i];
            if(!a[i])
                c++;
                else
                {
                    if(i)c2++;
                }
            }
        if(c2 and c)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
