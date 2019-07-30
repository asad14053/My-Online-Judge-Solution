
///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
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
#define MINF                INT_MIN
#define pb                  push_back
#define m_p                 make_pair
#define all(a)              (a).begin(),(a).end()
#define mset(a,c)           memset(a,c,sizeof a)
#define clr(a)              memset(a,0,sizeof a)
#define pii                 pair<int,int>
#define pll                 pair<long long,long long>
#define pcc                 pair<char,char>
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
    ll n, x, y, a, b, c, t, q,m;
    string s,s1,s3;
    //char c;
    //cin>>t;
    while (cin >> n>>m)
    {
      map<string,string>mp;
      fr(i,0,n)
      cin>>s>>s1,mp[s1]=s;//,bug(s1);
      fr(i,0,m)
      {
        s3="";
         cin>>s>>s1;
         fr(i,0,s1.size()-1)
         s3+=s1[i];
         cout<<s<<" "<<s1<<" "<<"#";
         cout<<mp[s3]<<endl;
      }
        
    }
      
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}
