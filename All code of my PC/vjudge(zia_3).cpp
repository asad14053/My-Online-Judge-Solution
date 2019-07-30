#include<stdio.h>
#include<conio.h>

long int congruence(long int, long int);
long int totient(long int);
long int gcd(long int ,long int);
long int reminder(long int,long int, long int);
int main()
{
    long int a[200000],b[2000000],r[2000000],M=1,c[200000],y=0;
    int n,i=0;
    printf("nNumber of euations to solve:");
    scanf("%d",&n);

    printf("nEquations to be solve are of the form: x = a mod p");
    for(i=0; i<n; i++)
    {
        printf("nEnter the values of a and p of equation %d:",(i+1));
        scanf("%ld%ld",&a[i],&r[i]);
        M=M*r[i];
    }
    for(i=0; i<n; i++)
    {
        c[i]=congruence(M/r[i],r[i]);
    }
    for(i=0; i<n; i++)
    {
        y=y+((M/r[i])*a[i]*c[i]);
    }
    y=y%M;
    printf("nThe solution for given equations is:%ld",y);
    getch();
}

long int congruence(long int a,long int m)
{
    long int b,c,i,j,n,g,f[20],r,t,k,l,x,y;
    b=1;
    t=totient(m);
    r=reminder(a,t,m);
    x=(r*b)%m;
//printf("%ld",x);
    return(x);
}

long int gcd(long int m,long int n)
{
    long int a,b,r;
    if(m>n)
    {
        a=m;
        b=n;
    }
    else
    {
        a=n;
        b=m;
    }
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return(a);
}

long int totient(long int n)
{
    long int r,j=0,i,f[25],k,l,t;
    r=n;
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            if(j>0 && f[j-1]==i)
                goto next;
            f[j]=i;
            j++;
next:
            n=n/i;
            i–-;
            if(n==1)
                break;
        }
    }
    j–-;
    k=1;
    l=1;
    for(i=j; i>=0; i–-)
    {
        k=k*f[i];
        l=l*(f[i]-1);
    }
    t=(r/k)*l;
    t=t-1;
    return(t);
}

long int reminder(long int a, long int b, long int n)
{
    long int m[50],c[50],z[50],x,k,i,j,r,t,s,p,u,v,l;
    m[0]=1;
    t=1;
    r=1;
    while(r<=b)
    {
        r=r*2;
        m[t]=r;
        t++;
    }
    t=t-2;
    l=t;
    s=t+1;
    if(m[t]==b)
    {
        goto result;
    }
    x=0;
    for(p=t-1; p>=0; p–-)
    {
        if((m[p]+m[s-1])<=b)
        {
            m[s]=m[p]+m[s-1];
            z[x]=p;
            x++;
            s++;
        }
        if(m[s-1]==b)
        {
            goto result;
        }
        if(p==0)
        {
            p=t-2;
        }
    }

result:
    u=a%n;
    if(u>n-u)
    {
        v=-(a-u);
    }
    else
    {
        v=u;
    }
    c[0]=u;
    for(i=1; i<=l; i++)
    {
        v=c[i-1]*c[i-1];
        u=v%n;
        if(u>n-u)
        {
            v=-(a-u);
        }
        else
        {
            v=u;
        }
        c[i]=u;
    }
    x=0;
    for(i=l+1; i<s; i++)
    {
        v=c[i-1]*c[z[x]];
        u=v%n;
        c[i]=u;
        x++;
    }
    return(c[s-1]);
}
