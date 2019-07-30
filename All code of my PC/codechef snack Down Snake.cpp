#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sz,i,j,h,t,p,q,n,T;

    string s;
    cin>>T;
    while(T--)
    {
        cin>>n>>s;
        h=0;
        t=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='H') h++;
            else if(s[i]=='T') t++;
        }
        if(h!=t) cout<<"Invalid"<<endl;
        else
        {
            j=0;p=0;q=0;
            for(i=0;i<n;i++)
            {
                if(s[i]=='H') p++;
                else if(s[i]=='T') q++;
                if(p-q!=0&&p-q!=1)
                {
                   cout<<"Invalid"<<endl;
                   j=1;
                   break;
                }
            }
            if(j==0) cout<<"Valid"<<endl;
        }
    }
}
