#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        if((x-1)%(y-1)!=0)
        {
            puts("cannot do this");
        }
        else
        {
            cout<<(x-1)/(y-1)<<endl;
        }
    }
    return 0;
}
