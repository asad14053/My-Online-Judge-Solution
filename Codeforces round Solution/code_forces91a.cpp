#include<bits/stdc++.h>
using namespace std;
int main(){
  int i, n[12]={4,7,44,47,444,447,474,477,744,747,774,777};
  int t;
  cin >> t;
  for(i=0; i<12; i++){
    if(t%n[i] == 0){
      printf("YES");
      break;
    }
  }
  if(i==12)printf("NO");
return 0;
}
