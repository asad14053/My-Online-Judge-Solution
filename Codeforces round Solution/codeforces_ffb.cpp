#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    int a;

    while(cin>>s)
    {
        ll m=0,sum=0,x;
        ll a[100];
        cin>>x;
        for(int i=1; i<=26; i++)
        {
            cin>>a[i];
            m=max(m,a[i]);
        }
        //cout<<m<<endl;
        for(int i=0; i<s.size(); i++)
            sum+=(i+1)*a[s[i]-'a'+1];
           // cout<<sum<<endl;
        for(int i=s.size()+1; i<=(s.size()+x); i++)
            sum+=i*m;
        cout<<sum<<endl;

    }
    return 0;
}
