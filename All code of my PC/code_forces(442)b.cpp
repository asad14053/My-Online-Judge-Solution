
///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

#define fr(i,a,b) for(int i=(a);i<(b);i++)
#define rfr(i,a,b) for(int i=(b-1);i>=(a);i--)
#define freach(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)


#define PINF INT_MAX
#define MINF INT_MIN
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define mset(a,c) memset(a,c,sizeof a)
#define clr(a) memset(a,0,sizeof a)
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pcc pair<char,char>
#define pic pair<int,char>
#define pci pair<char,int>
#define psi pair<sting,int>
#define pis pair<int,string>
#define ff first
#define ss second
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int,int> >
#define vpl vector<pair<long long,long long> >
#define vpcl vector<pair<c,long long> >
#define vpsl vector<pair<string,long long> >

#define qi  queue<int>
#define ql  queue<long>
#define qll queue<long long>
#define PQ priority_queue

#define mpii map<int,int>
#define mpsl map<string,long long>
#define mpcl map<char,long long>
#define mpll map<long long,long long>

#define stl set<ll>
#define sts set<string>
/// Bug
#define bug(x) cout<<#x<<": "<<x<<endl
#define bug1(x,y) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<endl
#define bug2(x,y,z) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
#define bug3(w,x,y,z) cout<<#w<<": "<<w<<"  |  "<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
/// Trigonometry
#define pi acos(-1.0)
#define rad(x) (((1.0 * x * pi) / 180.0))
#define deg(x) (((x * 180.0) / (1.0 * pi)))
#define sinr(x) (sin(rad(x)))
#define cosr(x) (cos(rad(x)))
#define tanr(x) (tan(rad(x)))
#define asind(x) (deg((asin(x))))
#define acosd(x) (deg((acos(x))))
#define atand(x) (deg((atan(x))))

///Bit

#define setbiton(x, i) (x |= (1 << i))
#define setbitoff(x, i) (x &= (~(1 << i)))
#define togglebit(x, i) (x ^= (1 << i))
#define checkbiton(x,i)   ((x &(1 << i))!=0)
#define ispow2 (x!=0 && (x&(x-1))==0)
#define countbit(x) __builtin_popcountll((ll)x)
#define countlead(x) __builtin_clzll((ll)x)  ///give wrong ans for zero (0)
#define counttrail(x) __builtin_ctzll((ll)x)  ///give wrong ans for zero (0)
 

///I/O
#define input() freopen("in0.txt","r",stdin)
#define output()freopen("out0.txt","w",stdout)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ppc(x,y) cout<<fixed<<setprecision(y)<<x<<endl

#define IN scanf
#define OUT printf
///    #define SI(a) scanf("%d",&a)
///   #define SL(a) scanf("%lld",&a)
///    #define SD(a) scanf("%lf",&a)
///   #define OI(a) printf("%d",a)
///    #define OL(a) printf("%lld",a)
///    #define OD(a) printf("%lf",a)
///     #define ON() printf("\n")


#define EPS 1e-9
#define inf 1e18
#define MOD 1000000007
template<typename T>inline string toString(T a){ ostringstream os("");os<<a;return os.str();}
template<typename T>inline ll toLong(T a){ll res;istringstream os(a);os>>res;return res;}

///----------------------Main Code-------------------------------------///


int main()
{
#ifndef ONLINE_JUDGE
    input();
    output();
#endif
    fast();
//    clock_t begin, end;
//    double time_spent;
//    begin = clock();
    ll n, x, y, a, b, c, t, q;
    string s;
    //char c;
    //cin>>t;
    while (cin >>s)
    {
        if(s.size()==2)
        {
            c=0;
            fr(i,0,s.size())
            if(s[0]=='a' or s[0]=='b')
                c++;
                cout<<c<<endl;
            continue;
        }
        a=s.find_first_of('a');
        b=s.find_last_of('a');
        x=s.find_first_of('b');
        y=s.find_last_of('b');
         c=0;
         if(a!=-1 and x!=-1)
         fr(i,a,x)
         {
            if(s[i]=='a')
                c++;
         }
         if(x!=-1 and y!=-1)
         fr(i,x,y+1)
         {
            if(s[i]=='b')
                c++;
         }
         if(y!=-1 and b!=-1)
         fr(i,y+1,b+1)
         {
            if(s[i]=='a')
                c++;
         }
         cout<<c<<endl;

        //bug(n);
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}