#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
    node *prev;

};
node * dub_list = NULL;

void insertion_at_start(int value)
{
    node *p;
    if (dub_list == NULL)
    {
        p = new node;
        p->info = value;
        p->next = NULL;
        p->prev = NULL;
        dub_list = p;
    }
    else
    {
        p = new node;
        p->info = value;
        p->next = dub_list;
        p->prev = NULL;
        (p->next)->prev=p;
        dub_list = p;
    }
}



int main()
{
    insertion_at_start(1);
    insertion_at_start(2);
    insertion_at_start(3);
    insertion_at_start(4);
    insertion_at_start(5);
    insertion_at_start(6);
    node * l;
    l = dub_list;
    cout<<"Normal doubly linked list:"<<endl;
    while(l!= NULL)
    {
        cout<<l->info;
        l = l->next;
    }
    cout<<endl<<endl;

    node * q;
    node * m;
    q = dub_list;
    //m = q->next;

    cout<<"Pair wise swapped linked list:"<<endl;
    while(q!=NULL)
    {

        int x = (q->next)->info;
        (q->next)->info = q->info;
        q->info = x;
        cout<<q->info;
        cout<<(q->next)->info;
        q = (q->next)->next;
        //m = q->next;
        if(q->next==NULL)
        {
            cout<<q->info;
        }
    }
}

