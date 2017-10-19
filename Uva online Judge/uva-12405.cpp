#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        int n;
        cin>>n;
        vector<char>v(n+2);
       // getchar();
        for(int i=0; i<n; i++)
            cin>>v[i];
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]=='.')
            {
                v[i]=v[i+1]=v[i+2]='#';
                c++;
            }
        }
        cout<<"Case "<<j<<": "<<c<<endl;
    }
    return 0;
}
