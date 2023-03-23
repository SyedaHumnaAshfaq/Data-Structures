#include<iostream>
using namespace std;
struct tree{
int info;
tree *left;
tree *right;
};

tree* insertion(tree*root,int value)
{

    //tree *root =NULL;
    if(root==NULL)
    {

        root= new tree;
        root->info = value;
        root->left = NULL;
        root->right = NULL;

    }
    else if(root->info == value)
    {
        cout<<"value discarded";


    }
    else if(root->info<value)
    {
         //root = root->right;
         root->right = insertion(root->right,value);
         //cout<<(root->right)->info;
    }
    else if(root->info>value)
    {
        root->left = insertion(root->left,value);
        //cout<<(root->left)->info;
    }
    }
void preorder(tree*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(tree*root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->info<<" ";
    inorder(root->right);


}
void postorder(tree*root)
{
    if(root==NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->info<<" ";


}




int main()
{
    tree*root=NULL;
    root=insertion(root,2);
    root=insertion(root,1);
    root=insertion(root,3);
    root=insertion(root,0);
    cout<<"Preorder: "<<endl;
    preorder(root);
    cout<<endl<<"Inorder: "<<endl;
    inorder(root);
    cout<<endl<<"postorder: "<<endl;
    postorder(root);

    //cout<<"root: "<<root->info<<endl;
    //cout<<"right: "<<(root->right)->info<<endl;
    //cout<<"left: "<<(root->left)->info<<endl;
    //cout<<((root->right)->right)->info;

}
