#include<bits/stdc++.h>
using namespace std;
#define mx 1048576
int main()
{

    string str;
    char a,b;
    int n,m;
    string alp;
    cin>>n;
    getchar();
    while (n--)
    {
        cin>>str>>m;
        for (int k=65; k<=95; k++)
            alp[k] = k;
        for (int j=1; j<=m; j++)
        {
            cin>>a>>b;
            for (int i= 'A'; i<='Z'; i++)
                if (alp[i] == b)
                    alp[i] = a;
        }
        for (int j=0; str[j]; j++)
            cout<<(alp[str[j]]);
        cout<<endl;
    }
    return 0;
}
