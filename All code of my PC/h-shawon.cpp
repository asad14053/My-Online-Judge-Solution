#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<endl;
        while(n--)
        {
        char b[50];
        long long y;
        cin>>b>>y;
        printf("%-25s%04lld\n",b,y);
        }
    }
}
