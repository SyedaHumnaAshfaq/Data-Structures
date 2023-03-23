#include<iostream>
using namespace std;

struct tree{
int info;
tree* left;
tree* right;
};
tree* root = NULL;
//tree* root1=NULL;
tree* minimum(tree* root)
{
    tree* p = root->right;
    while(p!=NULL && p->left!=NULL)
    {
        p = p->left;
    }
    return p;
}
tree* maximum(tree* root)
{
    tree* p = root->left;
    while(p!=NULL && p->right!=NULL)
    {
        p = p->right;
    }
    return p;
}


void postorder(tree* root){
if(root==NULL){
        return;
}
    postorder(root->left);
    postorder(root->right);
    cout<<root->info<<" ";

}
void preorder(tree* root){
if(root==NULL){
        return;
}
    cout<<root->info<<" ";
     preorder(root->left);
    preorder(root->right);

}
void inorder(tree* root){
if(root==NULL){
        return;
}
    inorder(root->left);
    cout<<root->info<<" ";
    inorder(root->right);
}
tree* Insert(tree*root,int value)
{
    if(root==NULL)
    {
        root = new tree;
        root->info = value;
        root->right = NULL;
        root->left = NULL;
    }
    else if(root->info==value)
    {
        return root;
    }
    else if(root->info>value)
    {
        root->left = Insert(root->left,value);

    }
    else if(root->info<value)
    {
        root->right = Insert(root->right,value);

    }

}
tree* Delete(tree*root,int value,int type)
{
    if(root==NULL)
    {
        return root;
    }
    else if(root->info<value)
    {
        root->right = Delete(root->right,value,type);
    }
    else if(root->info>value)
    {
        root->left = Delete(root->left,value,type);
    }
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            return NULL;
        }
        else if(root->left==NULL)
        {
            tree* p = root->right;
            delete(root);
            return p;
        }
         else if(root->right==NULL)
        {
            tree* p = root->left;
            delete(root);
            return p;
        }
        else
        {
            if(type==1)
            {
                tree*p = minimum(root);
                root->info = p->info;
                root->right = Delete(root->right,p->info,value);
            }
            else if(type==2){
                tree*p = maximum(root);
                root->info = p->info;
                root->left = Delete(root->left,p->info,value);

            }
        }

    }
       return root;
}







int main()
{
    tree* root;
    root = NULL;
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,30);
    root = Insert(root,50);
    root = Insert(root,40);
    Delete(root,50,2);
    Delete(root,20,2);

    inorder(root);

}
