#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, qt, s, g, i, l_sub, b_guesser;

    cin >> n;

    while (n--){
        cin >> qt >> s;
        cin >> g;

        l_sub = abs(g - s);
        b_guesser = 1;

        i = 1;
        while (i++ < qt){
            cin >> g;

            if (abs(g - s) < l_sub){
                l_sub = abs(g - s);
                b_guesser = i;
            }
        }
        cout << b_guesser << endl;
    }

    return 0;
}
