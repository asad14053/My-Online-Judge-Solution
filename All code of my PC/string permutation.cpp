#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    char a[1000];
    cin>>t;
    while(t--)
    {
        cin>>a;
        int l=strlen(a);
        sort(a,a+l);
        do
        {
            cout<<a<<endl;
        }
        while(next_permutation(a,a+l));
        cout<<endl;
    }


    return 0;
}


