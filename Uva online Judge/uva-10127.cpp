#include<bits/stdc++.h>
using namespace std;
int long long bigmod(int long long  a ,int p,int m);
int main()
{
    int long long a;
    int long long p,m,n,t;
    int c;

    while(cin>>n)
    {
        c=1;
        t=10;
        a=1;
        while(a%n!=0)
        {
            a=a*t+1;
            c++;
            a=bigmod(a,1,n);
        }
        cout<<c<<endl;
    }



    return 0;
}

int long long  bigmod(int long long  a ,int p,int m)
{
    if(p==0)
        return 1;

    if(p%2==0)
    {
        int c=bigmod(a,p/2,m);
        return ( (c%m) * (c%m) )%m;
    }
    else
        return ( (a%m)* bigmod(a,p-1,m) ) %m;

}
