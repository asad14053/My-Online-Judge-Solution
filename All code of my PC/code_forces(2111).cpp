#include <iostream>
using namespace std;
int numDigits(int n) {
    int result = 0;

    for (int p = 1; p <= n; p *= 10) {
        result += n - p + 1;
    }

    return result;
}
/*
unsigned int  numDigits(unsigned int n){
    if (n<=9) return n;
    unsigned int pos=9;
    unsigned int i=1;
    unsigned int m1,m2=n/10;
    unsigned int range=9;
    while((m1=m2/10)!=0){
        ++i;
        range*=10;
        pos+=(i * range);
        m2=m1;
    }
    pos += ((i+1)*(n - (10*i) + 1));
    return pos;
}
*/
int main() {
    int n;
       while(cin >> n)
       {
        if(n>0)

cout<< numDigits(n)<<endl;
       }

    return 0;
}
