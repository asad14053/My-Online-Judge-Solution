#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007


int main()
{
    int n,num, prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97},cnt,max;
    map<int,int>freq;
    while(cin>>n &&n)
    {
        if(n==1)
        {
            cout<<setw(3)<<n<<"! ="<<endl;
            continue;
        }
        freq.clear();
        for(int i=0;i<25;i++)
            if(n>=prime[i])
                max=i;
            else
                break;

        for(int i=2;i<=n;i++)
            {
                num=i;
                for(int j=0;j<25;j++)
                    if(num>=prime[j])
                    {
                        if(num%prime[j]==0)
                        {
                            freq[prime[j]]++;
                            num/=prime[j];
                            j--;
                        }
                    }
                    else
                    break;
            }

        cout<<setw(3)<<n<<"! =";
        if(max<15)
            {
               cnt=0;
               while(cnt<=max)
               {
                   cout<<setw(3)<<freq[prime[cnt]];
                   cnt++;
               }
            }

        else
            {
                for(int i=0;i<15;i++)
                cout<<setw(3)<<freq[prime[i]];
                cnt=15;
                cout<<endl<<"      ";
                while(cnt<=max)
                {
                    cout<<setw(3)<<freq[prime[cnt]];
                    cnt++;
                }
            }
        cout<<endl;
    }
return 0;
}
