#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<iostream>
#include<map>
using namespace std;
int com(const void *a, const void *b)
{
    int *x,*y;
    x=(int *)a;
    y=(int *)b;
    return *y-*x;
}
int main()
{
    int t,y=1;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int num1[130],num2[130],num3[130],num4[130];
        int i,j,k,l,m,n;
        if(y>1)cout<<endl;
        y=3;
        map<int,int>word1,word2;
        for(i=0; i<130; i++)
            num1[i]=num2[i]=num3[i]=0;
        for(i=0; i<s1.length(); i++)
            num1[s1[i]]++;
        for(i=0; i<130; i++)
            word1[num1[i]]=i;
        for(i=0; i<s2.length(); i++)
            num2[s2[i]]++;
        for(i=0; i<130; i++)
            word2[num2[i]]=i;
        qsort(num1,130,sizeof(int),com);
        qsort(num2,130,sizeof(int),com);
        for(i=0; i<130; i++)
        {
            // printf("%d %d\n",num1[i],num2[i]);
            if(num2[i]>0)
            {
                n=word2[num2[i]];
                m=word1[num1[i]];
                num3[n]=m;
            }
            else break;
        }
        for(i=0; i<s2.length(); i++)
        {
            n=s2[i];
            cout<<(char)num3[n];
        }
        cout<<endl;
    }
    return 0;
}
