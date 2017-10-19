#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,A,B;
    double N,M,ans;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>N>>M>>A>>B;
        ans=((M*(A+B))-(N*A))/B;
        if(ans>=0 && ans<=10)
            printf("Case #%d: %.2lf\n",i,ans);
        else printf("Case #%d: Impossible\n",i);

    }
    return 0;
}
