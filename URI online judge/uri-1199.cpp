#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    char a[1000];
    ll b;
    while(gets(a))
    {
        if(a[0]=='0')
        {

         b=strtol(a,NULL,16);
        cout<<b<<endl;
        }
        else
        {
            b=atol(a);
            if(b<0)
                break;
                cout<<"0x";
            printf("%X\n",b);
        }
    }
    return 0;
}
