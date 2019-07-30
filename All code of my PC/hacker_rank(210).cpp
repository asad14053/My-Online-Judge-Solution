/*#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long l,u,i,j,md=0,mn=0,d,n;
    while( scanf("%lld",&n)==1)
    {
        md=0;
            d=0;
            for(j=1;j<=sqrt(n);j++)
                if(n%j==0)
                    d+=2;
            if((int)sqrt(i)==sqrt(i)) d--;

          printf("%lld\n",d);
    }
  return 0;
    }
    */

#include <iostream>
using namespace std;
int main() {
     int n, other;
     cin>>n;

     int result = 0;
    int j = 2;

     while(j*j < n){
      if(n%j == 0){
        result = result + 1;
        other = n/j;
        result = result + 1;
      }
      j++;
    }

     cout<<result+2<<endl;
   return 0;
}
