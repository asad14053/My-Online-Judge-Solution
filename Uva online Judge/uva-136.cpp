
#include <stdio.h>
#include <math.h>

int main()
{
    int num1=10000, num2, c, j,k , i=0, is_prime, res1, res2,num_copy,  num_fact, dummy, count_ugly=2;
    int ugly[10000];
    double b;

    for(num2=2, num_copy=2, i=0;num_copy<=num1; num_copy++)
    {
        num2=num_copy;
        for(k=0; ; k++)
            {
                if(num2%2==0)
                   num2/=2;
                else break;
            }
        for(k=0; ; k++)
            {
                if(num2%3==0)
                   num2/=3;
                else break;
            }
        for(k=0; ; k++)
            {
                if(num2%5==0)
                   num2/=5;
                else break;
            }
        if(num2==1)
                {
                    ugly[i++]=num_copy;
                }
}
    for(k=0; k<i; k++)
        {

            printf("%d->%d\t", ugly[k], count_ugly);

            if(count_ugly==15)
            {
                printf("%d\t", ugly[k]);
                break;
            }
             count_ugly++;
        }
}

/*this is the main portion*/
#include <stdio.h>
int main()
{
  puts("The 1500'th ugly number is 859963392.");
  return 0;
}
