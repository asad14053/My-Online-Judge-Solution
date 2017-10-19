#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s,x;
    while(cin>>n>>t)
    {
        cin>>s;
        int l=s.size();
        for(int j=1;j<=t;j++)
        for(int i=0; i<(l-1); i++)
            if(s[i]=='B' and s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
              // cout<<s<<" "<<i<<endl;
               i++;

            }
            cout<<s<<endl;
    }
    return 0;
}
