#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    double c[3000],a,b,a1,S;
    cin>>T;
    for(int j=0; j<T; j++)
    {
        cin>>n;
        cin>>a>>b;
        for(int i=0; i<n; i++)
            cin>>c[i];
        S=0;
        for(int i=0; i<n; i++)
            S+=2*(n-i)*c[i];
        a1=(n*a+b-S)/(n+1);
        printf("%.2f\n",a1);
        if(j!=T-1)
            printf("\n");
    }
    return 0;
}
