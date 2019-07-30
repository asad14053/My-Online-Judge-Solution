#include<bits/stdc++.h>
using namespace std;

int main()
{
    int max= 1000000;

    long ar[max];
   memset(ar,0,sizeof(ar));
    long long a,b,t;
    cin>>t;
    int c=0;
    while(t--)
    {

        cin>>a>>b;
        for(long long i=a; i<=b; i++)
            if(!ar[i])
            {
                ar[i]=1;
                c++;
            }
    }
    cout<<c<<endl;

    return 0;

}
