#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a>b)
            swap(a,b);
            int m=max(a,b);
            int c=0;
        while(a>0 and b>0)
              {
                  a+=2;
                  b-=1;
                   if(b>0)
                    swap(a,b);
                    cout<<c<<endl;
                    c++;
              }
              cout<<c<<endl;
    }
    return 0;
}
