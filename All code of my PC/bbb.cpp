#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        double z=-cos(y)+cos(x);
        printf("%.2lf\n",abs(z));
    }
    return 0;
}
