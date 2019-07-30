#include<stdio.h>
#include<math.h>
int binary(long bin)
{
    int reminder,sum=0,h=0;
    while(bin!=0)
    {
        reminder=bin%10;
        bin/=10;
        sum+=reminder*pow(2,h++);
    }
    return sum;


}

int main()
{

    int i,a[4],test,j,h,reminder,sum;
    long b[4];
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
        scanf("%ld.%ld.%ld.%ld",&b[0],&b[1],&b[2],&b[3]);
        b[0]=binary(b[0]);
        b[1]=binary(b[1]);
        b[2]=binary(b[2]);
        b[3]=binary(b[3]);


        if(a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2]&&a[3]==b[3])
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }

    return 0;
}
