#include<stdio.h>
int main()
{
    int h,m;
    char k;
    double t,s;
 while(scanf("%d%c%d",&h,&k,&m)==3)
    {



        if(h==0&&m==0)
            break;
        else if((h>0&&h<=12)&&(m>=0&&m<=59)&&(k==':'))
        {
            t=(11*m/2);
            s=(30*h);
            if(t>s)

            {
                t=(t-s);
                if(t<=360&&t>=180)
                t=360-t;



            }

            else
                t=(s-t);
            printf("%.3lf\n",t);
        }

    }
    return 0;
}

