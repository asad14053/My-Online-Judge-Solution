///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long

#define fr(i,a,b)           for(int i=(a);i<(b);i++)
#define rfr(i,a,b)          for(int i=(b-1);i>=(a);i--)
 
 
#define ff                  first
#define ss                  second
#define vs                  vector<string>
#define vi                  vector<int>
#define vll                 vector<long long>
                
#define ql                  queue<long>
#define qll                 queue<long long>
#define PQ                  priority_queue
 
#define mpsl                map<string,long long>
#define mpcl                map<char,long long>
#define mpll                map<long long,long long>
 
 
 

 
#define Unique(store)       store.resize(unique(store.begin(),store.end())-store.begin())
 
 
 
 
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
 
///----------------------Main Code-------------------------------------///

int main()
{
#ifndef ONLINE_JUDGE
  input();
  output();
#endif
   
//    clock_t begin, end
//    double time_spent;
//    begin = clock();
  ll n, x, y, a, b, c, t, q, m;
  string s, s1;
  //char ch;
  //cin>>t;
  while (cin >> n >> q)
  {
    vll v,v1;
    mpll mp, mp1, mp2, mp3;
    c = 0;
    ll c1 = 0;
    fr(i, 0, n)
    {
      cin >> x, v.pb(x);
      if (x % 2)
        c++;
      else c1++;
      mp[i] = c;
      mp1[i] = c1;
    }
    c = 0;
    c1 = 0;
    rfr(i, 0, n)
    {
      if (v[i] % 2)
        c++;
      else c1++;
      mp2[i] = c;
      mp3[i] = c1;
    }
    mp2[n]=-100;
    mp3[n]=0;
  //  mp2[n]=-1,mp3[n]=0;
    ll sm = 0;
    c=0;
    fr(i, 0, n)
    {
      //bug1(mp[i],mp1[i]);
     // bug1(mp2[i+1],mp3[i+1]);
      if (mp[i] == mp1[i] and mp2[i + 1] == mp3[i + 1])
      {
        //bug1(mp[i],mp[i+1]);
        // if (sm < q)
        // { sm += abs(v[i + 1] - v[i]);
        //   mp[i + 1] = mp[i + 1] - mp[i];
        //   mp1[i + 1] = mp1[i + 1] - mp1[i];
        //   c++;
        // }
        v1.pb(abs(v[i]-v[i+1]));
      }
    }
    sort(all(v1));
    sm=0;
    c=0;
    fr(i,0,v1.size())
    {
       if(sm+v1[i]<q)
        c++,sm+=v1[i];
     // bug(v1[i]);
    }
    cout<<c<<endl;
  }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;
  return 0;
}
