using namespace std;
#include<iostream>
#include<cstring>
int main()
{
    string str[105],ans="";
    int i=0,m=0,temp=0,N,len;
    while (getline(cin,str[i++]))
          {
             len=str[i-1].length();
             m=max(m,len);
          }
    N=i;

    for(int k=0;k<m;k++)
    {
        for (i=0;i<N;i++)
        {
            if ( str[i]!="")
            {
                 len=str[i].length();
                 temp=temp+(str[i][len-1]-'0');
                 str[i].erase(str[i].end()-1);
            }
        }
        ans.push_back('0'+temp%10);
        temp/=10;
    }
    while (temp!=0)
    {
          ans.push_back('0'+temp%10);
          temp/=10;
    }
    for(int j=ans.size()-1;j>=0;j--)
    cout<<ans[j];
    cout<<endl;
    return 0;
}
