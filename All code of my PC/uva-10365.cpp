#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,l,h,w,area,a,f;
    cin>>f;
    while(f--)
    {
        cin>>n;
        area=10000000;
        for(l=1; l<=n; l++)
            for(h=1; h<=sqrt(n); h++)
                for(w=1; w<=sqrt(n); w++)
                {
                    if(l*h*w==n)
                    {
                        a=(2*l*w)+(2*l*h)+(2*h*w);
                        if(area>a) area=a;
                    }
                }
        cout<<area<<"\n";
    }
    return 0;
}
