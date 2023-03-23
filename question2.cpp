#include<iostream>
using namespace std;
struct node{
int info;
node *next;
};

node* lin_list=NULL;


void insertion (int value)
{
    node*p;
    if(lin_list==NULL)
    {
        p=new node;
        p->info = value;
        lin_list = p;
        p->next = NULL;

}
    else{
        node *q;
        node *l;
        q = lin_list;
        l = lin_list;
        while(q->next !=NULL)
        {

            if(q->info == value)

               {

                   p=new node;
                   p->info = value;
                   p->next = q;
                   l->next = p;


               }
                l=q;

                q=q->next;

        }
        p = new node;
        p->info = value;
        p->next = lin_list;
        lin_list = p;

}}
void display()
{
    node*w;
    w = lin_list;
      if(w->next == NULL)
        {
            cout<<w->info;
            w = w->next;


        }
    while(w->next != NULL )
    {

        cout<<w->info;
        w = w->next;
    }
}
int main()
{

   insertion(5);
   //display();
   insertion(4);
   //display();
   insertion(3);
   insertion(2);
   insertion(1);
   //display();
   insertion(3);
   display();
   cout<<endl<<"ignore the first three, the main entry of 3 is done after a three that was initially present in the linked list";

}
