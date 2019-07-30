#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[8],w[8],sc,un,i,j,p,q,sm1;
    double sr,ff,kk,sm;
    //for(;;)
    {
        sm=0;
        for(i=1;i<=5;i++) cin>>m[i];
        for(i=1;i<=5;i++) cin>>w[i];
        cin>>sc>>un;
        for(i=1;i<=5;i++)
        {
            ff=((1.0-((double)m[i]/250.0))*(i*500.0))-(50.0*w[i]);
            kk=.3*(i*500.0);
            sr=max(kk,ff);
            sm+=sr;
        }
        sc*=100;
        un*=50;
        sm=sm+sc-un;
        printf("%.0lf\n",sm);
    }
}
