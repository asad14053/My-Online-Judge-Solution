#include<bits/stdc++.h>
using namespace std;///find ans with max occurance of char with lexographical order .......
struct n
{
    char c;
    int p;
    bool operator<(const n&w )const
    {
        return w.p>p;
    }
}a[27];
int main()
{
    string s;
    char b[27];
    while(cin>>s)
    {
        map<char,int>mp;
        int k=0;
        for(int i=0;i<s.size();i++)
            {if(!mp[s[i]])
               b[k++]=s[i];
                mp[s[i]]++;
            }
            sort(b,b+k);
            int x=mp.size();
            for(int i=0;i<x;i++)
                a[i].c=b[i],a[i].p=mp[b[i]];
            sort(a,a+x);
            for(int i=0;i<x;i++)
                cout<<a[i].c<<" "<<a[i].p<<endl;

        //cout<<
    }
    return 0;
}

