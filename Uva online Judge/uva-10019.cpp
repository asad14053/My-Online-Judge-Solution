#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int binary(int n)
{
    int s,c=0;
    while(n!=0)
    {
        s=n%2;
        n=n/2;
        if(s==1)
            c++;
    }
    return c;
}
int hex(int n)
{
    int s,c=0;
    while(n!=0)
    {
        s=n%10;
        n=n/10;
        if(s==0)
            c+=0;
        else if (s==1||s==2||s==4||s==8)
            c+=1;
        else if (s==3||s==5||s==6||s==9)
            c+=2;
        else if(s==7)
            c+=3;
    }
    return c;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    while(n--)
    {

        scanf("%d",&m);
        int  b=binary(m);
        int  c=hex(m);
        printf("%d %d\n",b,c);
    }
    return 0;
}
