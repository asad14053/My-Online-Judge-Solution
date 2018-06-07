#include<iostream>
using namespace std;
int main()
{
    long long n;
    string s;
    while(cin>>n>>s)
    {
        long long sm=1,sz=s.size(),x=n/sz;
        // for(long long i=0;i<x;i++)
        while(n>1)
        {
            sm*=n;
            n-=sz;
        }
        cout<<sm<<endl;
    }

    return 0;
}
