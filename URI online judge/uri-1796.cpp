#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    while(cin>>n)
    {
        bool x;
        int c=0,c1=0;
        for(int i=0;i<n;i++)
            {
                cin>>x;
                if(x==false)
                    c++;
                    else c1++;
            }
            if(c>c1)
                cout<<"Y"<<endl;
            else cout<<"N"<<endl;

    }

    return 0;
}
