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
ll mx=-1e18,c=0,s;
vector<ll>v;
void combinationUtil(ll arr[], ll data[], ll start, ll end, ll index, ll r)
{


    if (index == r)
    {//bug(v.size());

         s=data[0];
        for (int i=1; i<r; i++)
             s=(s&data[i])%MOD;//bug(s);
             v.pb(s);
        return;
    }

    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
     combinationUtil(arr, data, i+1, end, index+1, r);
        while (arr[i] == arr[i+1])
            i++;
    }
}
void printCombination(ll arr[], ll n, ll r)
{
    ll data[r];
  //  qsort (arr, n, sizeof(ll), compare);
     combinationUtil(arr, data, 0, n-1, 0, r);
}
int main()
{
    #ifndef ONLINE_JUDGE
    //input();
    //output();
#endif
    fast();
    ll n,k;
    while(cin>>n>>k)
    {
        ll a[n];
        fr(i,0,n)
        cin>>a[i];
        if(n==k)
        {
            ll w=a[0];
            fr(i,1,n)
            w=(w&a[i])%MOD;
            cout<<w<<endl;
            cout<<1<<endl;
            continue;
        }

         ll m = sizeof(a)/sizeof(a[0]);
        printCombination(a, m, k);
        map<ll,ll>mp;
        ll l=v.size();
        sort(all(v));
     fr(i,0,l)
     mp[v[i]]++;
       cout<<v[l-1]<<endl;
       cout<<mp[v[l-1]]<<endl;
    }

}



