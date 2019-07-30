#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int l=s.size(),c=0;
        for(int i=0;i<l;i++)
            if(s[i]=='1')
            c++;
        if(c%2)
            cout<<s<<1<<endl;
        else cout<<s<<0<<endl;
    }
    return 0;
}
