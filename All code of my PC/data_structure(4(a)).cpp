#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,max=0,min=1000000000,a[100],*p;
    for(int i=0;i<5;i++) cin>>a[i];
    p=a;
    cout<<"--------------"<<endl;
    for(i=0;i<5;i++)
    {
         if(max<*p) max=*p;
    if(min>*p) min=*p;
        cout<<*p<<"\n";
        p++;


    }
    cout<<"max :"<<max<<"\nmin :"<<min<<"\n";
    return 0;
}
