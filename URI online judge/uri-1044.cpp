#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;

    while(cin>>b>>a)
    {
        if(b>a) swap(a,b);
    if(a%b!=0)
        cout<<"Nao sao Multiplos"<<endl;
    else
           cout<<"Sao Multiplos"<<endl;


    }

    return 0;
}
