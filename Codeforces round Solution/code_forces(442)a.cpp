
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
 
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int,int> >
#define vpl vector<pair<long long,long long> >
#define vpcl vector<pair<c,long long> >
#define vpsl vector<pair<string,long long> >
 

#define stl set<ll>
#define sts set<string>
/// Bug
#define bug(x) cout<<#x<<": "<<x<<endl
#define bug1(x,y) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<endl
#define bug2(x,y,z) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
#define bug3(w,x,y,z) cout<<#w<<": "<<w<<"  |  "<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
 

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
    while (getline(cin,s))
    {
        //bug(n);
        c=0;
        map<string,ll> mp;
        vs s1={"Danil", "Olya", "Slava", "Ann" , "Nikita"};
        fr(i,0,s1.size())
        {
            if(s.find(s1[i])!=-1 and !mp[s1[i]])
                c++,mp[s1[i]]=1;
            if(c>1)
                break;
        }
        if(c==0 or c>1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}