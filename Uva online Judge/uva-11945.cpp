#include<bits/stdc++.h>
using namespace std;
int main()
{

    double t,m;
    int l=0;
    cin>>t;
    while(t--)
    {
        double s=0;
        for(int i=0; i<12; i++)
        {
            cin>>m;
            s+=m;
        }
        s/=12.0;
        //   cout<<s<<endl;
        if(s>999.99)
            printf("%d $%ld,%.2lf\n",++l,(int)(s/1000.0),fmod(s,1000.0));
        else printf("%d $%.2lf\n",++l,s);

        // cout<<++l<<" $"<<s/12.0<<endl;
        // printf("%d $%.2lf\n", ++l, (double)s / 12.0);
    }
    return 0;
}
