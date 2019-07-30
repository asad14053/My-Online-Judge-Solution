# include<cstdio>
# include<iostream>
using namespace std;
int main(void)
{
    int a,b,c; scanf("%d%d%d",&a,&b,&c);
    int x,y,z; scanf("%d%d%d",&x,&y,&z);
    int flag = 0;
    a-=x;
    if ( a>0 )
        a/=2;
    b-=y;
    if ( b>0 )
        b/=2;
    c-=z;
    if ( c>0 )
        c/=2;
    if ( a+b+c >= 0 )
        flag = 1;
    else
        flag = 0;
    if ( flag )
        puts("Yes");
    else
        puts("No");


    return 0;
}
/*
4 4 0
2 1 2
5 6 1
2 7 2
3 3 3
2 2 2




*/
