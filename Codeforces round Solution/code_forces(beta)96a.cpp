#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int f=0;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
