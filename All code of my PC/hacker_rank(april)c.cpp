#include <bits/stdc++.h>

using namespace std;
#define ll long long 
#define vll                 vector<long long>
#define input()             freopen("in0.txt","r",stdin)
#define output()            freopen("out0.txt","w",stdout)
vector<string> split_string(string);

// Complete the maximumSuperiorCharacters function below.
long maxsup(vll charsCount)
 {
     ll length = accumulate(charsCount.cbegin(), charsCount.cend(), 0);
    ll optMaxSup = (length - 1) / 2;

    ll charsUpToLimitLevelCount = 0;
    ll limitLevel = 0;
    for (; charsUpToLimitLevelCount <= length - optMaxSup && limitLevel < (int)charsCount.size(); ++limitLevel) {
        charsUpToLimitLevelCount += charsCount[limitLevel];
    }
    ll supAtLimitLevel = optMaxSup + charsUpToLimitLevelCount - length;
    charsUpToLimitLevelCount -= charsCount[--limitLevel];

    ll matchedSupCount = min(supAtLimitLevel, max(charsUpToLimitLevelCount - 1, 0));
    return optMaxSup - (supAtLimitLevel - matchedSupCount);
}


int main()
{
    input();
    output();
    int T;
    cin >> T;

    vll freqs(27);
    for (int t = 0; t < T; ++t)
    {
        for (int i = 0; i < 26; ++i)
            cin >> freqs[i];

        cout << maxsup(freqs) << '\n';
    }

    return 0;
}