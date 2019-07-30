#include<bits/stdc++.h>
using namespace std;
int q,e,w,t=0;
string a[104];
int main()
{
    cin>>q;
    for (int i=0; i<q; i++)
    {
        cin>>a[i];
        for (int j=0; j<q; j++)
            if (a[i][j]=='#')
                t++;
    }
    for (int i=1; i<q-1; i++)
        for (int j=1; j<q-1; j++)
        {
            if (a[i][j]=='#'&&a[i-1][j]=='#'&&a[i+1][j]=='#'&&a[i][j-1]=='#'&&a[i][j+1]=='#')
                a[i-1][j]=a[i][j+1]='.',t-=5;
        }
    if (t) cout<<"NO";
    else cout<<"YES";
}
