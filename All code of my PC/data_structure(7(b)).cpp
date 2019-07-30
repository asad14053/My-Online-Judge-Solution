#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a;
    struct node *n;
};
int main()
{
    int b;
    cin>>b;
    struct node *s;
    s=(struct node*)malloc(sizeof(struct node));
    s->a=b;
    s->n=NULL;
    cout<<s->a<<"\naddress:"<<s<<" "<<s->n<<endl;
    return 0;
}
