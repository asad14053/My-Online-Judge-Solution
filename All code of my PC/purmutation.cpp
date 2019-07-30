#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    while(gets(s))
    {
        if(s[0]=='#')
        break;
        int l=strlen(s);
        cout<<next_permutation(s,s+l)<<endl;


    }
 //   return 0;
}


