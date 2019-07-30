#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s;
    while(cin>>n>>s)
    {
        int c=0,sm=0,mx=0;
        int x=s.find('<');
        int y=s.find('>');
        if(y>x)
        {
            int l=s.size();
            for(int i=x; i<y; i++)
            {
                if(s[i]=='<')
                {
                    int j=i;
                    while(s[j]!='>')
                    {
                        j--;
                    }
                    if(j<x)
                        c++;
                    //  mx=max(mx,c);

                }
                // c=0;
                if(s[i]=='>')
                {
                    int j=i;
                    while(s[j]!='<' and j<=y)
                    {
                        // c++;
                        j++;

                    }
                    if(j>=y)
                        c++;
                }


            }
            cout<<c<<endl;
        }

        else cout<<n-max(x,y)<<endl;

    }
    return 0;
}
