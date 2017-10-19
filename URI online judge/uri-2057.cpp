#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int m=a+b+c;
        if(m>=0)
        cout<<m%24<<endl;
        else cout<<m+24<<endl;
    }
    return 0;
}
