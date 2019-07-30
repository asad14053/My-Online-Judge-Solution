#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   // while(true)
    {
        ll a[5];
        //cin>>a[0];
        ll c=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        sort(a,a+4);
        for(int i=1;i<4;i++)
        {
            if(a[i]==a[i-1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
