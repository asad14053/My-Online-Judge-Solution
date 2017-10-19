#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    int n, len;
    char in[15];
    scanf("%d\n", &n);
    while (n--)
    {
        scanf("%s\n", in);
        len = strlen(in);

        sort(in, in + len);
        do
        {
            printf("%s\n", in);
        }
        while (next_permutation(in, in + len));

        printf("\n");
    }
}
