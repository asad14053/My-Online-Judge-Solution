#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        (cin>>n>>s);
        {
            if(s.size()==1)
            {
                if(s=="_")
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                continue;
            }
            if(s.size()==2)
            {
                if(s[0]==s[1])
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                continue;
            }
            int x=s.find('_');bool f=true;
           // cout<<x<<endl;
            if(x>-1)
            {
                map<char,int>mp;
                mp['_']=1;
                int l=s.size();
                for(int i=0;i<l;i++)
                {
                    mp[s[i]]++;
                }
                for(int i=0;i<l;i++)
                {
                    if(s[i]=='_')
                        continue;
                    if(mp[s[i]]>1 and mp['_'])
                            f&=1;
                    else f&=0;
                }
            }
            else
            {
                int l=s.size()-1;
                 for(int i=1; i<l; i++)
                    {
                        if(s[i]==s[i-1] or s[i]==s[i+1])
                            f&=1;
                        else f&=0;
                    }

            }
            if(f)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            }
        }

    return 0;
}

/*

6
2
_A
2
A_
2
__
1
A
1
_

*/

