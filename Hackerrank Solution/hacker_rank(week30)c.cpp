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
    ll n,t,a,b,x,y,q,z;
    string s;
    char c;
    cin>>t;
    while(t--)
    {
        vll v;
        cin>>n;
        ll c=0,c1=0,c2=0;
        fr(i,0,n)
        {
            cin>>x,v.pb(x);
            if(!x)
                c1++;
                else c2++;

        }
        if(n<3)
        {
            cout<<"Bob"<<endl;
            continue;
        }
        if(c1==n or c2==n)
        {
            (c1)%2?cout<<"Alice":cout<<"Bob";
            cout<<endl;
            continue;
        }

        c1=0;
        fr(i,1,v.size()-1)
        {
            if(v.size()<=3)
                break;
            if(v[i] and v[i-1]==0 and v[i+1]==0)
                c++,v.erase(v.begin()+i);//,bug1(i,c);
            if(!v[i] and v[i-1]==0 and v[i+1]==0)
                c++,v.erase(v.begin()+i);
                bug1(c,v.size());
        }
        bug(v.size());
        if(c==v.size() or c== v.size()-2)
        {
            ((c))%2?cout<<"Alice":cout<<"Bob";
            cout<<endl;
            continue;

        }
        fr(i,1,v.size()-1)
        {
            if(v[i-1]==0 and v[i+1]==0 and v.size()>=3)
                c++,v.erase(v.begin()+i);//,bug1(i,c);
        }
        bug(c);
        if(c%2)
            cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
//
//  end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}



/*

100
4
1 0 0 1
5
1 0 1 0 1
6
0 0 0 0 0 0
5
1 0 1 0 1
5
0 0 1 0 0
7
1 0 0 0 0 0 1
7
1 0 0 1 0 0 1
5
0 0 0 0 0
5
0 0 0 0 1
5
0 0 0 1 0
5
0 0 0 1 1
5
0 0 1 0 0
5
0 0 1 0 1
5
0 0 1 1 0
5
0 0 1 1 1
5
0 1 0 0 0
5
0 1 0 0 1
5
0 1 0 1 0
5
0 1 0 1 1
5
0 1 1 0 0
5
0 1 1 0 1
5
0 1 1 1 0
5
0 1 1 1 1
5
1 0 0 0 0
5
1 0 0 0 1
5
1 0 0 1 0
5
1 0 0 1 1
5
1 0 1 0 0
5
1 0 1 0  1
5
1 0 1 1 0
5
1 0 1 1 1
5
1 1 0 0 0
5
1 1 0 0  1
5
1 1 0  1 0
5
1 1 0 1 1
5
1 1 1 0 0
5
1 1 1 0 1
5
1 1 1 1 0
5
1 1 1 1 1
6
0 1 0 1 0 1


*/


