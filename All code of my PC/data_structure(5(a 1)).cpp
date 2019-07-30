#include<bits/stdc++.h>
using namespace std;
struct date
{
    int d,m,y;
} dat;
int in()
{
    int a;
    cin>>a;
    return a;
}
void valid(struct date dat)
{
    if((dat.m>12||dat.m<1)||(dat.d<1||dat.d>31))
        cout<<"invalid "<<"\n";
    else
    {
        if(dat.d<32)
        {
            if(dat.m==1)
                cout<<dat.d<<" january "<<dat.y<<"\n";
            else if(dat.m==3)
                cout<<dat.d<<" march "<<dat.y<<"\n";
            else if(dat.m==5)
                cout<<dat.d<<" may "<<dat.y<<"\n";
            else if(dat.m==7)
                cout<<dat.d<<" july "<<dat.y<<"\n";
            else if(dat.m==8)
                cout<<dat.d<<" august "<<dat.y<<"\n";
            else if(dat.m==10)
                cout<<dat.d<<" october "<<dat.y<<"\n";
            else if(dat.m==12)
                cout<<dat.d<<" december "<<dat.y<<"\n";
            else if(dat.d<31)
            {
                if(dat.m==4)
                    cout<<dat.d<<" april "<<dat.y<<"\n";
                else if(dat.m==2)
                {
                    if(dat.y%4==0&&(dat.y%400==0||dat.y%100!=0)&&dat.d<=29)
                    {
                        cout<<"leap year"<<"\n";
                        cout<<dat.d<<" february "<<dat.y<<"\n";
                    }

                    else if(dat.d<=28) cout<<dat.d<<" february "<<dat.y<<"\n";
                    else cout<<"invalid"<<"\n";
                }
                else if(dat.m==6)
                    cout<<dat.d<<" june "<<dat.y<<"\n";
                else if(dat.m==9)
                    cout<<dat.d<<" september "<<dat.y<<"\n";
                else if(dat.m==11)
                    cout<<dat.d<<" november "<<dat.y<<"\n";
                else cout<<"invalid date"<<"\n";
            }
            else cout<<"invalid"<<"\n";
        }
    }
}
int main()
{
    int a=1,b=4,c=2015;
    cout<<"enter date month & year"<<"\n";
    dat.d=in();
    dat.m=in();
    dat.y=in();
    if(dat.d==a&&dat.m==b&&dat.y==c)
        cout<<"this is present time"<<"\n";
    else if(dat.d<a||dat.m<b||dat.y<c)
        cout<<"this is past time"<<"\n";
    else cout<<"this is future time"<<"\n";
    valid(dat);
    return 0;
}

