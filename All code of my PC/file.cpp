#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *f1;
    char c;
    f1=fopen("input","w");
    while((c=getchar())!=EOF)
        putc(c,f1);
    fclose(f1);
    f1=fopen("input","r");
    while((c=getc(f1))!=EOF)
        cout<<c;
     cout<<endl;
    return 0;
}
