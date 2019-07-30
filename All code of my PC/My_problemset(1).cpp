//odd or not odd
#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("w.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    string a;
    int n;
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            int l=a.size();
            if(a[l-1]=='1')
                cout<<"Case "<<i<<": "<<"Odd"<<endl;
            else cout<<"Case "<<i<<": "<<"Even"<<endl;
        }
    }
    return 0;
}
