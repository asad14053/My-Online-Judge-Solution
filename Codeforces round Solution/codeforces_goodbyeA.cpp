#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d;
     char s1[100], s2[100];
    scanf("%d %s %s",&d,s1,s2);
    if(strcmp(s2,"week")==0)
    {
        if(d==5 || d==6) printf("53");
        else printf("52");
    }
    else
    {
        if(d<30) printf("12");
        else if(d==30) printf("11");
        else printf("7");
    }
}
