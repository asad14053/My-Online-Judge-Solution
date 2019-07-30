#include <bits/stdc++.h>

#define SZ(x) (( (int)x.size() ) )

using namespace std;
typedef long long ll;
const int N = 50 + 10;

ll n,k;
ll dp[N];
ll f[N];
int c1 = 1, c2 = 2;

int main(){
    cin >> n >> k;
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i < N; ++i){
        f[i] = f[i - 1] + f[i - 2];
    }
    while(n > 0){
        if(k > f[n -  1]){
            cout << c2 << " " << c1 << " ";
            k -= f[n - 1];
            n -= 2;
            c2 += 2; c1 += 2;
        }
        else{
            cout << c1 << " ";
            n --;
            c2 ++;c1++;
        }
    }
    cout << "\n";
    return 0;
}
