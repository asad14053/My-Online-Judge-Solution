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
#define mpci map<char,long long>
#define mpll map<long long,long long>

#define stl set<ll>
#define sts set<string>


/// Algorithm
#define Unique(store) store.resize(unique(store.begin(),store.end())-store.begin())
#define mxe(a,n) (*max_element(a,a+n))
#define mxv(v)   (*max_element(v.begin(), v.end()))
#define mne(a,n) (*min_element(a,a+n))
#define mnv(v)   (*min_element(v.begin(), v.end()))
#define SUM(a,n) (accumulate(a,a+n,0))
#define SUMv(v)   (accumulate(v.begin(), v.end(), 0))
#define occurx(v,x) (count(v.begin(), v.end(),x))
#define findx(v,x)  (find(v.begin(), v.end(),x))
#define swap(a,b)  a^=b^=a^=b
#define sgn(x,y) ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))

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
///----------------------Main Code-------------------------------------///


int main()
{
#ifndef ONLINE_JUDGE
    //input();
    //output();
#endif
    fast();
//    clock_t begin, end;
//    double time_spent;
//    begin = clock();
    ll n,x,y,a,b,c,t,q,k;
    string s;
    //char c;
    //cin>>t;
    while(cin>>n>>k>>t)
    {
          if(t<k)
            cout<<t<<endl;
          else if(t>=k and n>=t)
            cout<<k<<endl;
          else
            cout<<n-(t-k)<<endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}





