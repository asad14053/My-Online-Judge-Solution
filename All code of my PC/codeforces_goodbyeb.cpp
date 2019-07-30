#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll a,b;
 while(1)
  {
      cin>>a>>b;
      ll c=0,co=0;
      for(ll i=a;i<=b;i++)
      {
          ll m=i;
          c=0;
          while(m%2==0)
           {m/=2;c++;if(c>1) break;
           }
            if(c==1) co++;
      }
      cout<<co<<endl;

  }



    return 0;
}
/*



5 10
2015 2015
100 105
72057594000000000 72057595000000000


*/
