#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    while(cin>>s)
    {

        int x=s.find("AB");
        int y=s.find("BA");
        if((x!=-1 and s.find("BA",x+2)!=-1) or (y!=-1 and s.find("AB",y+2)!=-1))
        cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
//if(s.find("AB")!=-1 && s.find("BA",s.find("AB")+2)!=-1 || s.find("BA")!=-1 && s.find("AB",s.find("BA")+2)!=-1)
    }
    return 0;
}
