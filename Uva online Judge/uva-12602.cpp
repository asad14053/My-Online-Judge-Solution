 #include<bits/stdc++.h>
 using namespace std;
int main()
{
    int n,l,d;
    char s[100];
    cin>>n;
    getchar();
    while(n--)
    {
        gets(s);
         l=(s[0]-65)*26*26+(s[1]-65)*26+(s[2]-65)*1;
            d=(s[4]-48)*1000+(s[5]-48)*100+(s[6]-48)*10+(s[7]-48);
        if(abs(l-d)<=100)
            cout<<"nice\n";
        else
            cout<<"not nice\n";
    }
    return 0;
}
