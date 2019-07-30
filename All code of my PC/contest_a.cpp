#include<bits/stdc++.h>
using namespace std;

#define fr(i,a,b) for(int i=(a);i<(b);i++)
#define rfr(i,a,b) for(int i=(b-1);i>=(a);i--)
#define freach(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)

int main()
{
  //  fast();
//    input();
    //  output();
    int n,m;
    string s,t;
    //  map<string,int>mbk,mbq,mbb,mbkn,mbr,mbp,mak,maq,mab,makn,mar,maap;
    map<string,int>mb,ma;
    string sm[]= {"king","queen","bishop","knight","rook","pawn"};
    while(cin>>n>>m)
    {
        if((n+m)<32)
        {
            cout<<"impossible"<<endl;
            break;
        }
        int mx=0,my=0;
        rep(i,n)
        {
            cin>>s>>t;
            if(s=="black")
                mb[t]++,mx++;
            else
                ma[t]++,my++;
            //  cout<<mb[t]<<" "<<ma[t]<<endl;

        }
        // cout<<"====="<<endl;
        rep(i,m)
        {
            cin>>s>>t;
            if(s=="black")
            {
                if(t=="king")
                {

                    if(mb[t]==0) cout<<s<<" "<<t<<endl,mb[t]++;
                }
                else if(t=="queen")
                {
                    if(mb[t]==0) cout<<s<<" "<<t<<endl, mb[t]++;
                }
                else if(t=="bishop")
                {

                    if(mb[t]<2) cout<<s<<" "<<t<<endl,mb[t]++;
                }
                else  if(t=="knight")
                {

                    if(mb[t]<2) cout<<s<<" "<<t<<endl,mb[t]++;
                }
                else   if(t=="rook")
                {

                    if(mb[t]<2) cout<<s<<" "<<t<<endl,mb[t]++;
                }
                else  if(t=="pawn")
                {

                    if(mb[t]<8) cout<<s<<" "<<t<<endl,mb[t]++;
                }
            }
            else
            {
                if(t=="king")
                {

                    if(!ma[t]) cout<<s<<" "<<t<<endl,ma[t]++;
                }
                else if(t=="queen")
                {


                    if(!ma[t]) cout<<s<<" "<<t<<endl, ma[t]++;
                }
                else if(t=="bishop")
                {

                    if(ma[t]<2) cout<<s<<" "<<t<<endl,ma[t]++;
                }
                else  if(t=="knight")
                {

                    if(ma[t]<2) cout<<s<<" "<<t<<endl,ma[t]++;
                }
                else   if(t=="rook")

                {

                    if(ma[t]<2) cout<<s<<" "<<t<<endl,ma[t]++;
                }
                else  if(t=="pawn")
                {

                    if(ma[t]<8) cout<<s<<" "<<t<<endl,ma[t]++;
                }
            }
        }
    }
    return 0;
}





