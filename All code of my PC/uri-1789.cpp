#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,c;

    while(cin>>t)
    {
        priority_queue<int>p;
        for(int i=0; i<t; i++)
        {
            cin>>c;
            p.push(c);
        }
        c=p.top();
        if(c<10)
            cout<<1<<endl;
        else if(c>=10 and c<20)
            cout<<2<<endl;
        else if(c>=20)
            cout<<3<<endl;

    }
    return 0;
}
