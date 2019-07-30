 
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long

#define fr(i,a,b)           for(int i=(a);i<(b);i++)
#define rfr(i,a,b)          for(int i=(b-1);i>=(a);i--)
#define freach(i, c)        for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
#define rep(i,n)            for(int i=0;i<(n);i++)
#define rrep(i,n)           for(int i=(n)-1;i>=0;i--)
#define forit(it, s)        for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)


#define PINF                INT_MAX
 
#define ff                  first
#define ss                  second
#define vs                  vector<string>
#define vi                  vector<int>
#define vll                 vector<long long>
#define vpi                 vector<pair<int,int> >
#define vpl                 vector<pair<long long,long long> >
#define vpcl                vector<pair<c,long long> >
#define vpsl                vector<pair<string,long long> >

#define qi                  queue<int>
#define ql                  queue<long>
#define qll                 queue<long long>
#define PQ                  priority_queue

#define mpii                map<int,int>
#define mpsl                map<string,long long>
#define mpcl                map<char,long long>
#define mpll                map<long long,long long>
#define mpss                map<string,string>
#define stl                 set<ll>
#define sts                 set<string>
/// Bug
#define bug(x)              cout<<#x<<": "<<x<<endl
#define bug1(x,y)           cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<endl
#define bug2(x,y,z)         cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
#define bug3(w,x,y,z)       cout<<#w<<": "<<w<<"  |  "<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
/// Trigonometry
#define pi                  acos(-1.0)
#define rad(x)              (((1.0 * x * pi) / 180.0))
#define deg(x)              (((x * 180.0) / (1.0 * pi)))
#define sinr(x)             (sin(rad(x)))
#define cosr(x)             (cos(rad(x)))
#define tanr(x)             (tan(rad(x)))
#define asind(x)            (deg((asin(x))))
#define acosd(x)            (deg((acos(x))))
#define atand(x)            (deg((atan(x))))

///Bit

#define setbiton(x, i)      (x |= (1 << i))
#define setbitoff(x, i)     (x &= (~(1 << i)))
#define togglebit(x, i)     (x ^= (1 << i))
#define checkbiton(x,i)     ((x &(1 << i))!=0)
#define ispow2(x)           (x!=0 && (x&(x-1))==0)
#define countbit(x)         __builtin_popcountll((ll)x)
#define countlead(x)        __builtin_clzll((ll)x)  ///give wrong ans for zero (0)
#define counttrail(x)       __builtin_ctzll((ll)x)  ///give wrong ans for zero (0)
/// Search
#define LB(a,x)             (lower_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which does not compare less than val.
#define UB(a,x)             (upper_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which compares greater than val.
#define bin_sa(a,n,x)       (binary_search(a, a+n,x))
#define bin_sv(v,x)         (binary_search(v.begin(), v.end(),x))

/// Algorithm
#define Unique(store)       store.resize(unique(store.begin(),store.end())-store.begin())
#define mxe(a,n)            (*max_element(a,a+n))
#define mxv(v)              (*max_element(v.begin(), v.end()))
#define mne(a,n)            (*min_element(a,a+n))
#define mnv(v)              (*min_element(v.begin(), v.end()))
#define SUM(a,n)            (accumulate(a,a+n,0))
#define SUMv(v)             (accumulate(v.begin(), v.end(), 0))
#define occurx(v,x)         (count(v.begin(), v.end(),x))
#define findx(v,x)          (find(v.begin(), v.end(),x))
#define swap(a,b)           a^=b^=a^=b
#define sgn(x,y)            ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))
#define sqr(x)              x*x

///I/O
#define input()             freopen("in0.txt","r",stdin)
#define output()            freopen("out0.txt","w",stdout)
#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ppc(x,y)            cout<<fixed<<setprecision(y)<<x<<endl

#define IN                  scanf
#define OUT                 printf
///    #define SI(a)        scanf("%d",&a)
///   #define SL(a)         scanf("%lld",&a)
///    #define SD(a)        scanf("%lf",&a)
///   #define OI(a)         printf("%d",a)
///    #define OL(a)        printf("%lld",a)
///    #define OD(a)        printf("%lf",a)
///     #define ON()        printf("\n")


#define EPS                 1e-9
#define inf                 1e18
#define MOD                 1000000007
template<typename T>inline  string toString(T a) { ostringstream os(""); os << a; return os.str();}
template<typename T>inline  ll toLong(T a) {ll res; istringstream os(a); os >> res; return res;}

///----------------------Main Code-------------------------------------///


int main()
{
   registerGen ( argc , argv ,  1 );
#ifndef ONLINE_JUDGE
  input();
  output();
#endif
  fast();
//    clock_t begin, end
//    double time_spent;
//    begin = clock();
  ll n, x, y, a, b, c, t, q;
  string s;
  //char c;
  cin >> t;
  while (t--)
  {
    cin >> n;
    ll a[n + 3], b[n + 3];
    ll p[6000] = {0};
    for (ll i = 1; i <= n; i++)
    {
      cin >> x >> y;
      a[i] = x;
      b[i] = y;
    }
    for (ll i = 1, r; i <= n; i++)
    {
      r = a[i];
      while (p[r] != 0) {r++;}
      if (r > b[i])
        cout << 0 << " ";
      else {cout << r << " "; p[r] = 1;}
    }
    cout << endl;

  }

  return 0;
}
