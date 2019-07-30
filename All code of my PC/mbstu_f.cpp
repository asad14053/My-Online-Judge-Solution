
///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b)           for(int i=(a);i<(b);i++)

struct st
{
    ll id,p,ind;
};
bool cmp(st x,st y)
{

    if(x.p!=y.p)
        {
            return x.p>y.p;
        }
         return x.id<y.id;
}
int main()
{
#ifndef ONLINE_JUDGE
  // input();
  // output();
#endif
//   fast();
//    clock_t begin, end
//    double time_spent;
//    begin = clock();
    ll n, x, y, a, b, c, t, q;
    string s;
    //char c;
    //cin>>t;
     while(cin >> n)
    {
        st v[n+1];
        fr(i,0,n)
        {

            cin>>x>>y;
            v[i].id=i;
            v[i].p=y;
            v[i].ind=x;
        }
        sort(v,v+n,cmp);
        fr(i,0,n)
        cout<<v[i].ind<<" "<<v[i].p<<endl;
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}


