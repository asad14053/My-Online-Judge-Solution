 
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long

 

 
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
#define inf                 LLONG_MAX
#define MOD                 1000000007
template<typename T>inline  string toString(T a){ ostringstream os("");os<<a;return os.str();}
template<typename T>inline  ll toLong(T a){ll res;istringstream os(a);os>>res;return res;}

///----------------------Main Code-------------------------------------///

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
    string s,s1;
    //char ch;
    //cin>>t;
    while (cin >> n)
    {
         cout<<ceil((n+1)/(double)2)<<endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;
    return 0;
}
