#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int c;
        cin>>c;
        nums.push_back(-c);
    }
    sort(nums.begin(), nums.end());

    for (int i=0; i<n; i++)
    {
        cout<<-nums[i]<<endl;
    }
    return 0;
}
