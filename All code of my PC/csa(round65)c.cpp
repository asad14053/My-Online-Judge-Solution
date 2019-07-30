///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
///
///
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

#define bug(x) cout<<#x<<": "<<x<<endl
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

#define setbit(x, i) (x |= (1 << i))
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
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
#define MOD 1000000007
vi v[10000];
void bfs(int s,int n)
{
    qi q;
    int lev[10000],vis[10000]={0},par[10000];
    q.push(s);
    lev[s]=0;
    vis[s]=1;
    par[s]=s;
    vi v2;
    v2.pb(s);
    while(!q.empty())
    {
        int u=q.front();
        fr(i,0,v[u].size())
        {
            int w=v[u][i];
            if(!vis[w])
            {
                lev[w]=lev[u]+1;
                par[u]=w;
                vis[w]=1;
                v2.pb(u);
                v2.pb(w);
                q.push(w);
            }
        }
        q.pop();
    }

    Unique(v2);cout<<v2.size()-1<<endl;
    fr(i,0,v2.size())
    cout<<v2[i]<<" ";
    cout<<endl;
}
int main()
{
    fast();
      input();
      output();
    int n,t,a,b,x,y,z,e;
    while(cin>>n)
    {
         fr(i,0,10000)
         v[i].clear();
         fr(i,0,n-1)
         {
             cin>>x>>y;
             v[x].pb(y);
             v[y].pb(x);
         }
         ll mn=1e18;
         fr(i,1,n+1)
         {
          mn=min(mn,v[i].size());
         }
       //  bug(mn);
         fr(i,1,n+1)
         {
          if(v[i].size()==mn)
          {
            x=i;
            break;
          }
         }
         bfs(x,n);
    }


return 0;
}


/*

5 6
1 2
1 5
1 4
2 5
2 4
3 4

*/

