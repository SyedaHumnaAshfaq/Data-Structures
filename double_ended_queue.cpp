#include<iostream>
using namespace std;
struct queue1{
int Q[3];
int R;
int F;
void insert_rear(int value)
{
    if((F==0 && R==3-1) || (F==R+1))
        cout<<"Overflow"<<endl;
    //else if(F==R && F!=-1 && R!=-1)
    //{
      //  F=-1;
       // R=0;
       // Q[R] = value;

    //}
    else if(F==-1 && R==-1)
    {
        F=0;
        R=0;
        Q[R] = value;
    }
    else if(F!=0 && R==3-1)
    {
        R=0;
        Q[R] = value;
    }
    else{
        R++;
        Q[R] = value;
    }
}
void delete_front()
{
    if(F==-1 && R==-1)
        cout<<"Underflow";
    //else if(R==3-1 && F==3-1)
      //  cout<<"empty";

    else if(F==R)
    {
        F=-1;
        R=-1;
        //cout<<"Empty Queue"<<endl;
    }
    else if(F==3-1)
        F=0;

    else
        F++;
}
void insert_front(int value)
{
    if(F==R+1)
    {
        cout<<"overflow";
    }
    else if(F==-1 && R==-1)
    {
        F=0;
        R=0;
        Q[F] = value;
    }
    else if(F==0)
    {
        F=3-1;
        Q[F]=value;
    }
    else
    {
        F--;
        Q[F]=value;
    }
}
void delete_rear()
{
    if(F==-1 && R==-1)
    {
        cout<<"underflow";
    }
    else if(R==0)// && F!=R)
    {
        R=3-1;
    }
    else if(F==R)
    {
        F=-1;
        R=-1;
    }
    else
    {
        R--;
    }
}
void Display()
{
    if(R==-1 && F==-1)
    {
        cout<<"No elements to display!";
    }
    else
    {
        /*if(R==3-1 && F!=-1)
        {for(int i = F; i<3 ; i++)
        {
            cout<<Q[i]<<" ";
        }}
        else if(F==-1 && R!=-1)
        {
            for(int i = R;i<3;i++)
            {
                cout<<Q[i]<<" ";
            }
        }*/
        for(int i =0 ;i<3;i++)
        {
            cout<<Q[i]<<" ";
        }
    }


}
};
int main()
{
    queue1 Q1;
    Q1.R = -1;
    Q1.F = -1;
    Q1.insert_rear(5);
    //cout<<Q1.Q[Q1.R];
    Q1.insert_front(8);
    Q1.insert_front(7);

    //cout<<Q1.Q[Q1.F];
    Q1.delete_rear();
    //Q1.Display();
    Q1.delete_front();
    Q1.Display();



}

