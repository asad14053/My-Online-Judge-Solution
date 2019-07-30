#include<bits/stdc++.h>
using namespace std;
bool CheckMove(int col, int row)
{
    if(col<1||row>8) return 0;
    if(row<1||col>8) return 0;
    return 1;
}
void KingMoves(char column, int row)
{
    int col = column-97+1;
   // cout<<col<<" "<<row<<endl;
    int nCol,nRow;
    int c=0;
    for(int x=-1; x<2; x++)
    {
        for(int y=-1; y<2; y++)
        {
            nCol=col+x;
            nRow=row+y;
            // cout<<nCol<<" "<<nRow<<endl;
            if((CheckMove(nCol,nRow)==1))
            {
                c++;
                //cout <<(char) (nCol+97)<<" "<<nRow<<endl;
            }
        }
    }
    cout<<c-1<<endl;
}

int main()
{
    string a;
    while(cin>>a)
    {
        char x=a[0];
        int y=a[1]-'0';
        KingMoves(x,y);
    }
}
