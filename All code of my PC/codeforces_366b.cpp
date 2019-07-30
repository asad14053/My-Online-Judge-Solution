#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long sum;
    long long n,val;
    while(scanf("%I64d",&n)==1)
    {
        sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%I64d",&val);
            sum=sum+val;
            sum--;
            if(sum%2==1)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
