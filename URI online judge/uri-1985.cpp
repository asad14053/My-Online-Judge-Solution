#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={1001,1002,1003,1004,1005};
    double b[7]={1.5,2.5,3.5,4.5,5.5};
    map<int,double>ab;
    for(int i=0;i<5;i++)
        ab[a[i]]=b[i];
    int t,m,n;
    cin>>t;
    double sum=0;
    while(t--)
    {
        cin>>m>>n;
        sum+=(double)((ab[m])*n);
    }
    printf("%.2lf\n",sum);
    return 0;
}
