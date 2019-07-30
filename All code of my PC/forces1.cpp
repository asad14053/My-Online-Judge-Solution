#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,i=0;
    while(cin>>n)
    {
        int sum=0;
        while(n--)
        {
            cin>>a>>b;
            sum+=a*b-1;
        }
        sum-=i*3;
        cout<<sum<<endl;
        i++;
    }
    return 0;
}
