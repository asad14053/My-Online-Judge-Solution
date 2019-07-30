#include<bits/stdc++.h>
using namespace std;
#define m 5
int a[m];
int main()
{
    int t=0,c;
    cout<<"press\n1 :inserting , 2 :deletion , 3 :displaying , 4 :exit"<<"\n";
    while(1)
    {
        cout<<"enter your choice"<<"\n";
        cin>>c;
        switch(c)
        {
        case 1:
            if(t<m)
            {
                cout<<"enter number"<<"\n";
                cin>>a[t];
                t=t+1;
                cout<<"insertion successful"<<"\n";
            }
            else cout<<"over flow"<<"\n";
            break;

        case 2:
            if(t!=0)
            {
                a[t-1]=0;
                t=t-1;
                cout<<"value deleted"<<"\n";
            }
            else cout<<"under flow"<<"\n";
            break;
        case 3:
            cout<<"stack input"<<"\n";
            for(int i=0;i<=4;i++)
                cout<<a[i]<<"\n";

            break;
        case 4:
            exit(0);
        default:
            cout<<"re enter a choice"<<"\n";
            break;
        }
    }
    return 0;
}
