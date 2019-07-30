#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,j=1;
    bool c;
    cin>>t;
    while(t--)
    {
        c=true;
        for(int i=0;i<13;i++)
        {
            cin>>m;
            c&=m>0;
        }
        cout<<"Set #"<<j++<<": ";
        c?cout<<"Yes":cout<<"No";
        cout<<endl;
    }

    return 0;
}
