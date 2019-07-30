#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //FastIO;

    string st;
    cin>>st;
    int flag=0;
    for(int i=0; i<st.size(); i++)
    {
        if(i+26<=st.size())
        {
            int cnt=0,f=0;
            set<char>ss;
            map<char,int>mp;
            string nw=st.substr(i,i+26);
            for(int k=0; k<26; k++)
            {
                if(nw[k]=='?')
                    cnt++;
                else
                {
                    mp[nw[k]]++;
                   // ss.insert(nw[k]);
                }
            }
            for(char ch='A'; ch<='Z'; ch++)
            {
                if(mp[ch]>1)
                {
                    f=1;
                    break;
                }
            }
            int j=i;
            if(f==0 && flag==0 && cnt>0)
            {
                flag=1;
                for(int k=0; k<nw.size(); k++)
                {
                    if(nw[k]=='?')
                    {
                        for(char ch='A'; ch<='Z'; ch++)
                        {
                            if(mp[ch]==0)
                            {
                                st[j++]=ch;
                                //printf("%c",ch);
                                mp[ch]=1;
                                break;
                            }
                        }
                    }
                    else
                        //printf("%c",nw[k]);
                        st[j++]=nw[k];
                }
                if(flag==1)
                    break;
            }

        }
    }
    if(flag==0)
        printf("-1\n");
        else
        {
            for(int i=0; i<st.size(); i++)
            {
                if(st[i]=='?')
                    printf("A");
                else
                    printf("%c",st[i]);
            }
             printf("\n");
        }

            //cout<<st<<endl;
        //cout<<"-1"<<endl;


}
