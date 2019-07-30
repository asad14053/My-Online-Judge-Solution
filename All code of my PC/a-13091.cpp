#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        string a;
        bool h=false;
        for(int j=0; j<5; j++)
        {
            cin>>a;
            int m=a.find("|");
            int n=a.find(">");
            int o=a.find("<");
            if(n>-1 and o==-1)
            {
                if(m>n)
                {
                    h=true;
                }
                else h=false;

            }
            else if(o>-1 and n==-1)
            {
                if(o>m)
                {
                    h=true;
                }
                else h=false;
            }
            //cout<<m<<" "<<n<<" "<<o<<endl;
        }
        if(h==true)
            printf("Case %d: Thik Ball\n",i);
        else printf("Case %d: No Ball\n",i);
    }
    return 0;
}
