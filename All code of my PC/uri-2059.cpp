#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,j1,j2,r,a;
    while(cin>>p>>j1>>j2>>r>>a)
    {
        if(p)
            {
                int m=j1+j2;
                if(m%2==0 or r and !a)
                    cout<<"Jogador 1 ganha!"<<endl;
                else  cout<<"Jogador 2 ganha!"<<endl;

            }
            else
            {
                int m=j1+j2;
                if(m%2 or !r and a)
                    cout<<"Jogador 1 ganha!"<<endl;
                else  cout<<"Jogador 2 ganha!"<<endl;
            }
    }

    return 0;
}

/*
1 4 5 0 0
1 4 5 1 0
1 4 5 1 1
0 9 2 0 0
0 9 2 1 0
0 9 2 0 1
0 2 9 1 0
0 2 9 1 1

*/
