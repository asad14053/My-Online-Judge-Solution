#include<bits/stdc++.h>
using namespace std;
int main()
{


int ans,i,j,k,l;
string a,b,c;
while (cin>>a>>b)
{
    k=0;
    c="";
    for (i=0; i<a.size(); i++)
    {
        c="";
        for (l=i,j=0; j<b.size() && l<a.size(); l++,j++)
        {
            c+=a[l];
        }
        if (c==b)
        {
            k++;
            a[l-1] = '#';
        }
    }
    printf("%d\n",k);
}
return 0;
}
