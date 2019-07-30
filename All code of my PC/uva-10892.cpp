#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;

int main()
{
    ull N;
    while (cin >> N, N != 0)
    {
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
        ull C = 0;
        for (int i = 0; i < fact.size(); ++i)
        {
            ull sum = pow[i];
            for (int j = i + 1; j < fact.size(); ++j)
            {
                sum *= 2 * pow[j] + 1;
            }
            C += sum;
        }
        C += 1;

        cout <<b << " " << C << endl;
    }
    return 0;
}
