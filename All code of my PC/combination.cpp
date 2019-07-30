 #include<bits/stdc++.h>
 using namespace std;
 typedef unsigned long long ll;
 ll ncr[10000][10000];
  ll p()
  {
    ll l=10000;
    for(ll i=1;i<l;i++)
        for(ll j=0;j<l;j++)
    {//cout<<"-------------"<<endl;
        if(j>i) ncr[i][j]=0;
        else if(j==i||j==0) ncr[i][j]=1;


        else ncr[ i ] [ j ] = ncr [ i -1 ] [ j -  1 ] + ncr [ i - 1 ] [ j ] ;
    }

  }
int main()
{
    ll t,a,b;
    cin>>t;
    p();
    while(t--)
    {
        cin>>a>>b;
        cout<<ncr[a][b]<<endl;
    }

    return 0;
}
