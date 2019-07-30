#include<bits/stdc++.h>
using namespace std;
#define N 5
int main()
{
    int a[1000],l;
    for(int i=0; i<N; i++)
        cin>>a[i];
    int k;
    while(cin>>k)
    {
        int c=0;
        for(int i=0; i<N; i++)
            if(k==a[i])
            {
                 l=i+1;
                c=1;
                //break;
            }
            if(c==1)
            {
                cout<<"value found ,pos:"<<l<<endl;
                break;
            }
            else
                cout<<"re-enter value"<<endl;
    }
return 0;
}
