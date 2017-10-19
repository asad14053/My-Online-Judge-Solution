#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t,k=0;
    cin>>t;
    getchar();
    while(t--)
    {
        string x;
        char c[100000],f[100000],g[100000];
        getline(cin,a);
        int l=a.size();
//cout<<"-----"<<l<<endl;
        int m=0,le;
        for(int i=0; i<l; i++)
            if(a[i]>='a'and a[i]<='z')
                c[m++]=a[i];//cout<<"-----"<<m<<endl;
                strcpy(g,c);//cout<<"-----"<<strlen(g)<<endl;
                strrev(c);
        strcpy(f,c);
        if((sqrt(m)==(int)sqrt(m))and !strcmp(f,g))
            cout<<"Case #"<<++k<<":\n"<<sqrt(m)<<endl;
        else cout<<"Case #"<<++k<<":\n"<<"No magic :("<<endl;
        memset(g,'\0',sizeof(g));
        memset(f,'\0',sizeof(f));
        memset(c,'\0',sizeof(c));
    }

    return 0;
}

