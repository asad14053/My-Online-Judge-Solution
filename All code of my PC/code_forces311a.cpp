#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,a1,b1,a2,b2;
    while(cin>>n>>a>>b>>a1>>b1>>a2>>b2)
    {
        int f=0,s=0,t=0;
        f+=a;s+=a1;t+=a2;
        if(f+s+t==n)
            cout<<f<<" "<<s<<" "<<t<<endl;
        else if(b+b1+b2==n)
            cout<<b<<" "<<b1<<" "<<b2<<endl;
        else
        {
            bool m=true;
            while(m and f<=b)
            {

                if(f+s+t==n)
                {cout<<f<<" "<<s<<" "<<t<<endl;
                  m=false;
                  break;
                }
                 f+=1;
            }
            f-=1;
            while(m and s<=b1)
            {


                if(f+s+t==n)
                {cout<<f<<" "<<s<<" "<<t<<endl;
                 m=false;
                  break;
                }
                s+=1;
            }
            s-=1;
             while(m and t<=b2)
            {

                if(f+s+t==n)
                {cout<<f<<" "<<s<<" "<<t<<endl;
                  m=false;
                  break;
                }
                t+=1;
            }
        }
    }
    return 0;
}

/*
6
1 5
2 6
3 7
10
1 2
1 3
1 5
6
1 3
2 2
2 2

*/
