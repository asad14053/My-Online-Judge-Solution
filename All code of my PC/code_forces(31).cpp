#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T; scanf("%d", &T);
    while (T--) {
        int inp; scanf("%d", &inp);
        ll N = inp;
        ll sum = (1 + N) * N / 2;
        double dM = log2(N);
        ll M = (ll) dM;
        sum -= (1 << (M+1)) - 1;
        sum -= (1 << (M+1)) - 1;
        // printf("%f, %d, %d\n", dM, M, (1 << (M-1)) - 1);
        printf("%I64d\n", sum);
    }

    return 0;
}
