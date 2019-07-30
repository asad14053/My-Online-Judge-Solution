#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    while(cin>>n>>m)
    {
        vector<int>v1;
        int v[n+2][m+2];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                cin>>v[i][j];
            }
        for(int i=1; i<=m; i++)
            v1.push_back(i);
        int c=0;
        for(int i=0; i<n; i++)
            {for(int j=0; j<m; j++)
                if(v[i][j]!=v1[j])
                {
                    c++;
                    //cout<<v1[i]<<" "<<i<<endl;
                }
            }
       // cout<<c<<endl;
        if((2*n+1)>=c)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
