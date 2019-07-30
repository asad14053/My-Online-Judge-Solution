#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[3],s1[3],x,y;
    int xd,yd,i,step;
    while(cin>>s>>s1)
    {
        xd=s[0]-s1[0];
        yd=s[1]-s1[1];
        if(xd<0) x='R';
        else x='L';
        if(yd<0) y='U';
        else y='D';
        xd=abs(xd);
        yd=abs(yd);
        step=max(xd,yd);
        cout<<step<<endl;
        while(step--)
        {
            if(xd)
            {
                cout<<x;
                xd--;
            }
            if(yd)
            {
                cout<<y;
                yd--;
            }
            cout<<endl;
        }
    }
    return 0;
}
