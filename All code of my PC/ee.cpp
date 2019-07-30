#include<bits/stdc++.h>
using namespace std;
int main()
{
     string an="0001";
     string nan="1110";
    string no="1010";
    string org="0111";
     string nor="1000";
     string xxor="0110";
     string xnor="1001";
    int t,l=1;
    cin>>t;
    while(t--)
    {  //bool a=false,n=false,o=false,norr=false,xorr=false,xnorr=false;
         string x;
         char z;
        for(int i=0;i<4;i++)
            {cin>>z;
             x+=z;
            }
            if(x==an)
                cout<<"Case "<<l++<<": AND GATE"<<endl;
                if(x==nan)
                    cout<<"Case "<<l++<<": NAND GATE"<<endl;
            if(x==no)
                cout<<"Case "<<l++<<": NOT GATE"<<endl;
            if(x==org)
                cout<<"Case "<<l++<<": OR GATE"<<endl;
            if(x==nor)
                cout<<"Case "<<l++<<": NOR GATE"<<endl;
            if(x==xxor)
                cout<<"Case "<<l++<<": XOR GATE"<<endl;
            if(x==xnor)
                cout<<"Case "<<l++<<": XNOR GATE"<<endl;

        //if()
    }
    return 0;
}
