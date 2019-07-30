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

#define mpii                map<int,int>
#define mpsl                map<string,long long>
#define mpcl                map<char,long long>
#define mpll                map<long long,long long>
#define mpss                map<string,string>
#define stl                 set<ll>
#define sts                 set<string>
/// Bug
#define bug(x)              cout<<#x<<": "<<x<<endl
#define bug1(x,y)           cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<endl
#define bug2(x,y,z)         cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
#define bug3(w,x,y,z)       cout<<#w<<": "<<w<<"  |  "<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
/// Trigonometry
#define pi                  acos(-1.0)
#define rad(x)              (((1.0 * x * pi) / 180.0))
#define deg(x)              (((x * 180.0) / (1.0 * pi)))
#define sinr(x)             (sin(rad(x)))
#define cosr(x)             (cos(rad(x)))
#define tanr(x)             (tan(rad(x)))
#define asind(x)            (deg((asin(x))))
#define acosd(x)            (deg((acos(x))))
#define atand(x)            (deg((atan(x))))

///Bit

#define setbiton(x, i)      (x |= (1 << i))
#define setbitoff(x, i)     (x &= (~(1 << i)))
#define togglebit(x, i)     (x ^= (1 << i))
#define checkbiton(x,i)     ((x &(1 << i))!=0)
#define ispow2(x)           (x!=0 && (x&(x-1))==0)
#define countbit(x)         __builtin_popcountll((ll)x)
#define countlead(x)        __builtin_clzll((ll)x)  ///give wrong ans for zero (0)
#define counttrail(x)       __builtin_ctzll((ll)x)  ///give wrong ans for zero (0)
/// Search
#define LB(a,x)             (lower_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which does not compare less than val.
#define UB(a,x)             (upper_bound(all(a),x)-a.begin()) //  first element in the range [first,last) which compares greater than val.
#define bin_sa(a,n,x)       (binary_search(a, a+n,x))
#define bin_sv(v,x)         (binary_search(v.begin(), v.end(),x))

/// Algorithm
#define Unique(store)       store.resize(unique(store.begin(),store.end())-store.begin())
#define mxe(a,n)            (*max_element(a,a+n))
#define mxv(v)              (*max_element(v.begin(), v.end()))
#define mne(a,n)            (*min_element(a,a+n))
#define mnv(v)              (*min_element(v.begin(), v.end()))
#define SUM(a,n)            (accumulate(a,a+n,0))
#define SUMv(v)             (accumulate(v.begin(), v.end(), 0))
#define occurx(v,x)         (count(v.begin(), v.end(),x))

#define findx(v,x)          (find(v.begin(), v.end(),x))                                       /* iterator----> index */
#define findev(v,v1)        (find_end(v.begin(), v.end(),v1.begin(), v1.end()))                /* iterator-----> index */
#define findevc(v,v1,cmp)    (find_end(v.begin(), v.end(),v1.begin(), v1.end(),cmp))            /* iterator-----> index */
#define findfv(v,v1)        (find_first_of(v.begin(), v.end(),v1.begin(), v1.end()))           /* iterator-----> index */
#define findfvc(v,v1,cmp)    (find_first_of(v.begin(), v.end(),v1.begin(), v1.end(),cmp))       /* iterator-----> index */
#define srchv(v,v1)         (search (v.begin(),v.end(),v1.begin(),v1.end()))                   /* iterator-----> index */
#define srchvc(v,v1,cmp)     (search (v.begin(),v.end(),v1.begin(),v1.end(),cmp))               /* iterator-----> index */
#define srchn(v,n,x)        (search_n (v.begin(),v.end(),n,x))                                 /* iterator-----> index */
#define srchnc(v,n,x,cmp)    (search_n (v.begin(),v.end(),n,x,cmp))                             /* iterator-----> index */

#define nxtperv(v)          (next_permutation(v.begin(),v.end()))                              /* sorted*/
#define preperv(v)          (prev_permutation(v.begin(),v.end()))                              /* sorted*/

#define intersect(v,v1,v2)  (v2.resize(set_intersection (v.begin(),v.end(),v1.begin(),v1.end(), v2.begin())-v2.begin()))               /* v2.size() /* sorted*/
#define diff(v,v1,v2)       (v2.resize(set_difference(v.begin(),v.end(),v1.begin(),v1.end(), v2.begin())-v2.begin()))                 /* v2.size() /* sorted*/
#define symmdiff(v,v1,v2)    (v2.resize(set_symmetric_difference(v.begin(),v.end(),v1.begin(),v1.end(), v2.begin())-v2.begin()))     /* v2.size() /* sorted*/
#define union(v,v1,v2)      (v2.resize(set_union(v.begin(),v.end(),v1.begin(),v1.end(), v2.begin())-v2.begin()))                    /* v2.size() /* sorted*/

#define replace(v,x,y)      (replace (v.begin(),v.end(),x,y))
#define rev(v)              (reverse(v.begin(),v.end()))
#define rot(v,x)            (rotate(v.begin(),v.begin()+x,v.end()))
#define sgn(x,y)            ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))
#define sw(x,y)             swap(x,y)
#define sqr(x)              x*x


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
#define inf                 LLONG_MAX
#define MOD                 1000000007
template<typename T>inline  string toString(T a) { ostringstream os(""); os << a; return os.str();}
template<typename T>inline  ll toLong(T a) {ll res; istringstream os(a); os >> res; return res;}

///----------------------Main Code-------------------------------------///
vll v;
ll q = 0;
void LPSARRAY(string pat, int lps[])
{
    int j = 0;
    lps[0] = 0;
    for (int i = 1; i < pat.size(); ++i)
    {
        while ((j >= 0) && (pat[j] != pat[i]))
        {
            if (j > 0)
            {
                j = lps[j - 1];
            }
            else
                break;
        }
        if (pat[j] == pat[i])
        {
            j = j + 1;
        }
        lps[i] = j;
    }
}
void KMP(string txt, string pat)
{
    int M = pat.size();
    int N = txt.size();
    int lps[M];
    v.clear();
    q=0;
    LPSARRAY(pat, lps);
    for (int i = 0; i < txt.size(); ++i)
    {
        while ((q >= 0) && (pat[q] != txt[i]))
        {
            if (q > 0)
                q = lps[q - 1];
            else
                break;
        }
        if (pat[q] == txt[i])
        {
            q = q + 1;
        }
        if (q == M)
        {
            v.pb(i - M + 1);
            q = lps[q - 1];
        }
    }

}

int main()
{
#ifndef ONLINE_JUDGE
    input();
    output();
#endif
    fast();
    ll t, n, m, x, y, z;
    string s, s1;
    cin >> t;
    while (t--)
    {
        cin >> s >> s1;
        KMP(s, s1);
        if(v.size()>0)
        {
            cout<<v.size()<<endl;
            fr(i,0,v.size())
            {
                if(i>0)
                    cout<<" ";
                cout<<v[i]+1;
            }
            cout<<endl;
        }
        else cout<<"Not Found"<<endl;
    }
    return 0;
}
