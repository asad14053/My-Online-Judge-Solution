#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,a,b;
    while(cin>>k>>a>>b)
    {
        cout<<((b-(b%k+k)%k)-(a+(k-a%k)%k))/k+1<<endl;
    }
}
