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
#define sc(a) scanf("%I64d", &a)
#define pr(a) printf("%I64d\n", a)
#define si(a) scanf("%d", &a)
#define pii pair<int,int>
#define PII pair<LL,LL>
#define MAX 600005
#define CASE(i) printf("Case %d:", i);
#define PI acos(-1)
#define piis pair<int, string>
#define fast1 ios_base::sync_with_stdio(false);
#define fast2 cin.tie(0)
#define CHECK_BIT(var,pos) ((var & (1 << pos)) == (1 << pos))
#define LOOP(i, b, n) for( int i=b; i<=n; i++)
#define nl puts("")


using namespace std;

/** ---------------------------------------------- **/
/** Header And Defintions Ends Here. **/
/** ---------------------------------------------- **/

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

const int MAXN = 105;
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

struct matrix{
    LL M[5][5];
    int row, column;
};

matrix Mat_Mul(matrix A, matrix B)
{
    matrix C;
    C.row = A.row;
    C.column = B.column;

    for(int i=1; i<=C.row; i++){
        for(int j=1; j<=C.column; j++){
            LL sum = 0;
            for(int k=1; k<=A.column; k++){
                sum = sum + A.M[i][k] * B.M[k][j];
                sum = sum % MOD;
            }
            C.M[i][j] = sum;
        }
    }
    return C;
}

matrix Mat_Expo(matrix A, LL n)
{
    if(n==1) return A;
    if(n%2==1)
        return Mat_Mul(A, Mat_Expo(A, n-1));
    matrix ret = Mat_Expo(A, n/2);
    ret = Mat_Mul(ret, ret);
    return ret;
}

int main()
{
    LL n;
    scanf("%lld", &n);
    matrix mat;
    mat.row = mat.column = 2;
    mat.M[1][1] = 1LL; mat.M[1][2] = 1LL;
    mat.M[2][1] = 1LL; mat.M[2][2] = 0LL;

    if(n==1){
        printf("0\n");
    }
    else if(n<=3){
        printf("1\n");
    }
    else{
        mat = Mat_Expo(mat, n-3);
        LL ans = (mat.M[1][1]*1 + mat.M[1][2]*1);
        ans = ans % MOD;
        printf("%lld\n", ans);
    }
}
