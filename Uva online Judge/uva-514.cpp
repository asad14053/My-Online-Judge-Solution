#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,s,b[100000];
    while(scanf("%d",&t)==1)
    {
        if(t==0)
            break;
        vector<int>v;
        int f=0;
        while(1)
        {
            for(int i=0; i<t; i++)
            {
                scanf("%d",&b[i]);
                if(b[i]==0)
                {
                    f=1;
                    break;
                }
            }
            for(int i=1; i<=t; i++)
            {
                v.push_back(i);
            }
            if(f==1)
            {
                f=0;
                printf("\n");
                break;
            }
            stack<int>st;
            int c=0;
            s=v.size();
            for(int i=0; i<t; i++)
            {
                for(int j=0; j<s; j++)
                {
                    if(b[i]==v[j])
                    {
                        v[j]=-1;
                        c++;
                        break;
                    }
                    else if(b[i]!=v[j])
                    {
                        if(st.size()==0 ||st.top()!=b[i])
                        {
                            if(v[j]!=-1)
                            {
                                st.push(v[j]);
                                v[j]= -1;
                                c++;
                            }
                        }
                        else if(st.top()==b[i])
                        {
                            st.pop();
                            break;
                        }
                    }
                    else
                        c++;
                }
                if(c>t)
                    break;
            }
            v.clear();
            if(!st.empty())
            {
                printf("No\n");
            }
            else
                printf("Yes\n");
        }
    }
    return 0;
}

