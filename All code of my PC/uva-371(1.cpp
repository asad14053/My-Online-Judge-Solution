#include<iostream>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<utility>
#include<cstdlib>
#include<cstring>
#include<string>
#include<bitset>
#include<vector>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)
using namespace std;
int main()
    {
        long long a,b,c,Max,Gn,p,t,i;
        while(scanf("%lld%lld",&a,&b)==2)
        {
            Max=0;
            if(a==0||b==0)
            break;
            if(a>b)
            swap(a,b);
            for(i=b;i>=a;i--)
            {
                p=i;
                c=1;
                if(p%2==0)
                {
                    p/=2;
                }
                else
                {
                    p=3*p+1;
                }
                while(p!=1)
                {
                    if(p%2==0)
                    {
                        p/=2;
                        c++;
                    }
                    else
                    {
                        p=3*p+1;
                        c++;
                    }

                }
                if(c>=Max)
                {
                    Max=c;
                    Gn=i;
                }
            }
          printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,Gn,Max);
        }
        return 0;
    }
