 #include <stdio.h>

int main()
{   long x,y;
    int c;
    int a;
    while(1){
        scanf("%ld %ld",&x,&y);
        c=0;
        a=0;
        if(x==0 && y==0)
            break;
        while(x!=0 ||y!=0)
            {
             if((x%10+y%10)+a>9){
                c++;
                a=1;
            }
           else{
            a=0;
           }
           x/=10;
           y/=10;
        }
        if(c==0){
            puts("No carry operation.");
        }
        else if(c==1){
             printf("%d carry operation.\n",c);
        }
        else{
            printf("%d carry operations.\n",c);
        }
    }
       return 0;
}
