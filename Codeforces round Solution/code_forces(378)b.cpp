#include<bits/stdc++.h>

using namespace std;

#define in(a,x,y) (a>=x && a<=y)
#define out(a,x,y) (!in(a,x,y))
#define sz(a) ((int)a.size())
#define repv(i,a) for(int i=0;i<sz(a);i++)
#define revv(i,a) for(int i=sz(a)-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define pb push_back

#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a)|(b))
#define XOR(a,b) ((a) ^ (b))
#define xx first
#define yy second
#define mp make_pair
#define sqr(x) ((x)*(x))
#define sqrt(x) sqrt(1.0*(x))

#define LB(a,x) (lower_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which does not compare less than val.
#define UB(a,x) (upper_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which compares greater than val.
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define left nokol_left
#define right nokol_right
#define countbit(x) __builtin_popcountll((ll)x)
#define PQ priority_queue
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define Unique(store) store.resize(unique(store.begin(),store.end())-store.begin())
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;



#define pi acos(-1.0)
#define eps  1e-9
#define MX   (lmt+20)
#define inf  2000000000
#define MOD  1000000007LL
//---------->0123456789123465789
#define lmt  500000

int a[MX] , b[MX], n ;

int main()
{
    int n , p = 0 , q = 0;
    scanf("%d",&n);
    rep(i,1,n){
        scanf("%d%d",a+i,b+i);

         p += a[i] ;
         q += b[i];
    }

    int ans = abs(p  - q);

    int idx = 0;
    rep(i,1,n){

        p = p - a[i] + b[i];
        q = q - b[i] + a[i];

        if( abs(p - q) > ans ){
            ans = abs(p - q);
            idx = i;
        }

        p = p + a[i] - b[i];
        q = q + b[i] - a[i];
    }

    cout<<idx<<endl;

    return 0;
}
