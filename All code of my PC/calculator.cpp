#include<bits/stdc++.h>
using namespace std;
void s(int a,int b)
{
    printf("%d\n",a+b);
}
void su(int a,int b)
{
    printf("%d\n",a-b);
}
void mul(int a,int b)
{
    printf("%d\n",a*b);
}
void divi(int a,int b)
{
    printf("%d\n",a/b);
}
void mod(int a,int b)
{
    printf("%d\n",a%b);
}

int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)==2)
    {
        scanf("%d",&c);
        switch(c)
        {
        case 1:
        {
            s(a,b);
            break;
        }
        case 2:
        {
            su(a,b);
            break;
        }
        case 3:
        {
            mul(a,b);
            break;
        }
         case 4:
        {
            divi(a,b);
            break;
        }
        case 5:
        {
            mod(a,b);
            break;
        }

        }
    }
}

