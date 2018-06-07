#include<bits/stdc++.h>
using namespace std;
string s[1000];
int main()
{
    int n ;
    while(cin>>n )
    {
        for(int i=0; i<5; i++) cin >> s[i];
        for(int i = 0; i<4*n; i+=4)
        {
            if(s[0][i]=='.') cout << 1;
            else if(s[3][i] == '*') cout << 2;
            else cout << 3;
        }
        puts("");


    }
    return 0;

}

