#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *lft,*rht;
}*root;
void inorder(struct node *r);
void preorder(struct node *r);
void postorder(struct node *r);
struct node* insrt(struct node *r, int data);
int main()
{
    root=NULL;
    int n,p,q,v,i;
    cout<<"How many numbers : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v;
        root=insrt(root,v);
    }
    cout<<"Inorder :";  inorder(root);
    cout<<endl<<"Preorder : ";
    preorder(root);
    cout<<endl<<"Postorder : ";
    postorder(root); cout<<endl;
}
struct node* insrt(struct node *r,int data)
{
    if(r==NULL)
    {
        r=(struct node*)malloc(sizeof(struct node));
        r->val=data;
        r->lft=NULL;
        r->rht=NULL;
    }
    else if(data<r->val) r->lft=insrt(r->lft,data);
    else r->rht=insrt(r->rht,data);
    return r;
};
void inorder(struct node *r)
{
    if(r!=NULL)
    {
        inorder(r->lft);
        cout<<r->val<<" ";
        inorder(r->rht);
    }
}
void preorder(struct node *r)
{
    if(r!=NULL)
    {
        cout<<r->val<<" ";
        preorder(r->lft);
        preorder(r->rht);
    }
}
void postorder(struct node *r)
{
    if(r!=NULL)
    {
        postorder(r->lft);
        postorder(r->rht);
        cout<<r->val<<" ";
    }
}
