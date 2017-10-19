#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    while(cin>>n>>a>>b>>c>>d)
    {

        if(n>=a and n<=b and n>=c and n<=d)
            cout<<"possivel"<<endl;
        else cout<<"impossivel"<<endl;

    }
    return 0;
}

/*


10
8 12
10 14
12
10 11
12 16
20
10 20
20 30

*/
