#include <bits/stdc++.h>
using namespace std;
int r,c;
char s[110][110];
void floodfill(int i,int j)
{
  if(i<-1||i>r-1||j<-1||j>c-1||s[i][j]!='@')
        return ;
    s[i][j] = '*';
    floodfill(i-1,j);
    floodfill(i-1,j+1);
    floodfill(i-1,j-1);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    floodfill(i+1,j+1);
    floodfill(i+1,j-1);
}
int main()
{
    int i,cnt;

    while(cin>>r>>c)
    {
        getchar();
        if(r==0 && c==0)
            break;
        cnt=0;
        for(int j=0; j<r; j++)
            cin>>s[j];
        i=0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j] == '@')
                {
                    cnt++;
                    floodfill(i,j);
                }
                j++;
            }
            i++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

