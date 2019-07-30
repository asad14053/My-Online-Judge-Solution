#include<bits/stdc++.h>
using namespace std;
int profit[1010][1010],value[1010],weight[1010];
int main()
{

    int knapsack_weight,n,t;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>value[i]>>weight[i];
        }
        int a,sum=0;
        memset(profit,0,sizeof(profit));
            cin>>knapsack_weight;
            for(int i=1; i<=n; i++)
            {
                for(int w=1; w<=knapsack_weight; w++)
                {
                    if(weight[i]>w)
                    {
                        profit[i][w] = profit[i-1][w];
                    }
                    else
                    {
                        if(profit[i-1][w]>profit[i-1][w-weight[i]]+value[i])
                            profit[i][w] = profit[i-1][w];
                        else
                            profit[i][w] = profit[i-1][w-weight[i]]+value[i];
                    }
                }
            }
            sum+=profit[n][knapsack_weight];
        printf("%d\n",sum);

    return 0;
}

/*
5
120 1
400 7
280 4
150 3
200 4
10
*/
