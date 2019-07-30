#include<bits/stdc++.h>
using namespace std;
bool f[1000+10];
int fib[20],n;
int main()
{
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<18; i++)
    {
        int x=fib[i]=fib[i-1]+fib[i-2];
        f[x]=true;
    }

    while(cin>>n && n)
    {
        if(n==1 || !f[n])
            cout<<"Alicia"<<endl;
        else
            cout<<"Roberto"<<endl;
    }

    return 0;
}
