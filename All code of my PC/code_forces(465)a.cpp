
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


 

#define mpii                map<int,int>
#define mpsl                map<string,long long>
#define mpcl                map<char,long long>
#define mpll                map<long long,long long>
#define mpss                map<string,string>
#define stl                 set<ll>
#define sts                 set<string>
 
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

ll check(ll N)
{
  ll count = 0;
  for (ll i = 2; i * i <= N; ++i )
  {
    if ( N % i == 0)
    {
      if ( i * i == N ) count++;
      else //i<sqrt(N) and (N/i)> sqrt(N)
        count += 2;
    }
  }
  return count;
}

int main()
{
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
  //char ch;
  //cin>>t;
  while (cin >> n)
  {
    x = check(n);
    //   if(x)
    //  cout<<x<<endl;
    cout << x + 1 << endl;
  }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


  return 0;
}
