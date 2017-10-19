#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='4' or s[i]=='7')
                k++;
        }
        if(k==7 or k==4)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
