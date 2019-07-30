#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000+2
long a[MAX];
int main()
{

    long t,o=1;
    while(cin>>t,t)
    {
        for(long i=0;i<t;i++)
            cin>>a[i];
        int c=0;
        for(long i=1;i<t-1;i++)
        {

            if(a[i]>a[i-1] and a[i]>a[i+1])
            {
                c++;
            }
        }
        cout<<"Case "<<o++<<": "<<c<<endl;

    }
}
