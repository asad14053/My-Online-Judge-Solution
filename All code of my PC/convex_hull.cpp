#include<stdio.h>
#include<math.h>
#include<algorithm>
#define EPS 1e-10
// +0.0000000001

#define S(x)    ((x)*(x))
#define Z(x)    (fabs(x) < EPS)

using namespace std;

struct Vector{
    double x,y;
    void scan(){scanf("%lf %lf",&x,&y);}
    void print(){printf("(%lf,%lf)\n",x,y);}
    Vector(double x=0,double y=0){
        this->x=x;
        this->y=y;
    }
    double mag2(){
        return S(x)+S(y);
    }
    double mag(){return sqrt(mag2());}
};

double dotp(Vector a, Vector b){
    return a.x*b.x + a.y*b.y ;
}
double crossp(Vector a, Vector b){
    return a.x*b.y - a.y*b.x;
}

Vector operator+(Vector a,Vector b){
    return Vector(a.x+b.x, a.y+b.y);    }
Vector operator-(Vector a,Vector b){
    return Vector(a.x-b.x, a.y-b.y);    }

int Turn(Vector &V0,Vector &V1,Vector &V2)
{
    double v=crossp((V1-V0),(V2-V0));
    if(fabs(v)<EPS)return 0;
    if(v>0)return 1;
    return -1;
}


Vector V[50007];
int stk[50007];

bool cmp(Vector V1,Vector V2)
{
    int t=Turn(V[0],V1,V2);
    if(!t)
    {
        return (V1-V[0]).mag2()<(V2-V[0]).mag2();
    }
    return t>0;
}

int hull(int N)
{
    int i,id=0;
    int top=0;

    if(N<=2)
    {
        stk[top++]=0;
        if(N==2)stk[top++]=1;
        return top;
    }

    for(i=1;i<N;i++)
    {
        if(V[i].y==V[id].y)
        {
            if(V[i].x<V[id].x)id=i;
        }
        if(V[i].y<V[id].y)id=i;
    }

    swap(V[0],V[id]);
    sort(V+1,V+N,cmp);

    stk[top++]=0;
    stk[top++]=1;

    for(i=2;i<N;i++)
    {
        while(Turn(V[stk[top-2]],V[stk[top-1]],V[i])<1&&top>1)top--;
        stk[top++]=i;
    }

    return top;
}


int main()
{

   // freopen("in.txt","r",stdin);
    int T,N,i,ks=0;
    double r;
    scanf("%d",&T);

    while(T--)
    {
        ks++;
        scanf("%d%lf",&N,&r);
        for(i=0;i<N;i++)
        {
            V[i].scan();
        }

        int top=hull(N);

        stk[top]=stk[0];

        double ans=0;

        for(i=0;i<top;i++)ans+=(V[stk[i]]-V[stk[i+1]]).mag();


        ans+=2*acos(-1)*r;


        printf("Case %d: %.10lf\n",ks,ans);
    }


    return 0;
}
