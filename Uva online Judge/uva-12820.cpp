#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,h,i,j,k,l;
    string s;

    int a[140];

    int ui = 1;

    while(cin>>n)
    {

        int cnt = 0;

        for(i=1; i<=n; i++)
        {
            int ct = 0;
            set <int> st;
            memset(a,0,sizeof(a));
            cin>>s;
            l = s.size();
            for(j=0; j<l; j++)
            {
                int cb = s[j]-96;
                a[cb]++;
            }
            for(k=0; k<140; k++)
            {
                if(a[k]!=0)
                {
                    st.insert(a[k]);
                    ct++;
                }
            }

            if(st.size()==ct && st.size()!=1)
                cnt++;
        }
        printf("Case %d: %d\n",ui,cnt);
        ui++;
    }
}
