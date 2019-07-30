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
 //   fast();
//    clock_t begin, end;
//    double time_spent;
//    begin = clock();
    ll n,t,a,b,m,k,x,y,q,z;
    string s;
    //char c;
    while(cin>>n>>m>>k)
    {
        ll c=0;
        ll mn=1e18;
         fr(i,1,n+1)
         {
             cin>>x;
                if(i!=m and x<=k and x)
             {mn=min(mn,abs(i-m));
            // bug1(abs(i-m),mn);
             }
         }
         cout<<mn*10<<endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}





