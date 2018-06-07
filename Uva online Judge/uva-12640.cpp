#include<bits/stdc++.h>
using namespace std;
int k(vector<int>a)
{
    int mxs=0,sfs=0;
    for(int i=0; i<a.size(); i++)
    {
        if(sfs+a[i]>mxs)
        {
            sfs+=a[i];
            mxs=sfs;
        }
        else if(sfs+a[i]>0)
            sfs+=a[i];
        else
        {
            sfs=0;
        }
    }
    return mxs;
}

int main()
{
    string line;
    while (getline(cin, line))
    {
        istringstream is(line);
        vector<int>v;
        int temp;
        while (is >> temp)
        {
            v.push_back(temp);
        }
        printf("%d\n", k(v));
    }
    return 0;
}
