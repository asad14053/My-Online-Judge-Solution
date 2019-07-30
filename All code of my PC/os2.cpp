#include<bits/stdc++.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int c=0;
void fork(int id)
{
    if(id<0) return ;
     fork(id-1);
     c++;
     fork(id-1);
     cout<<c<<endl;
}
int  main()
{
    int n,t,a,b,x,y;
    cin>>t;

    while(t--)
    {
        fork(1);
        fork(1);
        fork(1);
        cout<<c<<endl;
    }
    return 0;
}

