#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    string s;
    cin>>n;
    getchar();
    while(n--)
    {
        c=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        if(isalpha(s[i]))
        {
            if(s[0]==s[i])c++;
        }
        cout<<c-1<<endl;
    }
    return 0;
}
