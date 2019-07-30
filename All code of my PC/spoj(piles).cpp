#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int n,a,d;
    cin>>T;
    while (T--)
    {
    scanf("%d %d %d",&n,&a,&d);
    cout<<n*a+n*(n)/2*(d)<<endl;
    }

    return 0;
}
