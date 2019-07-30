#include<bits/stdc++.h>
using namespace std;
#define m 1000000000
int main()
{

bool   status[m];
   //
   // memset(status,0,sizeof(status));

    int N;
    cin>>N;
    for(long long int i=4; i<=N; i+=2) status[i]=1;
    for(long long int i=3; i<=sqrt(N); i+=2)
    {
        if(status[i]==0)
        {
            for(long long j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1]=1;



for(long long int k=2; k<=N; k++)
{
    if(status[k]==0)
        cout<<k<<"\n";
}
}
