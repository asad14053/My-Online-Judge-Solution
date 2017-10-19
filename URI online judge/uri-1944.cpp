#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m="FACEEACEF";
    int n;
    while(cin>>n,n)
    {
        string a[n+2];
        getchar();
        for(int i=0; i<n; i++)
            getline(cin,a[i]);
        int c=0;
        for(int i=0;i<n;i++)
           if( m.find(a[i]))
            c++;
           cout<<c<<endl;
    }
    return 0;
}

/*

4
E C F A
A C E F
F E C A
A F C E
3
E A C F
A F C E
E F C A
6
E C A F
E C A F
E C A F
E C A F
E C A F
E C A F

*/
