#include<bits/stdc++.h>
using namespace std;
#define MX 262500
struct entry {
    int fst,snd, p;
    bool operator <(const entry &b) const
        {
        if(fst==b.fst) return snd<b.snd;
        else return fst<b.fst;
        }
} L[MX];

char s[MX],T[1010];
int P[20][MX],sl,tl,stp;

void suffix_array()     //from pdf
{

    stp=0;

    for (int i = 0; i < sl; i ++)
        if(s[i]>='A' && s[i]<='Z') P[0][i]=s[i]-'A';

        else P[0][i] = s[i] - 'a'+26;

    stp=1;

    for (int cnt = 1; cnt >> 1 < sl; stp ++, cnt <<= 1)
    {
        for (int i = 0; i < sl; i ++)
        {
            L[i].fst = P[stp - 1][i];
            L[i].snd = i + cnt < sl ? P[stp - 1][i + cnt] : -1;
            L[i].p = i;
        }

        sort(L, L + sl);

        for (int i = 0; i < sl; i ++)
            P[stp][L[i].p] = i > 0 && L[i].fst == L[i - 1].fst && L[i].snd == L[i - 1].snd ? P[stp][L[i - 1].p] : i;
    }
}

int is_substring(int md)
{
    for(int i=L[md].p,j=0;i<sl && j<tl;i++,j++)
    {
        if((j==tl-1) && (s[i]==T[j])) return 0;
        else if(s[i]<T[j]) return -1;
        else if(s[i]>T[j]) return 1;
    }
    return -1;
}

int main()
{
    int t,q,ret,low,high,mid;

    bool chk;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
        sl=strlen(s);

        suffix_array();

        scanf("%d",&q);
        getchar();

        while(q--)
        {
            gets(T);
            tl=strlen(T);

            low=0;
            high=sl-1;
            chk=false;

            while(low<=high)
            {
                mid=(low+high)/2;
                ret=is_substring(mid);
                if(ret==0) {chk=true;break;}
                else if(ret<0) low=mid+1;
                else high=mid-1;
            }

        if(chk) printf("y\n");
        else printf("n\n");
        }
    }

return 0;
}
