#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    long n;
    while(cin>>n)
    {
        long long a[n+2],c=0;
        map<long long,int>mp;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(!mp[a[i]+a[j]])
                {

                    ull N=a[i]+a[j];
                    while (N % 2 == 0)
                    {
                        N /= 2;
                    }
                    if(N==1)
                        c++;
                        mp[a[i]+a[j]]=true;
                }
                c+=mp[a[i]+a[j]];
            }

        }
        cout<<c<<endl;

    }
    return 0;
}
