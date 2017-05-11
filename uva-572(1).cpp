#include<bits/stdc++.h>
using namespace std;
int r,c;
char s[110][110];
void f(int i,int j)
{
    if(i<-1||i>r-1||j<-1||j>c-1||s[i][j]!='@')
        return;
    s[i][j]='*';
    f(i-1,j);f(i-1,j+1);f(i-1,j-1);
    f(i,j+1);f(i,j-1);
    f(i+1,j);f(i+1,j-1);f(i+1,j-1);
}
int main()
{
    int i,cnt;
    while(cin>>r>>c)
    {
        getchar();
        if(r==0&&c==0)
            break;
        cnt=0;
        for(int j=0;j<r;j++)
        {
            cin>>s[j];
        }
        i=0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j]='@')
                {
                    cnt++;
                    cout<<cnt<<endl;
                    f(i,j);
                }
                j++;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
    return 0;

}
