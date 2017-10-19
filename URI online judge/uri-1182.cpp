#include<bits/stdc++.h>
using namespace std;

int main(){
    int l;
    char t;
    double N[12][12];
    double soma = 0.0;

    cin >> l;
    cin >> t;

    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> N[i][j];
                   if(j == l){
                        soma += N[i][j];
                   }
            }
   }

   if(t == 'S')
         printf("%.1f\n", soma);
    else
         printf("%.1f\n", soma/12.0);
    return 0;
}
