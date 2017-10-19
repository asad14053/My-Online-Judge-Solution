#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],t;
    cin>>t;
    int m=10000000,k;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(m>a[i])
        {

            m=a[i];
            k=i;
        }
    }
    cout<<k+1<<endl;
    return 0;
}
