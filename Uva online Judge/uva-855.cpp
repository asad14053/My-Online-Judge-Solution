#include<bits/stdc++.h>
using namespace std;
#define MX 100010
int main()
{
    int street[MX],avenue[MX],a,s,f,t;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>f;
        for(int i=0;i<f;i++)
            cin>>street[i]>>avenue[i];

        sort(street,street+f);
        sort(avenue,avenue+f);

        if(f%2)
            cout<<"(Street: "<<street[f/2]<<", Avenue: "<<avenue[f/2]<<")"<<endl;
        else
            cout<<"(Street: "<<street[(f-1)/2]<<", Avenue: "<<avenue[(f-1)/2]<<")"<<endl;
    }
    return 0;
}
