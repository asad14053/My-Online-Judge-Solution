#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    while(cin>>t)
    {

        string s;

        int b[1000];
        int cnt=0;
        while(t--)
        {
            int c=0;
            cin>>s;
            int l=s.size();set<int>a;
            memset(b,0,sizeof(b));
            for(int i=0; i<l; i++)
               b[s[i]-96] ++;
            // cout<<b[s[i]-96]<<endl;

            for(int j=0; j<140; j++)
            {
                if(b[j])
                {
                    a.insert(b[j]);
                    c++;
                  //  cout<<c<<endl;
                }
            }
            if(a.size()==c and a.size()!=1)
                ++cnt;
           // cout<<cnt<<endl;

        }
        cout<<"Case "<<++i<<": "<<cnt<<endl;

    }

    return 0;
}
