#include <stdio.h>
int main()
{
    int i,j,k,l,ar[500],N,U,D,cU,cD;
    int fU,fD,uO,dO,h;
    double rU,rD;
   // freopen("in413.txt","r",stdin);
    while(scanf("%d",&ar[0])==1&&ar[0]!=0)
    {
        i=1;
        while(scanf("%d",&ar[i])==1&&ar[i]!=0)i++;

        cD=0;
        cU=0;
        N=0;
        fD=0;
        U=0;
        fU=0;
        D=0;
        uO=0;
        dO=0;
        h=0;
        for(j=1; j<i; j++)
        {
            if(ar[j]>ar[j-1])
            {
                if(dO==1 || h==0)
                {
                    cU++;
                    h=1;
                }
                uO=1;
                dO=0;
                fU=1;
                fD=0;
                U+=N+1;
                N=0;

            }
            if(ar[j]<ar[j-1])
            {
                if(uO==1 || h==0)
                {
                    cD++;
                    h=1;
                }
                uO=0;
                dO=1;
                fU=0;
                fD=1;
                D+=N+1;
                N=0;
            }
            if(ar[j]==ar[j-1])
            {
                if(fD)
                {
                    D+=1;
                    N=0;
                }
                else if(fU)
                {
                    U+=1;
                    N=0;
                }
                else N++;
            }

        }
        if(fD)D+=N;
        else if(fU)U+=N;

        printf("Nr values = %d:  ",i);
        if(cU==0)printf("0.000000 ");
        else
        {
            rU=(double)U/(double)cU;
            printf("%.6lf ",rU);

        }
        if(cD==0)printf("0.000000\n");
        else
        {
            rD=(double)D/(double)cD;
            printf("%.6lf\n",rD);
        }

    }


    return 0;
}
