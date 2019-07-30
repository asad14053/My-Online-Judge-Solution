#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
    int x,y;
    while(cin>>x>>y)
    {
        bool f=false;
        for(int i=0; i<16; i++)
        {
            if(a[i]==x and a[i+1]==y)
            {
                f=true;
                break;
            }
        }
        if(f)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

