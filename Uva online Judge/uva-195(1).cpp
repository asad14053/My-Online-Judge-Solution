#include<bits/stdc++.h>
using namespace std;
bool comp(char a, char b)
{
    if(tolower(a) == tolower(b))
    {
        return a<b;
    }
    return tolower(a) < tolower(b);
}

int main()
{
    long t;
    char a[10000];
    cin>>t;
    while(t--)
    {
        cin>>a;
        int l=strlen(a);
        sort(a,a+l,comp);
        do
        {
            cout<<a<<endl;
        }
        while(next_permutation(a,a+l,comp));
        //cout<<endl;
    }


    return 0;
}

