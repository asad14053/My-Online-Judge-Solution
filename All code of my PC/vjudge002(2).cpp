#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,c,s=0;
    while(cin>>a)
    {
        b=a;
        for(int 3=2;i<sqrt(b);i++)
        {
            c=0;
            if(b%i==0)
            {
                c++;
                s+=i*c;
            }
        }
       cout<<s<<endl;
    }
    return 0;
}
