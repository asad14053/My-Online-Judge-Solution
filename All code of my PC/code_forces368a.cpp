#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(cin>>n>>m)
    {
        bool p=true;
        char x;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>x;
                if(x=='W' or x=='B' or x=='G')
                    p&=true;
                else
                {
                    p&=false;
                }
                //cout<<p<<endl;
            }
        }
        if(!p)
            cout<<"#Color"<<endl;
        else cout<<"#Black&White"<<endl;
    }
    return 0;
}
