#include<stdio.h>
int main()
{
    int n = 5;
    printf("Count of 1s in binary of %d is %d ",n, __builtin_popcount(n));
    return 0;
}
