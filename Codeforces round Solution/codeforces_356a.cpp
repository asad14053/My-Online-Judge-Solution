#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],s=0;
    int b[105]= {0};
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
        b[a[i]]++;
        s+=a[i];
    }
    int i=0,x=0;
    while(i<105)
    {
        if(b[i]>1)
            x=max(x,i*min(b[i],3));
        i++;
    }
    //cout<<x<<endl;
    cout<<s-x<<endl;


}

