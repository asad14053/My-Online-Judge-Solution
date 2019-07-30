#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,l=0,n,j;
    string str;
    int k[1000];
    while(getline(cin,str))
    {
        memset(k,0,sizeof(k));
        for(i=0; i<str.size(); i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                ++k[str[i]-'a'];
            else if(str[i]>='A'&&str[i]<='Z')
                ++k[str[i]-'A'];
        }
       // for(i=0; i<26; i++)
         //   cout<<k[i]<<endl;
        int m;
        for(i=0; i<26; i++)
        {
            m=0;
            if(k[i]==0)
            {
                cout<<"not pangram"<<endl;
                break;
            }
            else
            {
                  m=1;
            }

        }
        if(m==1)
            cout<<"pangram"<<endl;


    }
    return 0;
}



