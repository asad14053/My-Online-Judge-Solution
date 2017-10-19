#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    while(cin>>n>>a>>b)
    {
        int k=(a+b);
        k%=n;
        if(k<=0)
            k+=n;
        cout<<k<<endl;
    }
    return 0;
}
