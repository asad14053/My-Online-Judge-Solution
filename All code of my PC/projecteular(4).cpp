#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long T,N,c=0,p=0,val=0;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>N;



        for(int j=999; j>=500; j--)
        {
            for(int i=100; i<=999; i++)
            {
                val = i*j;

                if(val>=N || val<101101)
                {
                    continue;
                }
                long rev = 0;
                long num=val;
                while(num)
                {
                    rev = rev*10+num%10;
                    num = num/10;
                }
                // cout<<rev<<endl;
                if(rev==val)
                {
                    c++;
                     cout<<c<<endl;
                    if(val>p)
                    {
                        p=val;
                    }
                }
               // cout<<c<<endl;
            }
        }

        cout<<p<<"\n";
    }
    return 0;
}
