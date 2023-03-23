#include<iostream>
using namespace std;
struct node
{
    int info;
    node*next;
};

node* lin_list = NULL;
node * lin_list_prime = NULL;
node * lin_list_notprime = NULL;


void insert_in_prime(int value)
{
     node *p;

    if(lin_list_prime == NULL)
    {
        p=new node;
        p -> info = value;
        p -> next = NULL;
        lin_list_prime = p;}
    else
        {
            p=new node;
            p->info=value;
            p->next = lin_list_prime;
            lin_list_prime = p;}

}
void insert_in_notprime(int value)
{
     node *p;

    if(lin_list_notprime == NULL)
    {
        p=new node;
        p -> info = value;
        p -> next = NULL;
        lin_list_notprime = p;}
    else
        {
            p=new node;
            p->info=value;
            p->next = lin_list_notprime;
            lin_list_notprime = p;}

}



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
void pair_wise_swapping()
{
    node * l;
    l = lin_list;
    cout<<endl<<endl<<"Normal linked list:"<<endl;
    while(l!= NULL)
    {
        cout<<l->info;
        l = l->next;
    }
    cout<<endl<<endl;

    node * q;
    node * m;
    q = lin_list;
    m = q->next;

    cout<<"Pair wise swapped linked list:"<<endl;
    while(m!=NULL)
    {

        int x = q->info;
        q->info = m->info;
        m->info = x;
        cout<<q->info;
        cout<<m->info;
        q = m->next;
        m = q->next;
        if(q->next==NULL)
        {
            cout<<q->info;
        }
    }

}

void reverse_by_node()
{
    cout<<"Normal linked list:"<<endl;
    node*s;
    s = lin_list;
    while(s!=NULL)
    {

        cout<<s->info;
        s=s->next;
    }
    cout<<endl;

    node *p;
    node *q;
    node *m;
    p = lin_list;
    m=NULL;
    q=NULL;
    while(p!=NULL)
    {
        q =p->next;
        p->next = m;
        m=p;
        p=q;
    }
    lin_list = m;
    node*k;
    k=lin_list;
    cout<<endl<<"Reversed linked list:"<<endl;
    while(k!=NULL)
    {
        cout<<k->info;
        k=k->next;
    }


}
void prime_numbers()
{

    node * p;
    node * l;
    node * s;
    p=lin_list;
    l=lin_list_prime;
    s=lin_list_notprime;
    while(p!=NULL)
    {
        if(p->info==1 || p->info==2 || p->info == 3)
        {
           insert_in_prime(p->info);
        }
        for(int x=2;x<=p->info/2;x++)
        {
           // if(x!=p->info)
        //{
            if(p->info%x!=0)
            {
                insert_in_prime(p->info);
                break;

            }
            else
            {
                insert_in_notprime(p->info);
                break;

            }
        //}
        }
        p=p->next;
    }

}



int main()
{
    insert_at_front(6);
    insert_at_front(5);
    insert_at_front(4);
    insert_at_front(3);
    insert_at_front(2);
    insert_at_front(1);
    node *o = lin_list;
    cout<<"normal list:"<<endl;
    while(o!=NULL)
    {
        cout<<o->info;
        o = o->next;
    }
    cout<<endl;
    prime_numbers();
    node*k;
    node*s;
    s=lin_list_notprime;
    k=lin_list_prime;
    cout<<"prime list: "<<endl;
    while(k!=NULL)
    {
        cout<<k->info;
        k=k->next;
    }

    cout<<endl;
    cout<<"Not prime list:"<<endl;
    while(s!=NULL)
    {
        cout<<s->info;
        s=s->next;
    }


    cout<<endl;
    reverse_by_node();
    cout<<endl;

    pair_wise_swapping();
    //reverse_by_node();









}
