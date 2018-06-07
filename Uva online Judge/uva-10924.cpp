#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,s,j,c;
    while(cin>>a)
    {
        i=0;
        s=0;
        c=0;
        while(a[i]!='\0')
        {
            if(isupper(a[i]))
                s+=a[i]-38;
            else
                s+=a[i]-96;
            i++;
        }
        for(j=2; j<=sqrt(s); j++)
        {
            if(s%j==0)
                c++;
        }
        c==0?cout<<"It is a prime word.":cout<<"It is not a prime word.";
        cout<<endl;

    }
    return 0;
}
