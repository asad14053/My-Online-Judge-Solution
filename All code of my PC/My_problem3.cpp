#include<bits/stdc++.h>
using namespace std;
int main()
{
    //banking Angle-phy topon -page 187,Gias -page 215
    //In USA ,every road turn is marked as it's max speed .But Bangladesh this is rare .Now the government of bangladesh is willing to have a F1 racing track ,where every sharp turn is important for participant.They have to pass every turn with a safe speed .IF it is over speed they fall in accident,if low speed they can't win the race .For this reason banking of road is needed (In banking the hight of outer side of road is made higher than inner side with an angle )
    // so speed v=sqrt(rg*tan(theta))
//so government need you to solve the problem. you will be given max speed of F1(v km/s) , radius of sharp turn(r meter) and width (w meter) .
// you have to find out the hight of outer side of road ?
    freopen("bankedi.txt","r",stdin);
    freopen("bankedo.txt","w",stdout);
    int t;
    while(cin>>t)
    for(int i=1;i<=t;i++)
    {   double v,r,w;
        cin>>v>>r>>w;
        v=(v*1000)/3600;
        double a=atan(v*v)/(r*9.8);
        double b=(v*v)/(r*9.8);
        cout<<"Case :"<<i<<endl<<w*sin(b)<<endl;
    }
    return 0;
}
