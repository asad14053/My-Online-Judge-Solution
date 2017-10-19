#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {cin>>x;
          sum+=x;
        }
        n+=1;
        int c=0;
        for(int i=1;i<=5;i++)
        if((sum+i)%n!=1)
         c++;
         cout<<c<<endl;
    }
    return 0;
}
