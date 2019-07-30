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
#define pll pair<long long,long long>
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
#define mpll map<long long,long long>


#define bug(x) cout<<#x<<": "<<x<<endl
#define bug1(x,y) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<endl
#define bug2(x,y,z) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<" "<<#z<<": "<<z<<endl




#define swap(a,b)  a^=b^=a^=b
#define bin_sa(a,n,x) (binary_search(a, a+n,x))
#define bin_sv(v,x) (binary_search(v.begin(), v.end(),x))


#define sgn(x,y) ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))


#define input() freopen("in0.txt","r",stdin)
#define output()freopen("out0.txt","w",stdout)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);



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
    ll n,x,y,a,b,c,t,q;
    string s;
    //char c;
    //cin>>t;
    while(cin>>n)
    {
        vll v;
        fr(i,0,n)
        {
            cin>>x,v.pb(x);
        }

     bool inc=0,con=0,dec=0,ans=1;
     fr(i,0,n)
     {
         if(i+1==n) break;
         if(v[i]<v[i+1])
         {
             inc=1;
             if(dec or con)
             {
                 ans=0;
                 break;
             }
         }
         if(v[i]>v[i+1])
         {
             dec=1;
         }
         if(v[i]==v[i+1])
         {
             con=1;
             if(dec)
             {
                 ans=0;
                 break;
             }
         }
     }
     if(ans)
        cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}





