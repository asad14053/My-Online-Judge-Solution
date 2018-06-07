#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,l;
    int ar[1000];
    while(cin>>a>>b)
    {
        int sum=0;
        for(int i=a; i<=b; i++)
        {
            int m=i,c=0;
            l=0;
            while(m!=0)
            {
                ar[l++]=m%10;
                m/=10;
            }
            for(int j=0; j<l-1; j++)
            {
                for(int k=j+1; k<l; k++)
                {
                    if(ar[j]==ar[k])
                    {
                        c=1;
                        break;
                    }


                }
                if(c) break;
            }
            if(!c) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}


/*



87 104
989 1022
22 25
1234 1234
*/
