#include <iostream>
using namespace std;
struct tree{
int info;
tree* left;
tree* right;
};
tree * root=NULL;
tree* insertion(tree * root, int value)
{

    if(root==NULL)
    {

        root=new tree;
        root->info = value;
        root->left = NULL;
        root->right = NULL;

    }
    else if(root->info==value)
    {

        return root;
    }
    else if(root->info<value)
        root->right = insertion(root->right,value);
    else if(root->info>value)
        root->left = insertion(root->left,value);

}
void inorder(tree* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->info<<" ";
    inorder(root->right);

}
tree* minimum(tree * root)
{
    while(root!=NULL && root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
tree* maximum(tree * root)
{
    while(root!=NULL && root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}




tree* deletion(tree* root,int value,int type)
{
    if(root==NULL)
        return root;


    else if(root->info<value)
    {
        root->right = deletion(root->right,value,type);
    }
    else if(root->info>value)
    {
        root->left = deletion(root->left,value,type);
    }

    else if(root->info==value)
    {

        if(root->left==NULL && root->right==NULL)
        {

            //delete(root);
            return NULL;
        }
        else if(root->left==NULL)
        {
            return root->right;
        }
        else if(root->right==NULL)
        {
            return root->left;
        }
        else{
            if(type==1)
            {

                tree * p = minimum(root->right);

                root->info = p->info;

                root->right = deletion(root->right,value,type);
            }
            else if(type==2)
            {

                tree * p = maximum(root->left);

                root->info = p->info;
                root->left = deletion(root->left,value,type);



            }
        }
    }
}
int MAX (tree* root)
{
    while(root!=NULL && root->right!=NULL)
    {
        root=root->right;
    }
    return root->info;
}
int MIN (tree* root)
{
    while(root!=NULL && root->left!=NULL)
    {
        root=root->left;
    }
    return root->info;
}





int main()
{
    tree* root1=NULL;
    root1=insertion(root1,10);
    root1=insertion(root1,9);
    root1=insertion(root1,20);
    root1=insertion(root1,4);
    //root=root1;
    inorder(root1);
    cout<<endl;
    //root1 = deletion(root1,20,1);
    //root1 = deletion(root1,4,1);

    //inorder(root1);
    cout<<endl;
    int y = MIN(root1);
    int x = MAX(root1);
    cout<<x<<" "<<y;


}
