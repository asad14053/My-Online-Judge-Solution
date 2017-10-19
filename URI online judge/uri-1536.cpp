#include <cstdio>

int main()
{
    int n, t_1_1, t_2_1, t_1_2, t_2_2;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d x %d", &t_1_1, &t_2_1);
        scanf("%d x %d", &t_2_2, &t_1_2);

        if (t_1_1 + t_1_2 > t_2_1 + t_2_2)
        {
            puts("Time 1");
        }
        else if (t_1_1 + t_1_2 < t_2_1 + t_2_2)
        {
            puts("Time 2");
        }
        else if (t_1_2 > t_2_1)
        {
            puts("Time 1");
        }
        else if (t_1_2 < t_2_1)
        {
            puts("Time 2");
        }
        else
        {
            puts("Penaltis");
        }
    }

    return 0;
}
