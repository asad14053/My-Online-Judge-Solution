#include<bits/stdc++.h>
using namespace std;
int main()
    {
        long long tm, a,c,Max,Gn,p,t,i;
        cin>>tm;
        while(tm--)
        {
            cin>>a;
            Max=0;
            for(i=a;i>=1;i--)
            {
                p=i;
                c=1;

                do {
                    if(p%2==0)
                    {
                        p/=2;
                        c++;
                    }
                    else
                    {
                        p=3*p+1;
                        c++;
                    }

                }
                 while(p!=1);
                if(c>=Max)
                {
                    Max=c;
                    Gn=i;
                }
            }
          printf("%lld\n",Gn);
        }
        return 0;
    }
