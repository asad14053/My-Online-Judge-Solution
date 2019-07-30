#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long int n[1000],z,v,j,i,l,c;
    double p;
    char t[10000],x[200];
    while(cin>>z)
    {
        for(int k=1; k<=z; k++)
        {
            p=0;
           cin>>v;
           getchar();
           memset(n,0,sizeof(n));
            for(j=1; j<=v; j++)
                cin>>x[j]>>n[j];
             cin>>l;
             getchar();
            for(j=1; j<=l; j++)
            {

                gets(t);
                for(i=1; i<=v; i++)
                {
                    for(c=0; c<(int)strlen(t); c++)
                        if(t[c]==x[i])p+=n[i];

                }
            }
           printf("%.2lf$\n",p/100);
        }
    }
    return 0;
}
