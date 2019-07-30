///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

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
#define vpcl vector<pair<c,long long> >
#define vpsl vector<pair<string,long long> >

#define qi  queue<int>
#define ql  queue<long>
#define qll queue<long long>
#define PQ priority_queue

#define mpii map<int,int>
#define mpsl map<string,long long>
#define mpci map<char,long long>
#define mpll map<long long,long long>

#define stl set<ll>
#define sts set<string>
/// Bug
#define bug(x) cout<<#x<<": "<<x<<endl
#define bug1(x,y) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<endl
#define bug2(x,y,z) cout<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
#define bug3(w,x,y,z) cout<<#w<<": "<<w<<"  |  "<<#x<<": "<<x<<"  |  "<<#y<<": "<<y<<"  |  "<<#z<<": "<<z<<endl
/// Trigonometry
#define pi acos(-1.0)
#define rad(x) (((1.0 * x * pi) / 180.0))
#define deg(x) (((x * 180.0) / (1.0 * pi)))
#define sinr(x) (sin(rad(x)))
#define cosr(x) (cos(rad(x)))
#define tanr(x) (tan(rad(x)))
#define asind(x) (deg((asin(x))))
#define acosd(x) (deg((acos(x))))
#define atand(x) (deg((atan(x))))


///----------------------Main Code-------------------------------------///


int main()
{
#ifndef ONLINE_JUDGE
    //input();
    //output();
#endif
//    fast();
//    clock_t begin, end;
//    double time_spent;
//    begin = clock();
    ll n,x,y,a,b,t,q;
    string s;
    char c,d;
    //cin>>t;
    while(cin>>c>>d)
    {
        map<ll,char> mp;
        mp[0]='^';
        mp[1]='>';
        mp[2]='v';
        mp[3]='<';
        string s1="^>v<";
        fr(i,0,4)
        {
            if(s1[i]==c)
            {
                q=i;
               // break;
            }
            if(s1[i]==d)
            {
                t=i;
            }
        }
        cin>>x;
       // bug1(((x+t)%4),(x+q)%4);
        if(mp[(x+q)%4]==d and mp[((x+t)%4)]!=c)
            cout<<"cw"<<endl;
        else if(mp[(x+q)%4]!=d and mp[((x+t)%4)]==c)
            cout<<"ccw"<<endl;
        else cout<<"undefined"<<endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}





