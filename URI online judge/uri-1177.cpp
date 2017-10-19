#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a;

    int N[1000];

    cin >> t;
     a = 0;
    for(int i = 0; i < 1000; i++){
            cout << "N[" << i << "] = " << a << "\n";
            a++;
            if(a == t) a = 0;
    }
    return 0;
}
