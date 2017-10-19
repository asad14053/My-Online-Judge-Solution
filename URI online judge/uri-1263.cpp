#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,b,z;
    while(getline(cin,s))
    {
        b="";
        stringstream ss(s);
        while(ss>>z)b+=tolower(z[0]);
        int x=0;
        map<char,int>mp;
        char c;
        for(int i=1; i<b.size(); i++)

        {
            if(b[i]==b[i-1])
            {

                if(!mp[b[i]])
                {
                    mp[b[i]]=1;
                    x++;
                    c=b[i];
                 //   cout<<mp[b[i]]<<endl;
                }
            }
            else mp[c]=0;
        }
        cout<<x<<endl;
    }
}
