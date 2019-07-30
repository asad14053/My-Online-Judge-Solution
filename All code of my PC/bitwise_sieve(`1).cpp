#include<bits/stdc++.h>
using namespace std;
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N|(1<<pos);
}
#define mx 1000000000
unsigned long long status[(mx/32)+2];
void sieve()
{
    int i, j, sqrtN,N,k;
    while(cin>>N)
    {

    sqrtN = int( sqrt( N ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

        if( Check(status[N>>5],N&31)==0)
            cout<<"prime"<<endl;
        else
        {
            for(int i=2;i*i*i<=N;i++)
            {
                if(N%i==0)
                {
                   k=i; break;
                }
            }
            cout<<k<<endl;
        }
}
}
int main()
{
    sieve();
    return 0;
}
