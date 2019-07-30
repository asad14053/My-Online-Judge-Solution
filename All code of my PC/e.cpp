#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int l=1;
void p(ull c)
{
      vector<ull>fact;
        vector<int>pow;
        for(ull f=2;f*f<=125;f++)
        {
            int p=0;
            while(c%f==0)
            {
                ++p;
                c/=f;
            }
            if(p>0)
            {
                fact.push_back(f);
                pow.push_back(p);
            }
        }
         if(c>1)
            {
                fact.push_back(c);
                pow.push_back(1);
            }

                cout<<"Case "<<l++<<": "<<c<<" = "<<fact[0]<<" "<<"("<<pow[0]<<")"<<endl;
}

int main()
{

    ull  n,c;
    cin>>n;
    while(n--)
    {

        cin>>c;
        ull b=c;
            p(b);


    }

    return 0;
}
