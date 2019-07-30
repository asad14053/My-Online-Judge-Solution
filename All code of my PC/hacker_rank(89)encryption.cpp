#include<bits/stdc++.h>
#define ll long long
#define setzero(a) memset(a,0,sizeof(a));
using namespace std;
 char ch[100][100]= {'-'};
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int row,col,row1,col1,val,val1;
    row=floor(sqrt(len));
    col=ceil(sqrt(len));
    if((row*col)<len)
    {
        row1=row+1;
        col1=col+1;
        val=row1*col;
        val1=col1*row;
        if(val<val1 && row1-col==1)row+=1;
        else if(val1<val && col1-row==1)col+=1;
        else row+=1;
    }

    static int k=0;
    memset(ch,'-',sizeof(ch));
    /*for(int i=0;i<row;++i)
    {
    	for(int j=0;j<col;++j)
    	{
    		cout<<ch[i][j];
    	}cout<<endl;
    }*/
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col && k<len; ++j)
        {
            ch[i][j]=str[k++];
        }
    }
    for(int i=0; i<col; ++i)
    {
        for(int j=0; j<row; ++j)
        {
            if(ch[j][i]!='-')
                cout<<ch[j][i];
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
