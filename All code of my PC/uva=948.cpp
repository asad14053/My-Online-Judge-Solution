#include <stdio.h>
int main()
{
    int prime[3402]={2}, top = 1;
    for(int i = 3; i*i <= 1e9; i += 2){
        int judge = 1;
        for(int j = 2; j*j <= i; j++)
            if(i%j == 0)    judge = 0;
        if(judge)   prime[top++] = i;
    }
    int T, n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i = n+1; ;i++){
            int sum = 0, temp = i, tmp = i, Ans = 0, total = 0;
            for(int j = 0; j < top; j++)
                if(i%prime[j] == 0 && i != prime[j])  total++;
            if(total == 0)   continue;
            while(tmp){
                Ans += tmp%10;
                tmp /= 10;
            }
            for(int j = 0; j < top; j++){
                if(temp%prime[j] == 0)
                    while(temp%prime[j] == 0){
                        temp /= prime[j];
                        int t1 = prime[j];
                        while(t1){
                            sum += t1%10;
                            t1 /= 10;
                        }
                    }
            }
            if(temp != 1){
                while(temp){
                    sum += temp%10;
                    temp /= 10;
                }
            }
            if(sum == Ans)    {printf("%d\n", i);    break;}
        }
    }
    return 0;
}
