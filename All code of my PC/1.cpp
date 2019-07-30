#include <cstdlib>
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
   return b==0 ? a:gcd(b,a%b);
}

int lcm(int a,int b)
{
    return a*(b/gcd(a,b));
}
int main(int argc, char** argv) {
    int n,count=0;
    int numbers[60];

    scanf("%d",&n);
    while(n!=0)
    {
        count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&(numbers[i]));
        }
        for(int i=0;i<n;i++)
            printf("%d  ",numbers[i]);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)if(i!=j)
            {
                if(gcd(numbers[i],numbers[j])==1){
                    printf("%d %d\n",numbers[i],numbers[j]);
                    count++;
                    }
            }
        count=count/2;
        if(count==0)
            printf("No estimate for this data set.\n");
        else
        {
            double pi=sqrt(60.0/count);
            printf("%f\n",pi);
        }
        scanf("%d",&n);
    }
    return 0;
}
