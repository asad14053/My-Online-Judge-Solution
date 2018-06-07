#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch;
    int n,b,h,w,p,x;
    while(cin>>n>>b>>h>>w)
    {
        int mn=1e9;
        for(int i=0; i<h; i++)
        {
            cin>>p;
            for(int j=0; j<w; j++)
            {
                cin>>x;
                if(x>=n)
                    mn = min(mn, n*p);
            }
        }
        if(mn>b)     cout<<"stay home\n";
        else cout<<mn<<"\n";
    }
    return 0;
}
