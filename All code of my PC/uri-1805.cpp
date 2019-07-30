#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
   ll a,b;
   while(cin>>a>>b)
   {

       ll m= a-1;
       ll n=b;
       cout<<n*(n+1)/2-m*(m+1)/2<<endl;
   }
    return 0;
}


/*


1 5
1 1000
10 20

*/
