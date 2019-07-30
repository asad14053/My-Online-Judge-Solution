#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    while(cin>>n)
    {
        l=1;
        for(int i=1;i<=n;i++)
        {
             for(int k=n-i+1;k>1;k--)
                cout<<" ";
                for(int j=1;j<=2*i-1;j++)
                {
                    l=j;
                    if(l%3>0)     cout<<l--;
                cout<<l;
                l++;
                }
               cout<<endl;


        }
        for(int i=n-1;i>=1;i--)
        {
             for(int k=1;k<n-i+1;k++)
                cout<<" ";
                for(int j=2*i-1;j>=1;j--)
                cout<<"+";

               cout<<endl;


        }
    }
    return 0;
}
