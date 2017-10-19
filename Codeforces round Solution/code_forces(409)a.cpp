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
    while(cin>>s)
    {
        ll c=0;
        x=s.size();
        int i;
        for(i=0;i<x-1;i++)
        {
            if(s[i]=='V'&&s[i+1]=='K')
            {
                c++;
                s[i]='0';
                s[i+1]='0';
            }
        }
        int jj=0;
     for(i=0;i<x-1;i++)
     {
         if(s[i]=='V'&&s[i+1]=='V'||s[i]=='K'&&s[i+1]=='K')
         {
             jj=1;
             break;
         }
     }
     if(jj) cout<<c+1<<endl;
     else cout<<c<<endl;

    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}





