#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,c,d,e;
    long int i,j,k,ans;

    while(cin>>a>>b>>c>>d>>e)
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0) break;
        ans=(a*b*c*d*d*e*e);
        cout<<ans<<endl;
    }
    return 0;
}
