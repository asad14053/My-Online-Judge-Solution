 
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long

#define fr(i,a,b)           for(int i=(a);i<(b);i++)
 
#define PINF                INT_MAX
#define MINF                INT_MIN
#define pb                  push_back
 
#define pic                 pair<int,char>
#define pci                 pair<char,int>
#define psi                 pair<sting,int>
#define pis                 pair<int,string>
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
template<typename T>inline  string toString(T a) { ostringstream os(""); os << a; return os.str();}
template<typename T>inline  ll toLong(T a) {ll res; istringstream os(a); os >> res; return res;}
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
  ll n, x, y, a, b, c, t, q, m;
  string s, s1;
  //char ch;
  //cin>>t;
  while (cin >> a >> b >> c)
  {
    s = "";
    x = c / 2;
    y = x;
    x *= 2;
    if (b < a)
    {
      fr(i, 0, x)
      {
        if (i % 2 ==0)
          s += '0';
        else s += '1';
      }
    }
    else
    {
      fr(i, 0, x)
      {
        if (i % 2)
          s += '0';
        else s += '1';
      }
    }
 
    a -= y;
    b -= y;
    if (c % 2)
    {
      if (s[s.size() - 1] == '0')
        s += '1', b--;
      else s += '0', a--;
    }
    if (s[s.size() - 1] == '0')
    { fr(i, 0, a)
      s += '0';
      fr(i, 0, b)
      s += '1';
    }
    else
    {

      fr(i, 0, b)
      s += '1';
      fr(i, 0, a)
      s += '0';
    }
    cout << s << endl;


  }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;
  return 0;
}
