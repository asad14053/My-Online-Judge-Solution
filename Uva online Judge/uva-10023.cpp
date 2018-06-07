#include<stdio.h>
#include<string.h>
void initialize(char*,char*, int);
int fun(char*,char*,int  );
void  fun1(char*,int );
void fun2(char*,char*,int  );

main()
{

    int i,j,l,k,q,x,v,n;
    char a[1001],s[1001],d[1001],ch;

    scanf("%d",&n);
    //scanf("%c",&ch);
    for(j=0; j<n; j++)
    {
        //  scanf("%c",&ch);
        scanf("\n%s\n",a);
        l=strlen(a);
        for(i=0; i<l; i++)
            a[i]=a[i]-'0';
        for(i=0; i<1001; i++)
            d[i]=0;
        if(l%2==0)
            k=1;
        else
            k=0;
        if(k==0 && a[0]==9)
        {
            for(i=l; i>=1; i--)
                a[i]=a[i-1];
            a[0]=0;
            l=l+1;
            k=1;
        }
        q=0;
        initialize(d,s,q);
        while(k!=l+1)
        {
            initialize(d,s,q-1);
            for(i=0; i<=9; i++)
            {
                fun1(s,i);
                v=fun(a,s,k);
                initialize(d,s,q-1);
                if(v==-1)
                    break;
            }

            i--;
            fun1(s,i);
            fun2(a,s,k);

            k=k+2;
            d[q++]=i;
        }

        for(x=0; x<q; x++)
            printf("%d",d[x]);
        printf("\n\n");
    }

}



void initialize(char* d,char* s,int q)
{

    int i;
    for(i=q; i>=0; i--)
        s[q-i]=d[i];
    for(i=q+1; i<1001; i++)
        s[i]=0;

}


int fun(char* a,char* s,int k)
{

    int i,v=0;

    for(i=k; i>=0; i--)
    {
        if(a[i]-s[k-i]+v<0)
            v=-1;
        else
            v=0;
    }
    return(v);
}

void fun2(char* a,char* s,int k)
{

    int i,v=0;
    char p;
    for(i=k; i>=0; i--)
    {

        p=(a[i]-s[k-i]+v+10)%10;

        if(a[i]-s[k-i]+v<0)
            v=-1;
        else
            v=0;
        a[i]=p;
    }

}

void  fun1(char* s,int i)
{

    int w,p=0,g;

    for(w=0; w<1001; w++)
    {
        s[w]=s[w]*2+p;
        if(s[w]>9)
        {
            p=s[w]/10;
            s[w]=s[w]%10;
        }
        else
            p=0;
    }
    for(w=1000; w>=1; w--)
        s[w]=s[w-1];
    s[0]=0;
    p=0;
    s[0]=s[0]+i;
    for(w=0; w<1000; w++)
    {

        if(s[w]>9)
        {
            p=s[w]/10;
            s[w]=s[w]%10;
            s[w+1]=s[w+1]+p;
        }
        else
            p=0;
    }

    p=0;
    for(w=0; w<1001; w++)
    {
        s[w]=s[w]*i+p;
        if(s[w]>9)
        {
            p=s[w]/10;
            s[w]=s[w]%10;
        }
        else
            p=0;
    }




}
