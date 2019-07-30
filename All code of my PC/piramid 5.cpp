#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
             for(int k=n-1+i;k>1;k--)
                cout<<" ";
                for(int j=1;j<=2*i-1;j++)
                cout<<"*";

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
