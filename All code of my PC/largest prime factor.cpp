#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ull N,t;
    cin >> t;
    while (t--)
    {
        cin >> N;
        ull b = N;

        vector<ull> fact;
        vector<int> pow;
        for (ull f = 2; f * f <= N; ++f)
        {
            int p = 0;
            while (N % f == 0)
            {
                ++p;
                N /= f;
            }
            if (p > 0)
            {
                fact.push_back(f);
                pow.push_back(p);
            }
        }
        if (N > 1)
        {
            fact.push_back(N);
            pow.push_back(1);
        }
        sort(fact.begin(),fact.end());

        ull k=fact.size();
        cout<<fact[k-1]<<endl;
    }
    return 0;
}


