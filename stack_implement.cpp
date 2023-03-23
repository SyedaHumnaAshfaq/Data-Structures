#include<iostream>
#include<string>
using namespace std;
struct stack1{
int S[5];
int top;
void push(int value)
{
    if(top==5)
        {cout<<"Stack overflow";}
    else
    {

        top++;
        S[top]=value;


    }

}
void pop()
{
    if(top==-1)
       {
         cout<<"Stack underflow";
       }
    else{
        int temp=S[top];
        cout<<"after popping "<<temp<<endl;
        top--;
    }

}
};


int main()
{
    stack1 first_stack;
    first_stack.top=-1;
    first_stack.push(5);
    first_stack.push(10);
    first_stack.push(12);
    first_stack.push(14);
    first_stack.push(20);
    for(int i=0;i<5;i++)
    {
        cout<<first_stack.S[i]<<endl;

    }

    first_stack.pop();
    first_stack.pop();
    first_stack.pop();
    first_stack.pop();
    first_stack.pop();
    return 0;
}
