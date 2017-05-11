#include<stdio.h>
#include<string.h>
int main()
{
    long int i,t,sum,j,a[100000],count,l;
    char s[100000];
    while(gets(s))
    {
        count=0;
        l=strlen(s);
        for(i=0; i<52; i++)
            a[i]=0;
        for(i=0; i<l; i++)
        {
            switch(s[i])
            {
            case 'A':
                a[0]=a[0]+1;
                break;
            case 'B':
                a[1]=a[1]+1;
                break;
            case 'C':
                a[2]=a[2]+1;
                break;
            case 'D':
                a[3]=a[3]+1;
                break;
            case 'E':
                a[4]=a[4]+1;
                break;
            case 'F':
                a[5]=a[5]+1;
                break;
            case 'G':
                a[6]=a[6]+1;
                break;
            case 'H':
                a[7]=a[7]+1;
                break;
            case 'I':
                a[8]=a[8]+1;
                break;
            case 'J':
                a[9]=a[9]+1;
                break;
            case 'K':
                a[10]=a[10]+1;
                break;
            case 'L':
                a[11]=a[11]+1;
                break;
            case 'M':
                a[12]=a[12]+1;
                break;
            case 'N':
                a[13]=a[13]+1;
                break;
            case 'O':
                a[14]=a[14]+1;
                break;
            case 'P':
                a[15]=a[15]+1;
                break;
            case 'Q':
                a[16]=a[16]+1;
                break;
            case 'R':
                a[17]=a[17]+1;
                break;
            case 'S':
                a[18]=a[18]+1;
                break;
            case 'T':
                a[19]=a[19]+1;
                break;
            case 'U':
                a[20]=a[20]+1;
                break;
            case 'V':
                a[21]=a[21]+1;
                break;
            case 'W':
                a[22]=a[22]+1;
                break;
            case 'X':
                a[23]=a[23]+1;
                break;
            case 'Y':
                a[24]=a[24]+1;
                break;
            case 'Z':
                a[25]=a[25]+1;
                break;
            case 'a':
                a[26]=a[26]+1;
                break;
            case 'b':
                a[27]=a[27]+1;
                break;
            case 'c':
                a[28]=a[28]+1;
                break;
            case 'd':
                a[29]=a[29]+1;
                break;
            case 'e':
                a[30]=a[30]+1;
                break;
            case 'f':
                a[31]=a[31]+1;
                break;
            case 'g':
                a[32]=a[32]+1;
                break;
            case 'h':
                a[33]=a[33]+1;
                break;
            case 'i':
                a[34]=a[34]+1;
                break;
            case 'j':
                a[35]=a[35]+1;
                break;
            case 'k':
                a[36]=a[36]+1;
                break;
            case 'l':
                a[37]=a[37]+1;
                break;
            case 'm':
                a[38]=a[38]+1;
                break;
            case 'n':
                a[39]=a[39]+1;
                break;
            case 'o':
                a[40]=a[40]+1;
                break;
            case 'p':
                a[41]=a[41]+1;
                break;
            case 'q':
                a[42]=a[42]+1;
                break;
            case 'r':
                a[43]=a[43]+1;
                break;
            case 's':
                a[44]=a[44]+1;
                break;
            case 't':
                a[45]=a[45]+1;
                break;
            case 'u':
                a[46]=a[46]+1;
                break;
            case 'v':
                a[47]=a[47]+1;
                break;
            case 'w':
                a[48]=a[48]+1;
                break;
            case 'x':
                a[49]=a[49]+1;
                break;
            case 'y':
                a[50]=a[50]+1;
                break;
            case 'z':
                a[51]=a[51]+1;
                break;
            }
        }
        for(i=0; i<52; i++)
            if(a[i]>count)
                count=a[i];
        if(count==a[0])
            printf("A");
        if(count==a[1])
            printf("B");
        if(count==a[2])
            printf("C");
        if(count==a[3])
            printf("D");
        if(count==a[4])
            printf("E");
        if(count==a[5])
            printf("F");
        if(count==a[6])
            printf("G");
        if(count==a[7])
            printf("H");
        if(count==a[8])
            printf("I");
        if(count==a[9])
            printf("J");
        if(count==a[10])
            printf("K");
        if(count==a[11])
            printf("L");
        if(count==a[12])
            printf("M");
        if(count==a[13])
            printf("N");
        if(count==a[14])
            printf("O");
        if(count==a[15])
            printf("P");
        if(count==a[16])
            printf("Q");
        if(count==a[17])
            printf("R");
        if(count==a[18])
            printf("S");
        if(count==a[19])
            printf("T");
        if(count==a[20])
            printf("U");
        if(count==a[21])
            printf("V");
        if(count==a[22])
            printf("W");
        if(count==a[23])
            printf("X");
        if(count==a[24])
            printf("Y");
        if(count==a[25])
            printf("Z");
        if(count==a[26])
            printf("a");
        if(count==a[27])
            printf("b");
        if(count==a[28])
            printf("c");
        if(count==a[29])
            printf("d");
        if(count==a[30])
            printf("e");
        if(count==a[31])
            printf("f");
        if(count==a[32])
            printf("g");
        if(count==a[33])
            printf("h");
        if(count==a[34])
            printf("i");
        if(count==a[35])
            printf("j");
        if(count==a[36])
            printf("k");
        if(count==a[37])
            printf("l");
        if(count==a[38])
            printf("m");
        if(count==a[39])
            printf("n");
        if(count==a[40])
            printf("o");
        if(count==a[41])
            printf("p");
        if(count==a[42])
            printf("q");
        if(count==a[43])
            printf("r");
        if(count==a[44])
            printf("s");
        if(count==a[45])
            printf("t");
        if(count==a[46])
            printf("u");
        if(count==a[47])
            printf("v");
        if(count==a[48])
            printf("w");
        if(count==a[49])
            printf("x");
        if(count==a[50])
            printf("y");
        if(count==a[51])
            printf("z");
        printf(" %ld\n",count);
    }
    return 0;
}
