#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double a, b, c;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;

        printf("%.1lf\n", (a*2 + b*3 + c*5)/(2.0+3.0+5.0));
    }

    return 0;
}
