/*
online judge :
author       : !!!!!!!!!
algorithm    :
*/

#include<iostream>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<climits>
#include<functional>
#include<fstream>
#include<istream>
#include<iterator>
#include<iomanip>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>


using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b-1);i>=(a);i--)
#define FOREACH(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)

#define INF INT_MAX/3
#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define SET(a,c) memset(a,c,sizeof a)
#define CLR(a) memset(a,0,sizeof a)
#define PII pair<int,int>
#define PCC pair<char,char>
#define PIC pair<int,char>
#define PCI pair<char,int>
#define FST first
#define SEC second
#define VS vector<string>
#define VI vector<int>
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)
#define PI acos(-1.0)
#define RADIANS(x) (((1.0 * x * PI) / 180.0))
#define DEGREES(x) (((x * 180.0) / (1.0 * PI)))
#define SINE(x) (sin(RADIANS(x)))
#define COSINE(x) (cos(RADIANS(x)))
#define SETBIT(x, i) (x |= (1 << i))
#define TANGENT(x) (tan(RADIANS(x)))
#define ARCSINE(x) (DEGREES((asin(x))))
#define RESETBIT(x, i) (x &= (~(1 << i)))
#define ARCCOSINE(x) (DEGREES((acos(x))))
#define ARCTANGENT(x) (DEGREES((atan(x))))
#define INFILE() freopen("in0.txt","r",stdin)
#define OUTFILE()freopen("out0.txt","w",stdout)
#define FASTIO ios_base::sync_with_stdio(0);cin.tie();
#define IN scanf
#define OUT printf
#define SI(a) scanf("%d",&a)
#define SL(a) scanf("%lld",&a)
#define SD(a) scanf("%lf",&a)
#define OI(a) printf("%d",a)
#define OL(a) printf("%lld",a)
#define OD(a) printf("%lf",a)
#define LL long long
#define ULL unsigned long long
#define EPS 1e-9
#define MOD 1000000007
#define LIM 4


//TYPE CONVERSION
template<typename T>inline string toString(T a)
{
    ostringstream os("");
    os<<a;
    return os.str();
}
template<typename T>inline LL toLong(T a)
{
    LL res;
    istringstream os(a);
    os>>res;
    return res;
}
template<typename T>inline int toInt(T a)
{
    int res;
    istringstream os(a);
    os>>res;
    return res;
}
template<typename T>inline double toDouble(T a)
{
    double res;
    istringstream os(a);
    os>>res;
    return res;
}
//MATHEMATICS
template<typename T>inline T  SQ(T a)
{
    return a*a;
}
template<typename T>inline T GCD(T a, T b)
{
    if (b == 0)return a;
    else return GCD(b, a % b);
}
template<typename T>inline T LCM(T a, T b)
{
    LL res=a*b;
    res/=GCD(a,b);
    return res;
}
template<typename T>inline ULL BIGMOD(T a, T b, T m)
{
    if (b == 0)return 1;
    else if (b % 2 == 0)return SQ(BIGMOD(a, b / 2, m)) % m;
    else return (a % m*BIGMOD(a, b - 1, m)) % m;
}
template<typename T>inline VS PARSE(T str)
{
    VS res;
    string s;
    istringstream os(str);
    while(os>>s)res.PB(s);
    return res;
}
template<typename T>inline ULL  DIST(T A,T B)
{
    ULL res=(A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y);
    return res;
}
template<typename T>inline LL  CROSS(T A,T B,T C)
{
    return (B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y);
}
template<typename T>inline double cosAngle(T a,T b,T c)
{
    double res=a*a+b*b-c*c;
    res=res/(2*a*b);
    res=acos(res);
    return res;
}
template<typename T>inline T POWER(T base,int po)
{
    T res=1;
    if(base==0)return 0;
    FOR(i,0,po)res*=base;
    return res;
}
//BIT
template<typename T>inline bool IS_ON(T mask,T pos)
{
    return mask&(1<<pos);
}
template<typename T>inline int OFF(T mask,T pos)
{
    return mask^(1<<pos);
}
template<typename T>inline int ON(T mask,T pos)
{
    return mask|(1<<pos);
}
//MOVEMENT INSIDE GRID
template<typename T>inline bool INSIDE_GRID(int R,int C,int ro,int clm)
{
    if(R>=0&&C>=0&&R<ro&&C<clm)return 1;
    return 0;
}
template<typename T>inline void PRINT_GRID(T GRID,int ro,int clm)
{
    DEBUG(GRID);
    FOR(i,0,ro)
    {
        FOR(j,0,clm)cout<<GRID[i][j]<<" ";
        puts("");
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n,p,q;
    while(cin>>n>>p>>q)
    {
        cin>>s;
        for(int i=0;i<=n/p;i++)
        {
            for(int j=0;j<=n/q;j++)
            if((i*p+j*q)==n)
            {
                 cout<<i+j<<endl;
                 for(int k=0;k<i;k++)
                    {for(int x=0;x<p;x++)
                    cout<<s[x];
                    cout<<endl;
                 s.erase(0,p);
                    }
                 for(int k=0;k<j;k++)
                 {

                  for(int x=0;x<q;x++)
                    cout<<s[x];
                    cout<<endl;
                    s.erase(0,q);
                 }
                 return 0;
            }
        }
        cout<<-1<<endl;
    }
    return 0;
}
