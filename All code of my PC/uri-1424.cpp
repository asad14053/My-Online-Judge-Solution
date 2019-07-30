#include<bits/stdc++.h>
using namespace std;
vector<int>T[1000010];
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        memset(T, 0, sizeof T);
        for(int i=1; i<=n; i++)
        {
            int t;
            cin >> t;
            T[t].push_back(i);
        }

        while(m--)
        {
            int k, v;
            cin >> k >> v;
            k--;
            if (k<T[v].size())
                cout <<T[v][k]<< endl;
            else
                cout <<0<< endl;
        }

    }
    return 0;
}
