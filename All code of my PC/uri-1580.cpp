#include<bits/stdc++.h>
using namespace std;
int main()
{

    char s[10000];
    while(cin>>s)
    {
        int l=strlen(s);
        long long c=0;
        sort(s,s+l);
        do{c+=c%(1000000000+7);}
        while(next_permutation(s,s+l));

            cout<<c<<endl;
    }
    return 0;
}
