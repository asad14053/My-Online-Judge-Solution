 #include<bits/stdc++.h>
 using namespace std;
 struct p
 {
     int mx,mn;
 };
 struct p get(int a[],int l,int h)
 {
     p mmx,mmn,r;
     if(l==h)
     {
         r.mx=r.mn=a[l];
         return r;
     }
     else if(h==l+1)
     {
         r.mx=max(a[l],a[h]);
         r.mn=min(a[l],a[h]);
         return r;
     }
     int m=(l+h)/2;
     mmx=get(a,l,m);
     mmn=get(a,m+1,h);
     r.mx=max(mmx.mx,mmn.mx);
     r.mn=min(mmx.mn,mmn.mn);
     return r;
 };
 int main()
 {
     int n;
     while(cin>>n)
     {
         int a[n+2];
         for(int i=0;i<n;i++)
            cin>>a[i];
         p mxmn=get(a,0,n-1);
         cout<<"max ="<<mxmn.mx<<" min ="<<mxmn.mn<<endl;
     }
 }
