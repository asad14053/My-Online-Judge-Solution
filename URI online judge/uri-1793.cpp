#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a;
    while(cin>>n,n)
    {
        int r=10,t=-10000;
        for(int i=0;i<n;i++)
          {
              cin>>a;
            if(i)r+=min(a-t,10);
            t=a;
          }
        cout<<r<<endl;
    }
}
