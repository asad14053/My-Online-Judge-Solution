#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,ar[100000];
    while(cin>>a>>b)
    {
        c=0;
    cin>>ar[0];
    for(int i=1;i<b;i++)
    {
        cin>>ar[i];
        int l=abs(ar[i]-ar[i-1]);
        if(l<=a)

            c=1;
        else c=0;
    }
    if(c) cout<<"YOU WIN"<<endl;
    else cout<<"GAME OVER"<<endl;
    }
    return 0;
}
