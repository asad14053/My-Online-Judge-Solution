#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        for(int i=0;i<a.size();i++)
        {
            int x=(a[i]-'0')^(b[i]-'0');
            cout<<x;
        }
        cout<<endl;
    }
}
