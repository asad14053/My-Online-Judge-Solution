#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    vector<int>a;
    for(int i = 0; i < n; i++)
        {cin >>x;
         a.push_back(x);
        }
    reverse(a.begin(),a.end());
    cout<<a[0];
    for(int i = 1; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
    return 0;
}
