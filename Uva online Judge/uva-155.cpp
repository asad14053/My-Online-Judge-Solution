#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,t,l,x,cnt;
    string ss;
    cin>>t;
    while(t--)
    {
        cin>>ss;
        l=ss.length();
        x=1;
        cnt=0;
        for(i=0;i<l;i++)
        {

            if(ss[i]=='O')
            {
             cnt+=x;
             if(i+1<l && ss[i+1]=='O')
                    x++;
             else x=1;
            }

        }
        cout<<cnt<<endl;
    }
return 0;
}
