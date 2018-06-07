#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
unsigned long long int happy[MAX];
void preCalHappy()
{
    unsigned long long int i,j,k,temp,hold,sum;
    for(i=1; i<=99999; i++)
    {
        temp=i;
        k=1;
        for(j=1; j<=10; j++)
        {
            if(temp==1)
            {
                happy[i]=k;
                break;
            }
            k++;
            hold=temp;
            sum=0;
            while(hold>=10)
            {
                sum+=(hold%10)*(hold%10);
                hold=hold/10;
            }
            sum+=(hold%10)*(hold%10);
            temp=sum;

        }

    }

}

int main()
{
    preCalHappy();
    unsigned long long int in1,in2,i,m;
    m=0;
    while (scanf("%llu %llu",&in1,&in2)==2)
    {
        if(m!=0)printf("\n");
        m=1;
        if(in1>in2)
            swap(in1,in2);
        for(i=in1; i<=in2; i++)
        {
            if(happy[i])printf("%llu %llu\n",i,happy[i]);

        }

    }

    return 0;
}
