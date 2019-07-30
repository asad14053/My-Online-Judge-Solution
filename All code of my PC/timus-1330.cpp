#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,s[10001];

    cin>>N;

    s[0] = 0;

    for(int i = 0,k; i < N; ++i)
    {
        cin>>k;
        s[i+1] = s[i] + k;
    }

    int Q,l,r;

    cin>>Q;

    while(Q--)
    {
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl;
    }

    return 0;
}
