#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sze;
    cin>>sze;
    long long matrix[501][501]; // = {{4,9,2},{3,5,7},{8,1,6}};
 long long row, column = 0;
    long long sum, sum1, sum2;
    long long flag = 0;

    // printf("\nEnter matrix : ");
    for (row = 0; row < sze; row++)
    {
        for (column = 0; column < sze; column++)
            scanf("%d", &matrix[row][column]);
    }
    sum = 0;
    for (row = 0; row < sze; row++)
    {
        for (column = 0; column < sze; column++)
        {
            if (row == column)
                sum = sum + matrix[row][column];
        }
    }
    for (row = 0; row < sze; row++)
    {
        sum1 = 0;
        for (column = 0; column < sze; column++)
        {
            sum1 = sum1 + matrix[row][column];
        }
        if (sum == sum1)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    for (row = 0; row < sze; row++)
    {
        sum2 = 0;
        for (column = 0; column < sze; column++)
        {
            sum2 = sum2 + matrix[column][row];
        }
        if (sum == sum2)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    long long sm2=0,sm=0;
        if(sum==sum1 and sum==sum2 or flag)
        cout<<(sum-sum1)<<endl;
        else cout<<-1<<endl;

    return 0;
}
