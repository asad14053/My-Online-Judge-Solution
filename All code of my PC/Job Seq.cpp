#include<bits/stdc++.h>
using namespace std;
struct info
{
    int pfit,ded;
} in[1000];
bool cmp(info a, info b)
{
    return a.pfit>b.pfit;
}
int main()
{
    int nj,i,j,sm,rslt[1000];
    while(cin>>nj)
    {
        sm=0;
        memset(rslt,0,sizeof(rslt));
        for(i=0; i<nj; i++) cin>>in[i].pfit>>in[i].ded;
        sort(in,in+nj,cmp);
        for(i=0; i<nj; i++)
        {
            if(rslt[in[i].ded]==0)
            {
                rslt[in[i].ded] = 1;
                sm+=in[i].pfit;
            }
            else
            {
                for(j=in[i].ded-1; j>=1; j--)
                {
                    if(rslt[in[j].ded]==0)
                    {
                        rslt[in[i].ded] = 1;
                        sm+=in[i].pfit;
                        break;
                    }
                }
            }
        }
        cout<<"Total Profit = "<<sm<<endl;
    }
    return 0;
}
