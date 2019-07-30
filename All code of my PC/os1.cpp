#include<bits/stdc++.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int value=5;
void fork(int id)
{
    if(id==0)
        {
            value+=15;
            return ;
        }
        else if(id>0)
        {
            //wait(1000);
            cout<<"Parent : value = "<<value<<endl;
            return ;
        }
}
int  main()
{
    int n,t,a,b,c,x,y;
    cin>>t;

    while(t--)
    {
        fork(1);
    }
    return 0;
}
