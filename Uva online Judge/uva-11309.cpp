#include<bits/stdc++.h>
using namespace std;
int tme;
bool pal(int n)
{
    string a=to_string(n);
    string b;
    b=a;
    reverse(a.begin(),a.end());
    if(a==b) return true;
    return false;

}
bool nxt(int t)
{
    if(t==2359)
    {
        tme=0;
        return true;
    }
    t++;
    if(t%100==60)
        tme=t+40;
    else tme=t;
    return true;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int h,m;
        scanf("%d:%d",&h,&m);
        tme=0;
        tme=h*100+m;
        if(tme==2359)
        {
            cout<<"00:00"<<endl;
            continue;
        }
        while(nxt(tme))
        {
            if(pal(tme))
            {
                int hh=tme/100;
                int mm=tme%100;
                printf("%02d:%02d\n",hh,mm);
                break;
            }
        }
    }
    return 0;
}
