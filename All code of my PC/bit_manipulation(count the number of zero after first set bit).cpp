#include<stdio.h>
int main()
{
    int n = 16;
    printf("Count of zeros from last to first "
           "occurrence of one is %d",__builtin_ctz(n));
    return 0;
}
