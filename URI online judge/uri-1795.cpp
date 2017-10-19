#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a[24];
    for(int i=0;i<=21;i++)
        a[i]=pow(3,i);
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }

    return 0;
}
