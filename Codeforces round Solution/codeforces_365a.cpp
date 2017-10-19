#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=0,q=0;
    while(n--)
    {
        int x,y;

        bool c=false;
        cin>>x>>y;
        if(x>y)
            p++;
        else if(x<y)
            q++;
        else if(x==y)
            continue;
    }
    if(p>q)
        cout<<"Mishka"<<endl;
    else if(p==q)
        cout<<"Friendship is magic!^^"<<endl;
    else cout<<"Chris"<<endl;
    return 0;
}
