#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {

        cin>>x>>y;
        long R= 9*x*x + y*y;
        long B=2*(x*x) + 25*y*y;
        long C=-100*x + y*y*y;
        long m=max(R,max(B,C));
        if(m==R)
            cout<<"Rafael ganhou"<<endl;
        else if(m==B) cout<<"Beto ganhou"<<endl;
        else cout<<"Carlos ganhou"<<endl;

    }

    return 0;
}
