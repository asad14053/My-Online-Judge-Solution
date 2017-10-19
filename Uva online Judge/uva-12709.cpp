#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n)
    {
        int max=-9999;
        int sum1 = 0, sum = 0;
        for(int i=1; i<=n; i++)
        {
            int l,w,h;
            cin>>l>>w>>h;
            if(h>=max)
            {
                sum = l * w * h;
                if(max == h)
                {
                    if(sum>sum1)
                    {
                        sum1 = sum;
                    }
                }
                if(h>max)
                {
                    max = h;
                    sum1 = sum;
                }
            }
        }
        cout<<sum1<<endl;
    }
    return 0;
}
