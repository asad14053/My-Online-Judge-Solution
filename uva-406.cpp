#include <stdio.h>
#include <math.h>

long a [1010], index;

void is_prime (long x)
{
    long i, flag = 0;
    long length = (long) sqrt (x);

    for (i = 2; i <= length; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (!flag)
        a [index++] = x;
}

int main ()
{
    long n, c;

    while (scanf ("%ld %ld", &n, &c) != EOF)
    {

        printf("%ld %ld:", n, c);

        index = 0;
        long i;
        for (i = 1; i <= n; i++)
            is_prime (i);

        if (index % 2)
        {
            c = (c * 2) - 1;
            i = (long) (ceil(index/2) - floor(c/2));

            if (i <= 0)
            {
                for (i = 0; i < index; i++)
                    printf(" %ld", a [i]);
            }

            else
            {
                while (i <= (ceil(index/2) + floor(c/2)))
                    printf(" %ld", a [i++]);
            }
        }

        else
        {
            c = c * 2;
            i = ((index/2)+1) - (c/2) - 1;

            if (i <= 0)
            {
                for (i = 0; i < index; i++)
                    printf(" %ld", a [i]);
            }

            else
            {
                while (i < ((index/2) + (c/2)))
                    printf(" %ld", a [i++]);
            }
        }
        printf ("\n\n");
    }

    return 0;
}
