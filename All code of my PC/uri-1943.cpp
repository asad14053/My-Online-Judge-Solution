#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    while(cin>>k)
    {
        //1, 3, 5, 10, 25, 50 and 100.
        if(k==1) cout<<"Top 1"<<endl;
        else if(k>1 and k<=3) cout<<"Top 3"<<endl;
        else if(k>3 and k<=5) cout<<"Top 5"<<endl;
        else if(k>5 and k<=10) cout<<"Top 10"<<endl;
        else if(k>10 and k<=25) cout<<"Top 25"<<endl;
        else if(k>25 and k<=50) cout<<"Top 50"<<endl;
        else if(k>50 and k<=100) cout<<"Top 100"<<endl;
    }

    return 0;
}
