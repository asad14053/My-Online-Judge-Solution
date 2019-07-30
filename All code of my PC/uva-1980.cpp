#include<bits/stdc++.h>
using namespace std;
long long p(long long n)
{
    long long s=1;
    for(int i=1;i<=n;i++)
        s*=i;
    return s;
}
int main()
{
   // p();
    int n;
    string a;
    while(cin>>a)
    {if(a=="0") break;
        int l=a.size();

        cout<<p(l)<<endl;
    }
    return 0;
}
