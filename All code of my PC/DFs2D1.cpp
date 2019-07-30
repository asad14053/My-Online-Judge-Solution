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


#define input() freopen("in0.txt","r",stdin)
#define output()freopen("out0.txt","w",stdout)
#define fast() ios_base::sync_with_stdio(0);cin.tie();


#define IN scanf
#define OUT printf
//    #define SI(a) scanf("%d",&a)
//    #define SL(a) scanf("%lld",&a)
//    #define SD(a) scanf("%lf",&a)
//   #define OI(a) printf("%d",a)
//    #define OL(a) printf("%lld",a)
//    #define OD(a) printf("%lf",a)
//     #define ON() printf("\n")
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
#define MOD 1000000007
ll r,s,n;
int X[] = {0, 1, 0, -1};
int Y[] = {-1, 0, 1, 0};
map<pii,bool>mp1;
#define BOUNDARY(i,j) ((i>0 && i<n+1) && (j>0 && j <4))
ll mx;
void dfs(ll x,ll y)
{

    fr(i,0,4)
    {  // bug1(x+X[i],y+Y[i]);

        if((x+X[i]>0 and x+X[i]<=n)and(y+Y[i]>0 and y+Y[i]<=3) and mp1[mp(x+X[i],y+Y[i])]==0)
		{
		//  cout<<"=="<<endl;
			mp1[mp(x+X[i],y+Y[i])]=1;
			mx=max(mx,x+X[i]);
			dfs(x+X[i], y+Y[i]);
		}
    }
    return;
}
int main()
{
    fast();
    //  input();
    //  output();
    ll t,a,b,x,y,q,z;
    cin>>t;
    while(t--)
    {
        mx=INT_MIN;
        mp1.clear();
       // mp2.clear();
       // v.clear();
         cin>>n>>q;
         int w=0;
         while(q--)
         {
             cin>>r>>s;
             mp1[mp(r,s)]=1;
         }
          if(q==0 or q==1 or q==2)
           {
               cout<<n<<endl;
               continue;
           }
         dfs(1,1);
         cout<<mx<<endl;
    }
return 0;
}





