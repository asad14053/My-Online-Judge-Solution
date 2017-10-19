#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[5];
    for(int i=0; i<4; i++)
        cin>>a[i];
      int l=a[1].size();
      int n=3;
    int s;
    for(int j=1; j<l-1; j++)
    {
        for(int i=0; i<4; i++)
        {
            s=((a[n--][0]-'0')*(a[i][j]-'0')+(a[n--][l-1]-'0'))%257;

            cout<<a[i][0]-'0'<<"  "<<a[i][j]-'0'<<"  "<<a[i][l-1]<<endl;
        }
        printf("%c",(s)%257%97);
    }
  //  cout<<a[1].size()<<(int)'A'<<endl;
    return 0;
}
