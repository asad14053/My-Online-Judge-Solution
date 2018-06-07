#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    string n ;
    while(cin>>(n)!='\0')
    {
        char c=getchar();

        for(int i=n.size()-1; i>=0; i--)
        {
            cout<<n[i];
        }
        putchar(c);
    }
    return 0;
}
