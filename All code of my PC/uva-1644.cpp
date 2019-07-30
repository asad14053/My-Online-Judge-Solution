#include<bits/stdc++.h>
using namespace std;
bool b[1299709+2];
bool is_prime(int n)
{
    for(int i=3;i<=sqrt(n);i+= 2)
    {
        if (n%i==0) return false;
    }
    return true;
}

int main()
{
    int k;
    vector<int> primes;
    primes.push_back(2);
    for (int i=3;i<=1299709;i+=2)
        if (is_prime(i))
            primes.push_back(i);
    while (cin>>k)
    {
        if (k == 0) break;
        for(int i=0;i<primes.size();i++)
        {
            if (primes[i]==k)
            {
                cout <<"0"<< endl;
                break;
            }

            if (primes[i]>k)
            {
                cout <<primes[i]-primes[i-1]<< endl;
                break;
            }
        }
    }
    return 0;
}
