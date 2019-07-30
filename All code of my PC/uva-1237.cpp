#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    string maker;
    int L;
    int H;
} record;
typedef vector<record> vr;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int D;
        cin>>D;
        vr v;
        while (D--)
        {
            record r;
            cin>>r.maker>>r.L>>r.H;
            cin.ignore();
            v.push_back(r);
        }
        int Q;
        cin>>Q;
        while (Q--)
        {
            int P;
            cin>>P;
            int found = -1;
            for (int i=0; i<v.size(); ++i)
            {
                if (v[i].L <= P && P <= v[i].H)
                {
                    if (found>-1)
                    {
                        found = -1;
                        break;
                    }
                    else
                    {
                        found = i;
                    }
                }
            }
            if (found>-1)
            {
                cout<<v[found].maker<<endl;
            }
            else
            {
                cout<<"UNDETERMINED"<<endl;
            }
        }
        if (T>0)
            cout<<endl;
    }
    return 0;
}
