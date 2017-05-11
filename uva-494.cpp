#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        stringstream ss(s);
        string c;
        int i=0;
        while(ss>>c)
        {
            int x=0;
            for(int j=0;j<c.size();j++)
            if(isalpha(c[j]))
                x++;
            i+=(x>0);
        }
            cout<<i<<endl;

    }
    return 0;
}
