#include <iostream>
using namespace std;

struct node{
int info;
node *next;
};

node *lin_list = NULL;
void insert_at_front(int value)
{
    node *p;
    if(lin_list==NULL)
    {
        p = new node;
        p->info = value;
        lin_list = p;
        p->next = lin_list;
    }
    else
    {
        node*q;
        q = lin_list;
        while(q->next != lin_list)
        {
            q = q->next;
        }
        p = new node;
        p->info = value;
        p->next = lin_list;
        lin_list = p;
        q->next = lin_list;

    }
}
void delete_first_node()
{
    if(lin_list == NULL)
    {
        cout<<"No node to delete";
    }
    else
    {
        node *q;
        q = lin_list;
        while(q->next != lin_list)
        {
            q = q->next;
        }
        node*p;
        p = lin_list;
        lin_list = p->next;
        q->next = lin_list;
        delete(p);
    }

}
void insert_at_end(int value)
{
    node*p;
    if(lin_list == NULL)
    {
        p = new node;
        p->info = value;
        lin_list = p;
        p->next = lin_list;
    }
    else
    {
        node *q;
        q = lin_list;
        while(q->next != lin_list)
        {
            q = q->next;
        }
        p = new node;
        p->info = value;
        q->next = p;
        p->next = lin_list;
    }
}
void delete_at_end()
{
    if(lin_list == NULL)
    {
        cout<<"No node to delete";
    }
    else
    {
        node*q;
        node*p;
        q = lin_list;
        while(q->next != lin_list)
        {
            p = q;
            q = q->next;
        }
        p->next = lin_list;
        delete(q);

    }
}
void delete_from_specific()
{
    node *p;
    p = lin_list;
    node *q;
    cout<<"Enter the value where deletion is to be done: ";
    int y;
    cin>>y;
    if(lin_list == NULL)
    {
        cout<<"No node to delete";
    }
    else
    {
        while(p->next!=NULL)
        {
            if(p->info == y)
            {
                q->next = p->next;
                delete(p);
                //q=q->next;
                break;
            }
            else
            {
                q = p;
                p = p->next;
            }
        }


    }

}
void insert_at_specific(int value)
{
    node*p;
    node*q;
    q = lin_list;
    cout<<"Enter the value where insertion is to be made: ";
    int y;
    cin>>y;
    if(lin_list == NULL)
    {
        p = new node;
        p->info = value;
        p->next = NULL;
        lin_list = p;
    }
    else
    {
        while(q->next != NULL)
        {
            if(q->info == y)
            {
                p = new node;
                p->info = value;
                p->next = q->next;
                q->next = p;
            }
            q = q->next;
        }
    }
}
void merge_two(node* list1,node* list2)
{
    node*p2 = list2;
    node*p1 = list1;
    while(p1->next != list1)
    {
        p1 = p1->next;
    }
    p1->next = list2;
    while(p2->next != list2)
    {
        p2=p2->next;
    }
    p2->next = list1;
    node *f;
    f = list1;
    while(f->next != list1)
    {
        cout<<f->info<<" ";
        f = f->next;
    }
    if(f->next == list1)
    {
        cout<<f->info;
    }

}


int main()
{

    //insert_at_front(8);
    //insert_at_front(10);
    //insert_at_end(12);
    //delete_at_end();
    //cout<<lin_list->info<<" ";
    //lin_list = lin_list->next;
    //cout<<lin_list->info<<" ";
    //lin_list = lin_list->next;
    //cout<<lin_list->info;
    node *list1 = NULL;
    node *list2 = NULL;
    insert_at_front(25);
    insert_at_front(30);
    list1 = lin_list;

    //cout<<list1->info<<" ";
    lin_list = NULL;
    insert_at_front(17);
    insert_at_front(20);
    list2 = lin_list;
    //cout<<list2->info<<" ";
    merge_two(list1,list2);


}
