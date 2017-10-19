#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f=0;
    int col=0;

    int cont=0;
    int c=1;

    cin>>f>>col;
    getchar();
    while(f!=0)
    {

        char mat [f][col];
        for(int i=0; i<f; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>mat[i][j];
            }
        }
        for(int i=0; i<f; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(mat[i][j] != '*')
                {
                    for(int k=0; k<3; k++)
                    {
                        for(int l=0; l<3; l++)
                        {
                            if(((i+k-1)<f) && ((j+l-1)<col))
                            {
                                if(((i+k-1)>-1) && ((j+l-1)>-1))
                                {
                                    if((mat[i+k-1][j+l-1] == '*') && !((i+k-1)== i  && (j+l-1)==j))
                                    {
                                        cont++;
                                    }
                                }
                            }
                        }
                    }
                    mat[i][j]='0' + cont;
                }
                cont=0;
            }
        }
        cout<<"Field #"<<c<<":"<<endl;
        for(int i=0; i<f; i++)
        {
            for(int j=0; j<col; j++)
            {
                cout<<mat[i][j];
            }
            cout<<endl;
        }
        cin>>f>>col;
        if(f)
        {
            cout<<endl;
        }
        c++;
    }

    return 0;
}

