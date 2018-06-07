#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n ;
    string a,b;
    while(cin>>a)
    {

        sort(a.begin(),a.end());
        b=a;
        if(b[0]=='0')
        {
            for(int i=1; i<=b.size(); i++)
            {
                if(b[i]!='0')
                {
                    swap(b[0],b[i]);
                    break;
                }
            }
        }
        reverse(a.begin(),a.end());
        m=atoll(a.c_str());
        n=atoll(b.c_str());
        if(m>n)
            swap(m,n);
        printf("%lld - %lld = %lld = 9 * %lld\n",n,m,n-m,(n-m)/9);
    }

    return 0;
}
