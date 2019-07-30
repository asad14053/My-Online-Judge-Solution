#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        printf("%lf\n",acos(-1)*b/2*sqrt(b/2*b/2-a/2*a/2));
    }
    return 0;
}
