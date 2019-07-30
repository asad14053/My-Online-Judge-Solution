#include<bits/stdc++.h>
using namespace std;
void knapsack(int n,double w[],double p[],double ca)
{
    double x[20]= {0.0},tp=0.0,u;
    int i;
    u=ca;
    for( i=0; i<n; i++)
    {
        if(w[i]>u)
            break;
        else
        {
            x[i]=1.0;
            u=u-w[i];
            tp=tp+p[i];
        }
    }
    if(i<n)
        x[i]=u/w[i];
    tp=tp+(x[i]*p[i]);

    cout<<"Maximum profit:"<<tp<<endl;
}

int main()
{
    int n;
    double p[20],w[20],r[20],ca;
    cout<<"Enter the number of item: ";
    while(cin>>n)
    {
        cout<<" Weight | Profit:"<<endl;
        for(int i=0; i<n; i++)
            cin>>w[i]>>p[i];
        cout<<"Enter the capacity: ";
        cin>>ca;

        for(int i=0; i<n; i++)
            r[i]=p[i]/w[i];
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
            {
                if(r[i]<r[j])
                {
                    swap(r[i],r[j]);
                    swap(p[i],p[j]);
                    swap(w[i],w[j]);
                }
            }
        knapsack(n,w,p,ca);
    }
}
/*
7
2 10
3 5
5 15
7 7
1 6
4 18
1 3
15

3
18 25
15 24
10 15
20
*/


