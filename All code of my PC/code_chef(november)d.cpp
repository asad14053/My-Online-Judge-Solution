
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
#define mp                  make_pair
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
#define findx(v,x)          (find(v.begin(), v.end(),x))
#define swap(a,b)           a^=b^=a^=b
#define sgn(x,y)            ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))
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
#define inf                 1e18
#define MOD                 1000000007
template<typename T>inline  string toString(T a) { ostringstream os(""); os << a; return os.str();}
template<typename T>inline  ll toLong(T a) {ll res; istringstream os(a); os >> res; return res;}

///----------------------Main Code-------------------------------------///

int longestPalSubstr(char *str)
{
    int maxLength = 1;  // The result (length of LPS)

    int start = 0;
    int len = strlen(str);

    int low, high;

    // One by one consider every character as center point of
    // even and length palindromes
    for (int i = 1; i < len; ++i)
    {
        // Find the longest even length palindrome with center points
        // as i-1 and i.
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }

        // Find the longest odd length palindrome with center
        // point as i
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }

    //  printf("Longest palindrome substring is: ");
//   printSubStr(str, start, start + maxLength - 1);

    return maxLength;
}

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
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        if (q == 1)
        {
            cout << n << " ";
            fr(i, 0, n)
            cout << (char)(97);
            cout << endl;
            continue;
        }
        if (q >= n)
        {
            cout << 1 << " ";
            fr(i, 0, n)
            cout << (char)(i + 97);
            cout << endl;
            continue;
        }
        char s1[n + 1];
        ll m = 97;
        x = m;
        ll g = q + 96;
        y = g;
        fr(i, 0, n / 2)
        {
            if (m >= g)
                m = x, g = y;
            if (i % 2)
            {   s1[i] = (char)m;
                s1[n - i - 1] = (char)(g);
            }
            else
            {
                s1[i] = (char)(g);
                s1[n - i - 1] = (char)m;
            }
            if (m > g)
                m = x, g = y;
            m++;
            g--;
        }
        if (n % 2)
            s1[n / 2] = 'a';
        s1[n - 1] = '\0';
        cout << longestPalSubstr(s1) << " " << s1 << endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}