 #include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

#define fr(i,a,b) for(int i=(a);i<(b);i++)
 

 
#define ff first
#define ss second
#define vs vector<string>
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int,int> >
#define vpl vector<pair<long long,long long> >
#define vpcl vector<pair<c,long long> >
#define vpsl vector<pair<string,long long> >

 
///I/O
#define input() freopen("in0.txt","r",stdin)
#define output()freopen("out0.txt","w",stdout)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ppc(x,y) cout<<fixed<<setprecision(y)<<x<<endl

#define IN scanf
#define OUT printf
///    #define SI(a) scanf("%d",&a)
///   #define SL(a) scanf("%lld",&a)
///    #define SD(a) scanf("%lf",&a)
///   #define OI(a) printf("%d",a)
///    #define OL(a) printf("%lld",a)
///    #define OD(a) printf("%lf",a)
///     #define ON() printf("\n")


#define EPS 1e-9
#define inf 1e18
#define MOD 1000000007
///----------------------Main Code-------------------------------------///
#define pb push_back
#define mpll map<long long,long long>
int main()
{
#ifndef ONLINE_JUDGE
  //  input();
 //   output();
#endif
    //fast();
//    clock_t begin, end;
//    double time_spent;
//    begin = clock();
    ll n, x, y, a, b, c, t, q;
    string s;
    //char c;
    //cin>>t;
    while (cin >> n)
    {
        vll v,v1;
        bool  mp[4000001];
        fr(i,0,n)
        cin>>x,v.pb(x),mp[x]=1;
         fr(i,0,n)
        cin>>x,v1.pb(x),mp[x]=1;
        c=0;
        fr(i,0,n)
        {
            fr(j,0,n)
            if(mp[v[i]^v[j]])
                c++;
        }
        if(c%2==0)
            cout<<"Karen"<<endl;
        else   cout<<"Koyomi"<<endl;

        
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}