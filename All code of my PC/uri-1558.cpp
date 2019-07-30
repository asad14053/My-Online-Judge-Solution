#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        double aux = sqrt(a), b;
        bool control = false;
        for(int i = 0; i <= aux; i++)
        {
            for(int j = 0; j <= aux; j++)
            {
                b = j*j + i*i;
                if(b == a){
                    control = true;
                    break;
                }
            }
            if(control)
                break;
        }
        if(control)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
