#include<bits/stdc++.h>
using namespace std;
#define MAX	50000
typedef long long ll;
typedef unsigned long long L;
ll calc(double N, double K)
{
    double root1 = (-3*K + sqrt(12*N/K - 3*K*K))/6;
    double root2 = (-3*K - sqrt(12*N/K - 3*K*K))/6;
    if( root1 >= 0 )
        return (ll)root1;
    return (ll)root2;
}

int main()
{
    while( true )
    {
        ll N, K, k;
        cin >> N;
        if( N == 0 )
            break;
        K = (ll) ceil(pow(N, 1/3.0)) + 1;
        bool stat = false;
        for(k=1; k<=K; k++)
        {
            ll Y = calc((double)N, (double)k);
            ll X = k + Y;
            if( X >= 0 && Y >= 0 && X*X*X - Y*Y*Y == N )
            {
                cout << X << " " << Y << endl;
                stat = true;
                break;
            }
        }
        if ( !stat )
            cout << "No solution"<<endl;;
    }
    return 0;
}
