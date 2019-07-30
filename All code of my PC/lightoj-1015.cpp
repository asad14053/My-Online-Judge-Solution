#include<bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    for(int k = 1; k <= N; k++)
    {
        int sum = 0,n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x >= 0)sum+=x;
        }
        cout  << "Case " << k << ": " << sum << '\n';
    }
    return 0;
}
