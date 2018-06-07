#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    long int n,i,j,seed,pre,arr[100001],step,mod,l,cou;
    while(scanf("%ld %ld",&step,&mod )==2)
    {
        seed =0;
        pre = (seed + step)%mod;
        arr[0]= pre;
        //printf("%ld",pre);
        i=1;
        while(true)
        {
            arr[i] = (arr[i-1] + step)%mod;
            if(arr[i]==pre)
                break;
            i++;

        }
        l=i;

        if(l == mod)
        {
            printf("%10ld%10ld    Good Choice\n\n",step,mod);

        }

        else
        {
            printf("%10ld%10ld    Bad Choice\n\n",step,mod);
        }

    }
    return 0;
}
