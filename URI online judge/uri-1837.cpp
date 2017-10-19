#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    int a,b,q,r;
    while(cin>>a>>b)
    {
       q=a/b;
       r=a%b;
       if(r<0)
       {
           if(q<0)
            q--;
           else if(q>0) q++;
           r=a-(q*b);
       }
       cout<<q<<" "<<r<<endl;
    }
return 0;
}

/*

7 -3
-7 3

*/
