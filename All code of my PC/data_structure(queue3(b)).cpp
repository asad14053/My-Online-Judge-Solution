#include<bits/stdc++.h>
#define m 5
using namespace std;
int a[m],f,r;
int main()
{
    f=r=-1;
    int i,j,c;
    cout<<"press\n1 :inserting , 2 :deletion , 3 :displaying , 4 :exit"<<"\n";
    while(1)
    {
        cout<<"enter your choice"<<"\n";
        cin>>c;
        switch(c)
        {
        case 1:
            if(r<m)
            {
                cin>>i;
                if(f==-1)
                {
                    f=0; r=0;
                }
                else
                {
                    r=r+1;
                }
                a[r]=i;
                cout<<"insertion successful"<<"\n";
            }
            else
                cout<<"over flow"<<"\n";
            break;
        case 2:
            if(f!=-1)
            {
                i=a[f];
                if(f==r)
                {
                    f=-1;r=-1;
                }
                else f=f+1;
                cout<<"delated value is:"<<i<<"\n";
            }
            else cout<<"under flow"<<"\n";
            break;

        case 3:
           cout <<"present queue:"<<"\n";
            for(j=f;j<=r;j++)
                cout<<a[j]<<"\n";
                break;

        case 4: exit(0);
        default:
            cout<<"re enter your choice"<<"\n";
        }
    }
    return 0;
}
