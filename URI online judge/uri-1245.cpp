#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>D(100),E(100);
        D.clear();
        E.clear();
        int a;
        char f;
        for(int i=0; i<n; i++)
        {
            cin>>a>>f;
            if(f=='D')
                D[a]++;
            else E[a]++;
        }
        int s=0;
        for(int i=0; i<100; i++)
            s+=min(D[i],E[i]);
        cout<<s<<endl;
    }
    return 0;
}
