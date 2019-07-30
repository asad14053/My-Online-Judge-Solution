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
    int sz,sz1,n,i,j,p,q;
    string s,s1,s2;
    while(cin>>s>>s1)
    {
        j=0;
        s2.clear();
        sz = s.size();
        for(i=0; i<sz; i++)
        {
            if(s[i]==s1[i]) s2.push_back(s[i]);
            else
            {
                if(s1[i]>s[i])
                {
                    j=1;
                    break;
                }
                if(s[i]<s1[i]) s2.push_back(s[i]);
                else s2.push_back(s1[i]);
            }
        }
        if(j) cout<<-1<<endl;
        else cout<<s2<<endl;
    }
}
