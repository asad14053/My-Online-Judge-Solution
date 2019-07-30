#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    string x,y;
    int l;
    while(cin>>x)
    {
        sort(x.begin(),x.end());
        y=x;
        if(y[0]=='0')
        {
            l=y.size();
            for(int i=1; i<l; i++)
            {
                if(y[i]!='0')
                {
                    swap(y[0],y[i]);
                    break;
                }
            }
        }
        reverse(x.begin(),x.end());
        a=atoll(x.c_str());
        b=atoll(y.c_str());

        if(a>b)
            swap(a,b);
        printf("%lld - %lld = %lld = 9 * %lld\n",b,a,b-a,(b-a)/9);
    }

    return 0;
}
