#include<cstdio>

int m, coins[] = { 1, 5, 10, 25, 50 };
long ways[30010] = { 0 };

int main()
{
    ways[0] = 1;
    for(int i = 0; i < 5; i++)
        for(int j = coins[i]; j <= 30000; j++)
            ways[j] += ways[ j-coins[i]];
    while(scanf("%d", &m) == 1)
        printf(ways[m] == 1? "There is only %ld way to produce %d cents change.\n" :
               "There are %ld ways to produce %d cents change.\n", ways[m], m);
}

