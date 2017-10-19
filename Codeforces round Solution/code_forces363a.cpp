#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f
int main()
{
    long n,b[200000+2],ans=inf;
    string a;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n-1;i++)
        if(a[i]=='R' and a[i+1]=='L')
        ans=min(ans,(b[i+1]-b[i])/2);
     if(ans==inf) cout<<-1<<endl;
     else cout<<ans<<endl;
    return 0;
}
