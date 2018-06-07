 
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
 
/// Bug
 

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
 
///----------------------Main Code-------------------------------------///


int main()
{
#ifndef ONLINE_JUDGE
   input();
   output();
#endif
   fast();
//    clock_t begin, end
//    double time_spent;
//    begin = clock();
    ll n, x, y, a, b, m, c, t, q;
    string s;
    //char ch;
    //cin>>t;
    while (cin >> n>>m)
    {
        vll v,v1;
        fr(i,0,n)
        cin>>x,v.pb(x);
          fr(i,0,m)
        cin>>x,v1.pb(x);
        sort(all(v));
         sort(all(v1));
         cout<<max(min(v[0]*v1[0],v[1]*v1[0]),min(v[v.size()-2]*v1[v1.size()-1],v[v.size()-2]*v1[v1.size()-1]))<<endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}
