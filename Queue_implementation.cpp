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
    queue1 Q1;
    Q1.R=-1;
    Q1.F=-1;
    Q1.insertion(7);
    //cout<<Q1.Q[0]<<endl;
    Q1.insertion(8);
    //cout<<Q1.Q[1]<<endl;
    Q1.insertion(9);
    //cout<<Q1.Q[2]<<endl;
    //Q1.deletion();
    //cout<< Q1.F << endl;
    Q1.deletion();
    //cout<<Q1.F << endl;
    //Q1.deletion();
    //cout<<Q1.F;

    //Q1.deletion();
    //cout<<Q1.F;
    //Q1.deletion();
    //cout<<Q1.F;
    Q1.insertion(48);
    //cout<<Q1.Q[0]<<endl;
    Q1.Display();


}
