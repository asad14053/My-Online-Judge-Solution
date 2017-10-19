#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,a,b;
    while(cin>>k>>a>>b)
    {
        if(a>b) swap(a,b);
        int m=1;
        if(a>=0&&b>=0)
            for(long long j=k+k;j<=b;j+=k)
                if(j>=a) m++;
        else
        {
            for(long long j=k+k;j<=b;j+=k)
                if(j>=a)
                    m++;
                for(long long j=-(k+k);j>=a;j-=k)
                if(j<=b) m++;
        }
        cout<<m<<endl;
    }

    return 0;
}
