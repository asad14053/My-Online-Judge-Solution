#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, s,tem = 0,t;
    double dis = 0;
    int vel;
    char c;

    while(cin>>h>>m>>s)
    {
        cin>>c;
        if(c == ' ')
        {
            if(tem != 0) dis += (double)(((h*3600 + m*60 + s)-tem)*vel)/3600;
            scanf("%d%*c", &vel);
            tem = h*3600 + m*60 + s;
        }
        else
        {
            dis += (double)(((h*3600 + m*60 + s)-tem)*vel)/3600;
            printf("%02d:%02d:%02d %.2lf km\n", h, m, s, dis);
            tem = h*3600 + m*60 + s;
        }
    }

    return 0;
}
