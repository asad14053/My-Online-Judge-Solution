#include<stdio.h>
int main()
{
    unsigned int n = 16;
    printf("Count of leading zeros before 1 in %d is %u",
                                    n, __builtin_clz(n));
    return 0;
}
