#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cases = 0, n;
    string s[2000];
    string  sq;
    cin>>t;
    while (t--)
    {
        cin>>n;
        getchar();
        for (int i = 0; i < n; i++)
            cin>>s[i];cin>>sq;
        printf("Case %d:\n", ++cases);

        for (int i = 0; i < n; i++)
        {
            int d = 0;
            for (int j = 0; sq[j] || s[i][j]; j++)
                d+= sq[j] != s[i][j];
            if (d <= 1)
                cout<<s[i]<<endl;
        }
    }
    return 0;
}
