#include<iostream>
using namespace std;
struct queue1{
int Q[3];
int R;
int F;
void insertion(int value)
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
void deletion()
{
    if(F==-1 && R==-1)
        cout<<"Underflow";
    //else if(R==3-1 && F==3-1)
      //  cout<<"empty";

    //else if(F==R)
    //{
      //  F=-1;
        //R=-1;

    //}
    else if(F==3-1)
        F=0;

    else
        F++;
}
void Display()
{
    if(R==-1 && F==-1)
    {
        cout<<"No elements to display!";
    }
     else if(F==2 && R==2)
    {
        cout<<"No elements to display!";
    }

    else
    {
         for(int i = 0; i<=R ; i++)
        {
            cout<<Q[i]<<" ";
        }
    }
}
};


int main()
{
    queue1 Q;
    Q.insertion(2);
    cout<<Q.Q[Q.R];
    Q.F=Q.R;
    Q.insertion(6);
    cout<<Q.Q[Q.R];
    Q.F=Q.R;
    Q.deletion();
    Q.R--;
    Q.F-=2;
    cout<< Q.Q[Q.R];



}
