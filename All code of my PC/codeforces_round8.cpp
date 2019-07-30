#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
   while(cin>>a>>b>>c)
    {
        int s=0,f=0;
        int m=a;
        while(a!=0)
        {

           s+=a/2+a%2;
            s%=2;
            a/=2;
            f++;
          // cout<<f<<endl;
        }
        //if(f%2)
        cout<<s*5+f<<" "<<s*5<<endl;
       // else cout<<c*m+f-1<<" "<<c*m<<endl;
    }
    return 0;
}
/*

5 2 3
8 2 4

*/
