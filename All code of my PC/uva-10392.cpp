#include<bits/stdc++.h>
using namespace std;
# define max 1000000
bool s[max];
int p [max],k;
void sieve()
{
    memset(s,true,sizeof(s));
    s[0]=s[1]=false;
      k=0;
    for(int i=2;i<=sqrt(max);i++)
    {
        if(s[i])
        {
            for(int j=i*i;j<max;j+=i) s[j]=false;
        }
    }
    for(int i=2;i<max;i++)
        if(s[i])
        p[k++]=i;
}
int main()
{
  sieve();
  long long n;
  while(cin>>n&&n>0)
  {
      for(int i=0;i<k;i++)
      while(n%p[i]==0)
      {
          cout<<"    "<<p[i]<<endl;
          n/=p[i];
      }
      if(n!=1)
      cout<<"    "<<n<<endl;
      cout<<endl;

  }
    return 0;
}
