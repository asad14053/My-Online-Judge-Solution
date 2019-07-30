#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
        int v=1;
        for(int i=0;i<a.size();i++)
            if(isupper(a[i]))
               v++;
        cout<<v<<endl;
    }
    return 0;
}
