#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    while(cin>>n>>k>>l>>c>>d>>p>>nl>>np)
    {
        int dr=k*l/nl;
        int s=p/np;
        int sl=c*d;
   // cout<<dr<<" "<<sl<<" "<<s<<endl;
        cout<<min(min(dr,sl),s)/n<<endl;
    }
    return 0;
}
