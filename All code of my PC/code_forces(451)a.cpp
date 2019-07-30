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


///----------------------Main Code-------------------------------------///


int main()
{
#ifndef ONLINE_JUDGE
    // input();
    // output();
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
        cin >> n;
        bool f = 0;
        fr(i, 0, n + 1)
        {
            fr(j, 0, n + 1)
            {
               // bug((3 * i + 7 * j));
                if ((3 * i + 7 * j) == n)
                {
                    f = 1;
                    cout << "YES" << endl;
                    break;
                }
            }
            if(f) break;
        }
        if(!f)cout<<"NO"<<endl;
        //bug(n);
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}