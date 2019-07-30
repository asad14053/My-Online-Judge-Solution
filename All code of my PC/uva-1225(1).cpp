/*#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
using namespace std;

int main() {
    int T, N, n[10];
    cin >> T;
    while (T-- && cin >> N) {
        stringstream s;
        while (N--) s << (N + 1);
        memset(n, 0, sizeof n);
        for (size_t c = 0; c < s.str().length(); c++)
            n[s.str()[c] - '0']++;
        for (int i = 0; i < 10; i++) {
            cout << n[i];
            if (i!=9) cout << " ";
        }
        cout << endl;
    }
    return 0;
}*/
#include <stdio.h>
char str[10000000];
int main()
{
    int m,n,b,i;
    scanf("%d",&m);
    while(m--)
    {
        int a[11]= {0},j=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            b=i;
            while(b>0)
            {
                str[j++]=(b%10)+48;
                b=b/10;
            }
        }
        for(i=0; i<j; i++)
            a[str[i]-48]++;
        for(i=0; i<10; i++)
        {
            printf("%d ",a[i]);
//if(i!=9)
//printf(" ");
//else
//printf("\n");
        }
        printf("\n");

    }
    return 0;
}
