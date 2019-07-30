#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x=0;
    while(cin>>t)
    {
        x=0;
        string s;
        while(t--)
        {
            cin>>s;
            if(s[0]=='X')
            {
                if(s[1]=='+')
                    x++;
                else
                    x--;
            }
            else
            {
                if(s[0]=='+')
                {
                   ++x;
                }
                else --x;
            }

        }cout<<x<<endl;
    }

    return 0;
}
