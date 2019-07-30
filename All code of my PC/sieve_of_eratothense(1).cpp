#include<iostream>
#include<cstdio>
#include<cstring>
#define M 18409900
using namespace std;
bool prime[M];
int main()
{
    long long int i,j,n;
    while(cin>>n)
    {
        prime[0] = prime[1] = true;
        for(i = 2 ; i <=n ; i++)
        {
            while(i<=M && prime[i]) i++;
            cout<<i<<"\n";
            for(j = i*i ; j<=n ; j+=i)
                prime[j] = true;
        }
    }

    return 0;
}
