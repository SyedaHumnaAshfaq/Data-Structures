#include <iostream>
using namespace std;

struct node{
int info;
node *next;
};

node *lin_list = NULL;
//node*p;
void insert_at_front(int value)
{
    node *p;

    if(lin_list == NULL)
    {
        p=new node;
        p -> info = value;
        p -> next = NULL;
        lin_list = p;}
    else
        {
            p=new node;
            p->info=value;
            p->next = lin_list;
            lin_list = p;}
}
void Delete_first_node()
{
    node *p;
    if(lin_list == NULL)
    {
        cout<<"No node in the list to delete"<<endl;
    }
    else
    {
        p = lin_list;
        lin_list = p->next;
        int X = p->info;
        delete(p);
    }

}
void insert_at_end(int value)
{
    node *p;
    if (lin_list== NULL)
    {
        p = new node;
        p->info = value;
        p->next = NULL;
        lin_list = p;
    }
    else
    {
        node *q;
        q = lin_list;
        while(q->next != NULL)
        {
            q = q->next;
        }
        p = new node;
        p->info = value;
        p->next = NULL;
        q->next = p;
    }

}
void delete_last_node()
{
    node *p;
    p = lin_list;
    node *q;
    if(lin_list == NULL)
    {
        cout<<"no node to delete";
    }

    else if(p->next == NULL)
    {
        delete (p);

    }

    else{
        while(p->next != NULL)
        {
            q = p;
            p = p->next;

        }

        q->next = NULL;
        delete(p);

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
void count_nodes()
{
    node *temp;
    int c = 0;
    temp = lin_list;
    while(temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    cout<<c;
}
bool search_specific(int value)
{
    node *p;
    p = lin_list;
    while(p!=NULL)
    {
        if(p->info == value)
        {
            return true;
        }
        else
        {
            p = p->next;

        }

    }
    return false;
}
void sort_ascending()
{
    node *p;
    p = lin_list;
    node *q;
    q = p->next;
    while(p->next != NULL)
    {
        while(q!= NULL)
        {
            if(q->info<p->info)
            {
                int temp = q->info;
                q->info = p->info;
                p->info = temp;
            }
            q = q->next;
        }
        p = p->next;
        q = p->next;
    }

}
void display()
{
    node *pointer;
    pointer = lin_list;
    while((pointer != NULL))
        {
            cout<<pointer->info;
            pointer = pointer->next;
        }
    //if(lin_list ->next == NULL)
    //{
    //   cout<<lin_list->info;

    //}




}

int main()
{
    //node node1;
    insert_at_front(4);
    insert_at_front(7);
    insert_at_front(8);
    insert_at_front(2);
    insert_at_front(6);
    insert_at_front(1);
    //display();
    //cout<<endl;
    //Delete_first_node();
    //display();
    //cout<<endl;
    //insert_at_front(8);
    //display();
    //insert_at_front(2);
    //insert_at_front(6);
    //display();
    insert_at_specific(9);
    //insert_at_specific(8);
    //delete_from_specific();
    display();
    //count_nodes();
    //cout<<search_specific(6);
    //delete_last_node();
    //display();
    //cout<<endl;
    //Delete_first_node();
    //Delete_first_node();

    return 0;

}
