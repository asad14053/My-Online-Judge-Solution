#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n,sum=0,i=0,x;
        cin>>n;
        while(i!=n)
        {
            cin>>x;
            if(x==0)
                i++;
            sum+=x;
        }
        cout<<"Case "<<k++<<": "<<sum<<endl;

    }
    return 0;
}
