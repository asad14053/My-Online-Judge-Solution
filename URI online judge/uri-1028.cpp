#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    int n, a, b;

    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        cout << gcd(a,b) << endl;
    }

    return 0;
}
