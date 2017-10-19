#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    while(cin>>n>>k)
    {
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
            int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                int m=i;
                for(int j=0;j<k-1;j++)
                { //cout<<a[m]<<"    =========="<<i<<endl;
                m++;
                    a[m]=0;


                }
                c++;
               // cout<<c<<endl;
            }
        }
        cout<<c<<endl;
    }
return 0;
}
