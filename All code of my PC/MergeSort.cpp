#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
void Msort(int lw,int md, int hg);
void mrg(int lw, int hg);
int main()
{
    int i,j,n;
    while(cin>>n)
    {
        for(i=0; i<n; i++) cin>>a[i];
        mrg(0,n-1);
        cout<<"Sorted Array : ";
        for(i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
void mrg(int lw, int hg)
{
    int md;
    if(hg>lw)
    {
        md=(hg+lw)/2;
        mrg(lw,md);
        mrg(md+1,hg);
        Msort(lw,md,hg);
    }
}
void Msort(int lw, int md, int hg)
{

    //for(int i=lw;i<md;i++) cout<<a[i]<<" "; cout<<endl<<endl;
    //for(int i=md+1;i<hg;i++) cout<<a[i]<<" "; cout<<endl;
    int k=lw,p=lw,q=md+1;
    while(p<=md&&q<=hg)
    {
        //cout<<lw<<" "<<md<<" "<<hg<<endl;
        if(a[p]<a[q])
        {
            b[k]=a[p];
            p++;
        }
        else
        {
            b[k]=a[q];
            q++;
        }
        k++;
    }
    int i;
    if(p<=md)
    {
        for(i=p; i<=md; i++) b[k++]=a[i];
    }
    if(q<=hg)
    {
        for(i=q; i<=hg; i++) b[k++]=a[i];
    }
   // for(i=lw;i<=hg;i++) cout<<b[i]<<" "; cout<<endl;
    for(i=lw; i<=hg; i++) a[i]=b[i];
}
