#include <stdio.h>
int main()
{
    int n,i,j,k,l,m,o,counter = 0;
    int lotto[13];
    while(scanf("%d", &n) && n != 0)
    {
        if(counter != 0)
        {
            printf("\n");
        }
        counter++;
        for(i = 0 ; i < n ; i++)
        {
            scanf("%d", &lotto[i]);
        }
        for(i = 0 ; i < n ; i++)
        {
            for(j = i+1 ; j < n ; j++)
            {
                for(k = j+1 ; k < n ; k++)
                {
                    for(l = k+1 ; l < n ; l++)
                    {
                        for(m = l+1 ; m < n ; m++)
                        {
                            for(o = m+1 ; o < n ; o++)
                            {
                                printf("%d %d %d %d %d %d\n", lotto[i], lotto[j], lotto[k], lotto[l], lotto[m], lotto[o]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
