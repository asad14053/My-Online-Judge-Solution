#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
double di, Dist;
int main()
{
    cin>>a>>b>>c>>d;

    if (a*b ==c * d)
    {
        cout<<"Impossible."<<endl;
        return 0;
    }

    di= a * a + b * b - c * c - d * d;
    di /= 2 * (a * b - c * d);
    Dist = sqrtl(a * a + b * b - 2 * a * b * di) * 1000;

    printf("Distance is %.0lf km.\n",Dist);

    return 0;
}
