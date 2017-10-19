#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char b;
    while(cin>>b>>a,b!='0',a!="0")
    {
        map<char,int>mp;
        string m;
        for(int i=0;i<a.size();i++)
            if(a[i]!=b)
                //if(a[i]!='0' )
            {
                m+=a[i];
                mp[a[i]]++;
            }
            int j=0;
            while(m[j]=='0')
                j++;
            if(!m.size() or mp['0']==m.size())
            cout<<0<<endl;
            else
            {for(int i=j;i<m.size();i++)
             cout<<m[i];
            cout<<endl;
            }
    }
    return 0;
}
