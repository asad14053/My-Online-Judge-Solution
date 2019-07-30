#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,sum,bin=0,j,digit,a,b;
    float ans;
    char s[100];
    while(gets(s))
    {
        bin=bin+1;
        digit=0;
        sum=0;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            switch(s[i])
            {
            case 'a':
            case 'A':
                sum=sum+1;
                break;
            case 'b':
            case 'B':
                sum=sum+2;
                break;
            case 'c':
            case 'C':
                sum=sum+3;
                break;
            case 'd':
            case 'D':
                sum=sum+4;
                break;
            case 'e':
            case 'E':
                sum=sum+5;
                break;
            case 'f':
            case 'F':
                sum=sum+6;
                break;
            case 'g':
            case 'G':
                sum=sum+7;
                break;
            case 'h':
            case 'H':
                sum=sum+8;
                break;
            case 'i':
            case 'I':
                sum=sum+9;
                break;
            case 'j':
            case 'J':
                sum=sum+10;
                break;
            case 'k':
            case 'K':
                sum=sum+11;
                break;
            case 'l':
            case 'L':
                sum=sum+12;
                break;
            case 'm':
            case 'M':
                sum=sum+13;
                break;
            case 'n':
            case 'N':
                sum=sum+14;
                break;
            case 'o':
            case 'O':
                sum=sum+15;
                break;
            case 'p':
            case 'P':
                sum=sum+16;
                break;
            case 'q':
            case 'Q':
                sum=sum+17;
                break;
            case 'r':
            case 'R':
                sum=sum+18;
                break;
            case 's':
            case 'S':
                sum=sum+19;
                break;
            case 't':
            case 'T':
                sum=sum+20;
                break;
            case 'u':
            case 'U':
                sum=sum+21;
                break;
            case 'v':
            case 'V':
                sum=sum+22;
                break;
            case 'w':
            case 'W':
                sum=sum+23;
                break;
            case 'x':
            case 'X':
                sum=sum+24;
                break;
            case 'y':
            case 'Y':
                sum=sum+25;
                break;
            case 'z':
            case 'Z':
                sum=sum+26;
                break;
            }
        }
        for(j=1; j!=0; j++)
        {
            digit=digit+sum%10;
            sum=sum/10;
            if(sum==0)    break;
        }
        if(digit>9)
            digit=digit%10+(digit/10)%10;
        if(bin%2==1)
            a=digit;
        else
        {
            b=digit;
            if(a>b)
                ans=(float)b*100/(float)a;
            else
                ans=(float)a*100/(float)b;
            printf("%.2f %%\n",ans);
        }
    }
    return 0;
}
