#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    string s;
    while(cin>>a>>b>>c)
    {
        if(a>b and b<=c) s=":)";
       else if(a<b and b>=c) s=":(";
       else if(a< b and b<c and  (b-a)> (c-b)) s=":(";
        else if(a<b and b<c and  (b-a)<= (c-b)) s=":)";
      else   if(a>b and b>c and  (a-b)> (b-c)) s=":)";
      else  if(a>b and b>c and  (a-b)<= (b-c) )s=":(";
        else    if(a==b and b<c) s=":)";
       else  s=":(";
       cout<<s<<endl;
    }
    return 0;
}

/*

20 10 12
10 20 18
4 16 20
4 10 20
20 10 6
20 16 4
10 10 14
10 10 2

*/
