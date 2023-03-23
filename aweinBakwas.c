//is mai koi kaam ki cheez nhi hai awein bus tayyari kai liye bana rhi hun dimagh kharab hai mera

#include<iostream>
using namespace std;
struct queue1{
int arr[5];
int R;
int F;
};

queue1 q;
q.R=-1;
q.F=-1;
void insertion(int value)
{

if(F==0 and R=size-1 || F=R+1)
{
overflow
}


else if(F==-1 && R==-1)
{
F=0;
R=0;
arr[R]=value
}
else if(F!=0 and R=size -1)
{
R=0;
arr[R]=value;
}
else
R++;
arr[R] = value;
}



void deletion(int value)
{

if(F==size-1)
{
F=0;
}


else if(F==-1 && R==-1)
{
underflow;
}
else if(F==R)
{
R=0;
F=0;

}
else
F++;
}





insertion linked list at start
if(lin-list==Null)
{
    node*p;
    p= new node;
    p->info = value;
    p->next == NULL;
    lin_lst=p;

}
else{
    node*p;
    p=new node;
    p->info = value;
    p->next=lin_list;
    lin_list=p;

}






deletion linked list at start
if(lin-list==Null)
{
  no node to delete;

}
else{
    node*p;
    p=lin_list;
    lin_list=p->next;
    delete(p);


}






