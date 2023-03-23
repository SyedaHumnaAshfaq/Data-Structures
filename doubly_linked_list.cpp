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

void insertion_at_end(int value)
{
    node*p;
    node*q;
    if(dub_list == NULL)
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
        p->next = NULL;
        q = dub_list;
        while(q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
        p->prev = q;
    }

}

void insertion_at_specific_point(int point,int value)
{
    node*p;
    node*q;
    if(dub_list == NULL)
    {
        p = new node;
        p->info = value;
        p->next = NULL;
        p->prev = NULL;
        dub_list = p;
    }
    else
    {
        q = dub_list;
        while(q != NULL)
        {
            if(q->info == point)
            {
                p=new node;
                p->info = value;
                p->next = q;
                p->prev = q->prev;
                q->prev = p;
                (p->prev)->next = p;

            }
            q = q->next;
        }
    }
}
void delete_first_node()
{
    node *p;
    p = dub_list;
    dub_list = p->next;
    (p->next)->prev = NULL;
    delete(p);
}


void delete_at_specific(int point)
{
    node *q;
    q = dub_list;
    while(q!=NULL)
    {
        if(q->info == point)
        {

            (q->next)->prev = q->prev;
            (q->prev)->next = q->next;
            delete(q);
            break;
        }
        q = q->next;
    }
}






int main()
{
    insertion_at_start(5);
    insertion_at_end(6);
    insertion_at_end(7);
    insertion_at_end(8);

    insertion_at_specific_point(6,9);

    delete_at_specific(6);
    node*p;
    p = dub_list;
    while(p!=NULL)
    {
        cout<<p->info;
        p = p->next;

    }



}
