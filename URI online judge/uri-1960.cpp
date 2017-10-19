#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int a[8]= {1000,500,100,50,10,5,1};
    string b="MDCLXVI";
    while(cin>>n)
    {
     int i=0;
        while(n!=0)
        {
            if(n%a[i]==0)
            {
                while(n)
                {
                    n%=a[i];
                cout<<b[i];
                cout<<"-----"<<endl;
                n/=a[i];
                }
            }
            //n/=a[i];
             n%=a[i];
            i++;
        }
         cout<<endl;

    }


    return 0;
}
