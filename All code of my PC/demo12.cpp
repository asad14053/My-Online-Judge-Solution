#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        string a=" ",b;
        cin>>b;
        a+=b;
        int l=n/2,mn=min(m,k);
        if(mn<=l)
        {
            for(int i=1;i<=a.size();i++)
            {
                cout<<a[i];
                if(i%mn==0)
                    cout<<endl;
            }
        }
        else cout<<-1<<endl;
    }
    return 0;
}
