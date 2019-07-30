#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["pushLeft"]=1;
    mp["pushRight"]=2;
    mp["popLeft"]=3;
    mp["popRight"]=4;
    int t;
    cin>>t;
    int co=1;
    while(t--)
    {   cout<<"Case "<<co++<<":"<<endl;
        deque<int>q;
        int n,m;
        cin>>n>>m;

        for(int i=0; i<m; i++)
        {
            string s;
            int a;
            cin>>s;
            if(mp[s])
            {
                if( mp[s]==1)
                { cin>>a;
                    if(n==q.size())
                        cout<<"The queue is full"<<endl;
                    else q.push_front(a),cout<<"Pushed in left: "<<a<<endl;
                    //  break;
                }
                else if(mp[s]==2)
                {
                    cin>>a;
                    if(n==q.size())
                        cout<<"The queue is full"<<endl;
                    else q.push_back(a),cout<<"Pushed in right: "<<a<<endl;
                    // break;
                }
                else if(mp[s]== 3)
                {
                    if(q.empty())
                        cout<<"The queue is empty"<<endl;
                    else
                    {
                        //int m=;
                        cout<<"Popped from left: "<<q.front()<<endl;
                        q.pop_front();
                    }
                    // break;
                }
                if(mp[s]==4)
                {
                    if(q.empty())
                        cout<<"The queue is empty"<<endl;
                    else
                    {
                        //int l=;
                        cout<<"Popped from right: "<<q.back()<<endl;
                        q.pop_back();
                    }
                }
                // break;
                //default:
                //break;
            }
        }

    }

    return 0;
}
