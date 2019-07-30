#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,R,C,M,N,cont[26];
    char I[21];

  cin>>T;

    for(int tc = 1;tc <= T;++tc){
        cin>>R>>C>>M>>N;

        memset(cont,0,sizeof(cont));

        for(int i = 0;i < R;++i){
            cin>>I;
            for(int j = 0;j < C;++j) ++cont[I[j]-'A'];
        }

       // int max = 0,imp = 0;
       sort(cont,cont+26,greater<int>());
       int max = cont[0],imp = 1;
        for(int i = 1;i < 26;++i){
            if(cont[i] == max){
                ++imp;
            }
        }

        printf("Case %d: %d\n",tc,M * max * imp + N * (R * C - max * imp));
    }

    return 0;
}
