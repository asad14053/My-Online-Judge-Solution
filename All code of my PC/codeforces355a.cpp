#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int n,m,s=0;
    (cin>>n>>m);
    {
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a>m)
                s+=2;
            else s+=1;
        }
        cout<<s<<endl;
    }
    return 0;
}
