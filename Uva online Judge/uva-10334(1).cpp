#include <cstdio>
using namespace std;
int fib[1001][501]={0};

int main()
{
    fib[0][0]=1;
    fib[1][0]=2;
    for (int i=2; i<=1000; i++){
        for (int j=0; j<500; j++){
            fib[i][j] += fib[i-2][j]+fib[i-1][j];
            if (fib[i][j]>9){
                fib[i][j] -= 10;
                fib[i][j+1]++;
            }
        }
    }
    int n;
    while (scanf("%d",&n)!=EOF) {
        int i = 500;
        while (fib[n][--i] == 0);
        for (; i>=0; i--)
            printf("%d",fib[n][i]);
        printf("\n");
    }
    return 0;
}
