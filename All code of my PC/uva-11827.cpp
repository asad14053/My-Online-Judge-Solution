#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}

int main ()
{
    int t,ar[100000];
    cin>>t;
    string s;
    getchar();
    while(t--)
    {
        memset(ar,0,sizeof(ar));
        getline(cin,s);
        int i=0;
        stringstream ss(s);
        while(ss>>ar[i])
            ++i;
        int gd =0;
        for(int j=0; j<i; j++)
        {
            for(int k=j+1; k<i; k++)
                gd=max(gd,gcd(ar[j],ar[k]));
        }
        cout<<gd<<endl;
    }
    return 0;
}

