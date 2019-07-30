#include<bits/stdc++.h>
using namespace std;

int main()
{
   // fast();
  //  input();
  //  output();
  int n,m,x,*xx;
  vector<int> v;
   vector<int>::iterator it;
  while(cin>>n)
  {
      int a[n+2];
      for(int i=0;i<n;i++)
      {
          cin>>x;
          v.push_back(x);
      }
      cin>>m;int c1=0,c2=0,c3=0;
      for(int i=0;i<m;i++)
      {
          cin>>x;
         it=search_n(v.begin(),v.end(),1,x);
        int x=int (it-v.begin());
        x++;
        c1+=x;
        c2+=n+1-x;
//        cout<<x<<endl;

      }
      cout<<c1<<" "<<c2<<endl;

  }
    return 0;
}




