#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,d;
    while(cin>>n>>d)
    {
        long  s=0,i;
        for(i=n;; i++)
        {
            s+=i;
            if(s>d or s==d)
            {
                cout<<i<<endl;
                break;
            }

        }

    }


    return 0;
}
