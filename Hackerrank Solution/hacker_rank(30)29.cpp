#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        int x=-1,mx=-1;
        for(int i=1; i<=p; i++)
        {
            for(int j=i+1; j<=p; j++)
            {   mx=i&j;
                if(mx<q)
                {
                    if(mx>x)
                        x=mx;
                }

            }

        }
        cout<<x<<endl;
    }
    return 0;
}
