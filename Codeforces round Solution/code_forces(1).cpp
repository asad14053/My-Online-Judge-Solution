#include<bits/stdc++.h>
using namespace std;
char s[10000];

bool Palindrome(int i,int j){
    for(;i<j;i++,j--){
        if (s[i] != s[j])       return false;
    }

    return true;
}

int main()
{
    int k;
    scanf("%s",s);
    cin>>(k);

    int l = strlen(s);

    if (l%k){ puts("NO"); return 0; }

    int div = l/k;

    for (int i=0;i<l;i+=div){
        int st = i,ed = i+div-1;

        if (!Palindrome(st,ed)){
            puts("NO");
            return 0;
        }
    }

    puts("YES");
return 0;
}
