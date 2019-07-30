#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;


long long calc(int n)
{
    int root = int(sqrt(n));
    long long res = 0;
    for(int i=1; i <=root; i++)
    {
        res += n/i;
    }
    //root--;
    res = 2*res - root*root;
    return res;
}


int main()
{
    int k, n;
    scanf("%d", &k);
    while(k--)
    {
        scanf("%d", &n);
        printf("%lld\n", calc(n));
    }
    return 0;

}
