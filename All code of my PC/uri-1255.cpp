#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int J,Num[28],n,M,L,K;
    char str[202];

    while(scanf("%d\n",&n)==1)
    {

        while(n--)
        {
            int I[27]= {0};
            gets(str);

            L=strlen(str);
            for(J=0; J<L; J++)
            {
                if(str[J]=='a'||str[J]=='A')
                    I[0]++;
                else if(str[J]=='b'||str[J]=='B')
                    I[1]++;
                else    if(str[J]=='c'||str[J]=='C')
                    I[2]++;
                else if(str[J]=='d'||str[J]=='D')
                    I[3]++;
                else    if(str[J]=='e'||str[J]=='E')
                    I[4]++;
                else    if(str[J]=='f'||str[J]=='F')
                    I[5]++;
                else    if(str[J]=='g'||str[J]=='G')
                    I[6]++;
                else    if(str[J]=='h'||str[J]=='H')
                    I[7]++;
                else    if(str[J]=='i'||str[J]=='I')
                    I[8]++;
                else    if(str[J]=='j'||str[J]=='J')
                    I[9]++;
                else    if(str[J]=='k'||str[J]=='K')
                    I[10]++;
                else    if(str[J]=='l'||str[J]=='L')
                    I[11]++;
                else    if(str[J]=='m'||str[J]=='M')
                    I[12]++;
                else    if(str[J]=='n'||str[J]=='N')
                    I[13]++;
                else    if(str[J]=='o'||str[J]=='O')
                    I[14]++;
                else    if(str[J]=='p'||str[J]=='P')
                    I[15]++;
                else    if(str[J]=='q'||str[J]=='Q')
                    I[16]++;
                else    if(str[J]=='r'||str[J]=='R')
                    I[17]++;
                else    if(str[J]=='s'||str[J]=='S')
                    I[18]++;
                else    if(str[J]=='t'||str[J]=='T')
                    I[19]++;
                else    if(str[J]=='u'||str[J]=='U')
                    I[20]++;
                else    if(str[J]=='v'||str[J]=='V')
                    I[21]++;
                else    if(str[J]=='w'||str[J]=='W')
                    I[22]++;
                else    if(str[J]=='x'||str[J]=='X')
                    I[23]++;
                else    if(str[J]=='y'||str[J]=='Y')
                    I[24]++;
                else    if(str[J]=='z'||str[J]=='Z')
                    I[25]++;

            }
            M=0;
            for(L=200; L>=0; L--)
            {
                for(J=0; J<27; J++)
                {
                    if(I[J]==L&&M<=I[J])
                    {
                        printf("%c",J+97);
                        M=I[J];
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
