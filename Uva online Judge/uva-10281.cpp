#include <bits/stdc++.h>
using namespace std;
char line[1024];
int main(void)
{
    int vc = 0;
    double d = 0, speed = 0;
    while(gets(line))
    {
        int h, m, s;
        int seconds, v;
        getchar();
        if(sscanf(line, "%d:%d:%d %d", &h, &m, &s, &v) == 4)
        {   seconds = 3600 * h + 60 * m + s;
            d += (seconds - vc) * speed / 3600;
            vc = seconds;
            speed = v;
        }
        else
        {
            sscanf(line, "%d:%d:%d", &h, &m, &s);
            seconds = 3600 * h + 60 * m + s;
            printf("%02d:%02d:%02d %.2lf km\n", h, m, s, d + (seconds - vc) * speed / 3600);
        }
    }
    return 0;
}
