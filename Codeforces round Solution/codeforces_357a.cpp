#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    bool f=false;
    (cin>>t);
    while(t--)
    {
        string a;
        int b,c;
        cin>>a>>b>>c;
        if(b>=2400)
        {
            if(c-b>0)
                f=true;
           // else f= false;

        }
    }
       // else f=false;
    if(f)
    cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;


    return 0;
}

/*
3
Burunduk1 2526 2537
BudAlNik 2084 2214
subscriber 2833 2749
3
Applejack 2400 2400
Fluttershy 2390 2431
Pinkie_Pie -2500 -2450

*/
