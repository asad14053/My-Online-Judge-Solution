#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    while(cin>>n,n)
        while(n--)
        {
            int c=0,m=0;
            for(int i=0; i<5; i++)
            {
                //m=0;
                cin>>a[i];
                if(a[i]>=0 and a[i]<=127)
                {
                    c++;
                    if(c==1)
                        m=i;

                }
            }
            //  cout<<"m--"<<m<<endl;
            if(c==1)
                cout<<(char)(m+65)<<endl;
            else if(c>=2 || !c) cout<<"*"<<endl;

        }

    return 0;
}
