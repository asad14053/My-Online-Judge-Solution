#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,k=1,n,m,a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        a=a*60+b, c=c*60+d;
        scanf("%d:%d %d:%d",&e,&f,&g,&h);
        e=e*60+f, g=g*60+h;


        printf("Case %d: ",k++);
        if(e>c || a>g)
        cout<<"Hits Meeting";
        else cout<<"Mrs Meeting";
        printf("\n");
    }
    return 0;
}
