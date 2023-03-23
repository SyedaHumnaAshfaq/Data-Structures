#include<iostream>
using namespace std;
struct Queue{
int Q[10];
int R;
int F;
void insert_at_rear(int value)
{
    if(F ==0 && R == 10- 1)
    {
        cout<<"oveflow";
    }
    else if(F == -1 && R == -1)
    {

        F=0;
        R=0;
        Q[R] = value;
    }
    else if(F!= 0 && R== 10-1)
    {
        R=0;
        Q[R] = value;
    }
    else
    {
        R++;
        Q[R] = value;

    }
}
void delete_from_front()
{
    if(F==-1 && R==-1)
    {
        cout<<"No elements in the queue to delete!"<<endl;
    }
    else if(R!=-1)
    {
        F++;
    }
    else if(F==10-1 && R==10-1)
    {
        F=-1;
        R=-1;
    }
    else
    {
        F++;
    }
}
};


int main()
{


    cout<<"Program to print Fibonnacci sequence uptil 9 numbers using circular queue:"<<endl<<endl;
    Queue Q1;
    Q1.F = -1;
    Q1.R = -1;
    Q1.insert_at_rear(0);
    Q1.insert_at_rear(1);
    int x;
    x=Q1.Q[Q1.R-1];


    cout<<x<<" ";
    while(Q1.R!=10-1)
    {

        cout<<Q1.Q[Q1.R]<<" ";
        Q1.insert_at_rear(x+Q1.Q[Q1.R]);
        x=Q1.Q[Q1.R-1];
        }




}
