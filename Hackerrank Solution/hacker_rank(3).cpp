
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,i,j,k1,k2,l,b,min;
    cin>>t;
    if(t<1) return 0;
    while(t--)
    {
        cin>>l>>b;
        if(l<1 || b<1) return 0;
        if(l>b) min=b;
        else min=l;
        for(i=1; i<=min; i++)
            if(l%i==0 && b%i==0)
                j=i;
        k1=l/j;
        k2=b/j;
        cout<<(k1*k2)<<"\n";
    }
    return 0;
}
