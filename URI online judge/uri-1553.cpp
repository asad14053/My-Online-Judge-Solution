#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k,n,k)
    {
        map<int ,int>a;
        int mx=0,x,c=0;
        while(n--)
        {
            cin>>x;
            a[x]++;
            if(mx<=x) mx=x;
        }
        //cout<<mx<<endl;
        for(int i=0;i<mx+1;i++)
        {
            if(a[i]>=k)
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
/*

7 3
3 3 3 6 6 6 7


*/
