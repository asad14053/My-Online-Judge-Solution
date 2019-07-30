#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        string a;
        getline(cin,a);
        map<int,int>mp;
        for(int i=0;i<a.size();i++)
          mp[a[i]-97]++;
          int m=0;
          for(int i=0;i<26;i++)
            if(mp[i])
            m++;
            if(m==26)
                cout<<"frase completa"<<endl;
            else if(m>12) cout<<"frase quase completa"<<endl;
            else cout<<"frase mal elaborada"<<endl;
    }

    return 0;
}
