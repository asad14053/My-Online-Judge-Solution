#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int q, m;
    while(scanf("%d %d", &q, &m), q > 0 || m > 0)
    {
        int vec[q], repeated[q+1];
        memset(repeated, 0, sizeof(repeated));

        for(int i = 0; i < q; i++)
            scanf("%d", &vec[i]);

        for(int i =1; i < q+1; i++){
            for(int j = 0; j < q; j++){
                if(vec[j] == i)
                    repeated[i]++;

            }
        }
        int sum =0;
        for(int i = 1; i < q+1; i++)
            if(repeated[i] >= m && repeated[i] != 0)
                sum++;

        printf("%d\n", sum);
    }
    return 0;
}
