#include <iostream>
using namespace std;
int height(int n) {
    return ~(~1<<(n>>1)) << n%2;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        cout << height(n) << endl;
    }
}
