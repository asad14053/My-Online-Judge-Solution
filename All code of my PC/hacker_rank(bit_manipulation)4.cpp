#include <bits/stdc++.h>
using namespace std;

long long G(long long x){
    long long a = x % 8;
    if(a == 0 || a == 1) return x;
    if(a == 2 || a == 3) return 2;
    if(a == 4 || a == 5) return x+2;
    if(a == 6 || a == 7) return 0;
    return 0;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        long long l, r, ans;
        cin >> l >> r;
        ans = G(r)^G(l-1);
        cout << ans << endl;
    }
    return 0;
}
