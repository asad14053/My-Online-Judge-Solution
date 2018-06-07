
#include<cstdio>
#include<cstring>
#include<string>

#include<cmath>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#include<iostream>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    sc("%d",&t);
    while(t--)
    {
        map<char,int>mp;
        int n;
        sc("%d",&n);
        for(int i=1; i<=n; i++)
        {
            int tp=i;
            while(tp>0)
            {
                mp[tp%10+'0']++;
                tp=tp/10;
            }
        }
        pf("%d %d %d %d %d %d %d %d %d %d\n",mp['0'],mp['1'],mp['2'],
           mp['3'],mp['4'],mp['5'],mp['6'],mp['7'],mp['8'],mp['9']);
    }


    return 0;
}
