/** Jai Shree Ram **/
/** ssavi. ICT-4 CoU **/

#include<bits/stdc++.h>
#define DIST(x1,x2, y1, y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define DIST3D(x1,x2, y1, y2, z1, z2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)) + ((z1-z2)*(z1-z2)))
#define CLR(a) a.clear()
#define VCLR(a, n) for(int i=0; i<=n+3; i++) a[i].clear()
#define SIZE(a) a.size()
#define ERASE(a, b) memset(a, b, sizeof a)
#define pb push_back
#define LL long long
#define ULL unsigned long long
#define DBG cout<<"I Am Here"<<endl
#define DBGA(a) cout<<a<<endl
#define DBGI(b,a) cout<<b<<' '<<a<<endl
#define DBGL(i,s,e,b) or(int i=s; i<=e; i++) cout<<b<<endl
#define INF 1e9
#define INV 1e-6
#define SF(a) scanf("%I64d", &a)
#define PF(a) printf("%I64d\n", a)
#define sf(a) scanf("%d", &a)
#define pf(a) printf("%d\n", a)
#define pii pair<int,int>
#define PIS pair<double,string>
#define PII pair<LL,LL>
#define MAX 600005
#define CASE(i) printf("Case %d:", i);
#define PI acos(-1)
#define piis pair<int, string>
#define fast1 ios_base::sync_with_stdio(false);
#define fast2 cin.tie(0)
#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))
#define LOOP(i, b, n) for(i=b; i<=n; i++)
#define nl puts("")

using namespace std;

/** ---------------------------------------------- **/
/** Header And Defintions Ends Here. **/
/** ---------------------------------------------- **/

int dx4[] = {0, 0, 1, -1}; int dy4[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, -1, 1, 1, -1, -1};int dy8[] = {1, -1, 0, 0, 1, -1, 1, -1};

const double GRS = (1 + sqrt(5))/2;

LL power(int X, int P)
{
    LL ans = 1;
    for(int i=1; i<=P; i++){
        ans = ans * (LL)X;
    }
    return ans;
}

LL ABS(LL A, LL B)
{
    LL ret = A - B;
    if(ret<0) return -ret;
    return ret;
}

LL MOD = 1000000007;
const LL BIGMAX = power(2,63) - 1;

LL ADD(LL X, LL Y)
{
    if(X+Y<0)
        return (X - MOD) + Y;
    else if(X+Y>=MOD)
        return X+Y-MOD;
    else
        return X+Y;
}

LL prod(LL X, LL Y) // CUSTOM PRODUCT FUNCTION FOR BIG NUMBER MULTIPLICATION
{
    if(Y==0 || X<=(BIGMAX/Y)) return (X*Y)%MOD;
    LL result = 0;

    if(X>Y) swap(X,Y);
    while(X>0){
        if(X&1!=0){
            result = ADD(result, Y);
        }
        X>>=1;
        Y -= MOD - Y;
        if(Y<0)
            Y = Y + MOD;
    }
    return result;
}

LL bigmod(LL a, LL b){
    LL x = 1, y = a%MOD;
    while(b > 0) {
        if(b%2 == 1) {
            x = prod(x,y);
        }
        y = prod(y,y);
        b /= (LL)2;
    }
    return x;
}

LL MODINVERSE(LL a){
    return bigmod(a, MOD-2);
}

LL ncrdp[900][1000];
LL NCR(int n, int r)
{
    if(r==1) return n;
    else if(n==r) return 1;
    else
    {
        if(ncrdp[n][r]!=-1) return ncrdp[n][r];
        else
        {
            ncrdp[n][r]=NCR(n-1,r) + NCR(n-1,r-1);
            return ncrdp[n][r];
        }
    }
}

const int MAXN = 1400005;
int status[(MAXN/32)+10];
vector<int>primelist;

bool check(int n, int pos) { return (bool)(n & (1<<pos)); }
int SET(int n, int pos){ return n=n|(1<<pos);}

void sieve()
{
    int sqrtN=int (sqrt(MAXN));
    status[1>>5]=SET(status[1>>5],1&31);
    for(int j=4; j<=MAXN; j=j+2)
        status[j>>5]=SET(status[j>>5],j&31);
    for(int i=3; i<=sqrtN; i=i+2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            for(int j=i*i; j<=MAXN; j= j + (i<<1))
            {
                status[j>>5]=SET(status[j>>5],j&31);
            }
        }
    }
    primelist.push_back(2);
    for(int i=3; i<=MAXN; i=i+2)
    {
        if(check(status[i>>5],i&31)==0) {
            primelist.push_back(i);
        }
    }
}


/**----------------------------------------------------------------------------**/
/** Template Ends Here. Main Function And User Defined Functions Starts Here. **/
/**--------------------------------------------------------------------------**/

vector<int>G[123456];
bool visited[123456];
int start[123456], low[123456], parent[123456], COMP[123456];
stack<int>myStack;
int node, edge;
int sec = 0; int scc = 0;

void init(){
    for(int i=0; i<=100000; i++){
        G[i].clear();
        visited[i] = false;
        start[i] = -1;
        low[i] = -1;
        parent[i] = i;
        COMP[i] = -1;
    }
    while(!myStack.empty()){
        myStack.pop();
    }
}

void DFS(int u){

    sec = sec + 1;
    start[u] = low[u] = sec;
    myStack.push(u);
    visited[u] = true;
    for(int i=0; i<G[u].size(); i++){
        int v = G[u][i];

        if(start[v]==-1){
         //   parent[v] = u;
            DFS(v);
            low[u] = min(low[u], low[v]);
        }
        else if(visited[v]){
           // if(parent[u]!=v)
                low[u] = min(low[u], start[v]);
        }
    }

    if(start[u]==low[u]){
        scc++;
        while(myStack.top()!=u){
            int w = myStack.top();
            myStack.pop();
            printf("%d ", w);
            visited[w] = false;
            COMP[w] = scc;
        }
        int w = myStack.top();
        myStack.pop();
        visited[w] = false;
        printf("%d\n", w);
        COMP[w] = scc;
    }
}

int main(){

    while(scanf("%d %d", &node, &edge)==2){
        init();
        for(int i=1; i<=edge; i++){
            int u, v;
            scanf("%d %d", &u, &v);
            G[u].push_back(v);
          //  G[v].push_back(u);
        }

        scc = 0; sec = 0;
        for(int i=1; i<=node; i++){
            if(start[i]==-1){
                DFS(i);
            }
        }
        cout<<"SCC = "<<scc<<endl;
        for(int i=1; i<=node; i++){
            cout<<start[i]<<' '<<low[i]<<' '<<COMP[i]<<endl;
        }

    }
}
