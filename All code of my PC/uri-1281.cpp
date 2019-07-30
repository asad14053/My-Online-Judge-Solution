#include <bits/stdc++.h>
using namespace std;
int main() {
    double price, result;
    int n, p, q, quantity;
    map<string, double> prices;
    string fruit;

    cin >> n;

    while (n--) {
        result = 0.0;
        prices.clear();

        cin >> p;

        while (p--) {
            cin >> fruit >> price;
            prices[fruit] = price;
        }

        cin >> q;

        while (q--) {
            cin >> fruit >> quantity;
            result += prices[fruit] * quantity;
        }

        printf("R$ %.2lf\n", result);
    }

    return 0;
}
