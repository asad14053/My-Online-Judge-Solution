#include<iostream>
#include<cstring>
using namespace std;

int n,temp,maxv=0,num,a[1000001];
char s;

int main()
{
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>s>>temp;

        if(s=='+')
        {
            a[temp]=1;
            num++;
cout<<maxv<<"-----"<<endl;
            maxv=max(maxv,num); cout<<maxv<<"-----"<<endl;
        }
        else
        {
            if(a[temp]) num--;
            else maxv++;
            cout<<maxv<<"-----"<<endl;
        }
    }

    cout<<maxv<<endl;
    return 0;
}
