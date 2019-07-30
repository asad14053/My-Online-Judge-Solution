#include<bits/stdc++.h>
using namespace std;

#define fr(i,a,b) for(int i=(a);i<(b);i++)
#define rfr(i,a,b) for(int i=(b-1);i>=(a);i--)
#define freach(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)

#define INF INT_MAX/3
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
#define bug(x) cout<<#x<<": "<<x<<endl
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define pi acos(-1.0)
#define rad(x) (((1.0 * x * pi) / 180.0))
#define deg(x) (((x * 180.0) / (1.0 * pi)))
#define sinr(x) (sin(rad(x)))
#define cosr(x) (cos(rad(x)))
#define setbit(x, i) (x |= (1 << i))
#define tanr(x) (tan(rad(x)))
#define asind(x) (deg((asin(x))))
#define resetbit(x, i) (x &= (~(1 << i)))
#define acosd(x) (deg((acos(x))))
#define atand(x) (deg((atan(x))))
#define input() freopen("in0.txt","r",stdin)
#define output()freopen("out0.txt","w",stdout)
#define fast() ios_base::sync_with_stdio(0);cin.tie();
#define IN scanf
#define OUT printf
#define SI(a) scanf("%d",&a)
#define SL(a) scanf("%lld",&a)
#define SD(a) scanf("%lf",&a)
#define OI(a) printf("%d",a)
#define OL(a) printf("%lld",a)
#define OD(a) printf("%lf",a)
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
#define MOD 1000000007
int main()
{
    fast();
    //  input();
    //  output();
    int n,x;
    vpi v;
    while(cin>>n)
    {
        v.clear();
        rep(i,n)
        {
            cin>>x;
            v.pb(mp(x,i+1));
        }
        v.pb(mp(v[0].first,1));
       // sort(v.begin(),v.end());
       // rep(i,n)
       // bug(v[i].second);
        int mn=INT_MAX,z,c1=0,c2=0;
        rep(i,n)
        {
            z=abs(v[i].first-v[i+1].first);

            if(z<mn)
            {//bug(z);
                mn=z;
                c1=v[i].second;
                c2=v[i+1].second;
            }
        }
        cout<<c1<<" "<<c2<<endl;
}
return 0;
}



