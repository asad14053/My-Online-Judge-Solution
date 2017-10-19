#include<bits/stdc++.h>
using namespace std;
int main()
{

    long t,a;
    cin>>t;
    while(t--)
    {
        long c=0;
        cin>>a;
        long s=(int)sqrt(a);
        //cout<<"--   -"<<s<<endl;
        c++;
        long m=a-(s*s);
       // cout<<"---"<<m<<endl;
        if(m>0)
        {
            while(m!=0)
            {
               // cout<<"==="<<endl;
                long j=(int)sqrt(m);
                m-=j*j;
                c++;
            }

        }
        cout<<c<<endl;

    }
    return 0;
}
