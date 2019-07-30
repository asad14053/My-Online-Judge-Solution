#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;
double n[22],sum;
int main()

{
    int t,i,k,j,l;
    char w[20];
    n[1]=1;
    for(i=2; i<=20; i++)
        n[i]=i*n[i-1];

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%s",&w);
        l=strlen(w);
        int cnt[26]= {0};
        for(j=0; j<l; j++)
            cnt[w[j]-65]++;
         sum=1;
        for(j=0; j<26; j++)
            if(cnt[j]>1)
                sum*=n[cnt[j]];
               // cout<<sum<<" "<<l<<endl;
        printf("Data set %d: %.0lf\n",i,n[l]/sum);
    }
    return 0;
}
