#include <bits/stdc++.h>
using namespace std;
vector <long long> C;
long long n,m,a;
int main()
{
    cin>>n>>m;
    for (int i=0; i<n; i++)
    {
        long long maxi=1000000009;
        for (int j=0; j<m; j++)
        {
            cin>>a;
            if (a<maxi)maxi=a;
        }
        C.push_back(maxi);
    }
    sort(C.begin(),C.end());
    cout<<C.back()<<endl;
    return 0;
}
