///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;


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


#define qi  queue<int>
#define ql  queue<long>
#define qll queue<long long>
#define PQ priority_queue

#define mpii map<int,int>
#define mpsi map<string,int>
#define mpci map<char,int>


#define bug(x) cout<<#x<<": "<<x<<endl
#define bug1(x,y) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<endl
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define pi acos(-1.0)
#define rad(x) (((1.0 * x * pi) / 180.0))
#define deg(x) (((x * 180.0) / (1.0 * pi)))
#define sinr(x) (sin(rad(x)))
#define cosr(x) (cos(rad(x)))
#define tanr(x) (tan(rad(x)))
#define asind(x) (deg((asin(x))))
#define acosd(x) (deg((acos(x))))
#define atand(x) (deg((atan(x))))

#define setbiton(x, i) (x |= (1 << i))
#define setbitoff(x, i) (x ^= (1 << i))
#define countbit(x) __builtin_popcountll((ll)x)
#define resetbit(x, i) (x &= (~(1 << i)))

#define LB(a,x) (lower_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which does not compare less than val.
#define UB(a,x) (upper_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which compares greater than val.

#define Unique(store) store.resize(unique(store.begin(),store.end())-store.begin())


#define mxe(a,n) (*max_element(a,a+n))
#define mne(a,n) (*min_element(a,a+n))
#define SUM(a,n) (accumulate(a,a+n,0))
#define swap(a,b)  a^=b^=a^=b
#define sgn(x,y) ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))


#define input() freopen("in0.txt","r",stdin)
#define output()freopen("out0.txt","w",stdout)
#define fast() ios_base::sync_with_stdio(0);cin.tie();


#define IN scanf
#define OUT printf
///    #define SI(a) scanf("%d",&a)
///   #define SL(a) scanf("%lld",&a)
///    #define SD(a) scanf("%lf",&a)
///   #define OI(a) printf("%d",a)
///    #define OL(a) printf("%lld",a)
///    #define OD(a) printf("%lf",a)
///     #define ON() printf("\n")
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
#define inf 1e18
#define MOD 1000000007
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
    ll n,m,t,a,b,x,y,q,z,k;
    string s;
    while(cin>>n>>m>>k)
    {
        map<ll,ll>mp,mp1;
        fr(i,1,n+1)
        mp[i]=i;
        while(m--)
        {
            cin>>x;
            mp1[x]=1;
        }
        z=0,q=0;
        bool f=1;
        fr(i,0,k)
        {
            cin>>x>>y;

            if((mp1[x] or mp1[y]) and f)
            {
                f=0;
                if(mp1[x])
                    z=x;
                else z=y;
              //  bug(z);
            }
            if(f)
            swap(mp[x],mp[y]);
        }
        if(!f)
            cout<<z<<endl;
        else
        {
            fr(i,1,n+1)

            if(mp[i]==1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }




//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}





