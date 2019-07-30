#include <bits/stdc++.h>
using namespace std;
string s ;
int C[30];
int main()
{
    //freopen("in.txt","r",stdin);
    int test ;
    cin>>test;
    for( int cs = 1 ; cs <= test ; cs++)
    {
        cin>>s;
        int len = s.size() ;
        int Ans = 0 ;
        for( int i = 0 ; i < len ; i++ )
        {
            memset(C,0,sizeof C);
            int odd = 0 ;
            for (int j = i  ; j < len ; j++ )
            {
                C [ s[j]-'a' ]++;
                if( C[ s[j]-'a' ] & 1 )odd++;
                else odd--;
                int range = j - i + 1;
                if( (range & 1) && odd == 1  ) Ans ++;
                if( !(range & 1) && odd == 0 ) Ans ++;
            }
        }
        printf("Case %d: %d\n",cs,Ans);
    }
}
