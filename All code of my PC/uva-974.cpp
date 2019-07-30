#include<stdio.h>
int main()
{

    int k[40001]= {0};
    k[9]=k[45]=k[55]=k[99]=k[297]=k[703]=k[999]=k[2223]=k[2728]=k[4879]=k[4950]=k[5050]=k[5292]=k[7272]=k[7777]=k[9999]=k[17344]=k[22222]=k[38962]=1;

/* 9, 45, 55, 99, 297, 703, 999 , 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999 , 17344, 22222, 38962 */

    int t,i,j,x,y,flg;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&x,&y);
        flg=0;
        printf("case #%d\n",i);
        for(; x<=y; x++)
        {
            if(k[x]==1)
            {
                printf("%d\n",x);
                flg=1;
            }
        }
        if(flg==0)
            printf("no kaprekar numbers\n");
        if(i<t)
            printf("\n");
    }
    return 0;
}


