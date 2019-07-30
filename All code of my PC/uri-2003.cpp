#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char c;
    while (cin>>a>>c>>b)
    {
        a = a * 60 + b + 60;
        cout << "Atraso maximo: " << max(a - (8 * 60), 0) << endl;
    }
    return 0;
}

