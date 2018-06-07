#include<bits/stdc++.h>
using namespace std;
int n,m,lcs[2000][2000];
int main()
{
    string s1,s2;

    while(getline(cin,s1))
    {
        getline(cin,s2);
        n=s1.size();
        m=s2.size();
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {
                if(s1[i-1]==s1[j-1])
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        cout<<lcs[n][m]<<endl;
    }
    return 0;
}
