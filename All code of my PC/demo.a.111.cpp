#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maximumSuperiorCharacters function below.
long maximumSuperiorCharacters(vector<int> freq) {

    long sm=0;
    for(int i=0;i<freq.size();i++)
        sm+=freq[i];
    return floor((sm-1)/2);

}

int main()
{
    int T;
    cin >> T;

    vector<int> freqs(26);
    for (int t = 0; t < T; ++t)
    {
        for (int i = 0; i < 5; ++i)
            cin >> freqs[i];

        cout << maximumSuperiorCharacters(freqs) << '\n';
    }

    return 0;
}
