#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r ;

    while(cin>>r,r)
    {
        int mark [r +1], leti[r +1];
    // int   mark[r] = 0, leti[r] = 0;

        for(int i = 0; i < r; i++)
           cin>>mark[i];
        for(int i =0; i < r; i++)
            cin>>leti[i];
        int t =0, l =0, am, al,
            cxm = 1, cxl = 1;

        bool bonus = true;
        for(int i = 0; i < r ; i++)
        {
            t+= mark[i];
            l += leti[i];
            am = mark[i];
            al = leti[i];
            if(bonus)
            {
                if(am == mark[i+1])
                    cxm++;
                if(al == leti[i+1])
                    cxl++;
                if(am != mark[i+1])
                    cxm = 1;
                if(al != leti[i+1])
                    cxl = 1;
                if(cxm == 3 && cxl == 3)
                    bonus = false;
               else if(cxm == 3 && cxl < 3)
                {
                    t+=30;
                    bonus = false;
                }
               else if(cxl == 3 && cxm < 3)
                {
                    l += 30;
                    bonus = false;
                }
            }
        }
        if(t >l)
            cout<<"M"<<endl;
        if(l > t)
            cout<<"L"<<endl;
        if(t == l)
            cout<<"T"<<endl;
    }
    return 0;
}
