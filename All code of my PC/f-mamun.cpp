#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   //freopen("w.txt","w",stdout);
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]+3)>122)
                s[i]=s[i]-23;
            else s[i]=s[i]+3;
        }
        cout<<"Case "<<j<<": "<<s<<endl;
    }
    return 0;
}
