#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<string.h>
#include<cstring>
#include<algorithm>
#define sz  100

int comp(const void *a,const void *b);

typedef struct
{
    char name[15];
    int dd;
    int mm;
    int yyyy;
} data;
data str[100];
using namespace std;
int main()

{
    int test_case,i;
    scanf("%d",&test_case);
    for(i=0; i<test_case; i++)
        scanf("%s %d %d %d",&str[i].name,&str[i].dd,&str[i].mm,&str[i].yyyy);
    qsort(str,test_case,sizeof(str[0]),comp);
    printf("%s\n%s\n",str[0].name,str[test_case-1].name);
    return 0;

}

int comp(const void *a,const void *b)
{

    data *x=(data*)a;
    data *y=(data*)b;
    if(x->yyyy>y->yyyy)
        return -1;
    else if(x->yyyy<y->yyyy)
        return 1;
    else
    {
        if(x->mm>y->mm)
            return -1;
        else if(x->mm<y->mm)
            return 1;
        else
        {
            if(x->dd>>y->mm)
                return -1;
            else if(x->dd<y->dd)
                return 1;
            else return 0;

        }
    }
}
