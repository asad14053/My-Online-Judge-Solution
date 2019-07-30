#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b;
    {
        c=(double)(b-a)/(double)a;
        c*=100;
        printf("%.2lf%%\n",c);
    }
    return 0;
}
