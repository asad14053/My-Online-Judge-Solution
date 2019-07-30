#include<bits/stdc++.h>
using namespace std;
struct node
{
    char val;
    struct node *lft,*rht;
}*root;
struct node* insert(struct node *r,char data)
{
    if(r==NULL)
    {
        r=new node;
        r->val=data;
        r->lft=NULL;
        r->rht=NULL;
    }
    else if(data<r->val)
        r->lft=insert(r->lft,data);
    else
        r->rht=insert(r->rht,data);
    return r;
}
void postorder(struct node *r)
{
    if(r!=NULL)
    {
        postorder(r->lft);
        postorder(r->rht);
        cout<<r->val;
    }
}
int main()
{
    char v;
    string s;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            root=insert(root,v);
        }
        cin>>s;
        postorder(root);
        cout<<endl;
        root =NULL;
    }
    return 0;
}
