#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[13][32];
    string s[8]= { "","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int l=6;
    for(int i=12; i>=1; i--)
    {
        for(int j=d[i]; j>=1; j--)
        {
            m[i][j]=l;
            l--;
            if(l<1) l=7;
        }
    }
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<s[m[a][b]]<<endl;
    }
    return 0;
}
