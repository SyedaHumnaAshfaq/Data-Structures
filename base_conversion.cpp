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
        cout<<temp;
        top--;
    }

}
};


int main()
{
    stack1 second_stack;
    second_stack.top = -1;
    int number;
    int remainder;
    cout<<"Please enter a decimal number.";
    cin>>number;

    do{

        remainder = number%2;
        number = number/2;
        second_stack.push(remainder);

    }
    while(number>0);
    while(second_stack.top>-1)
    {
        second_stack.pop();

    }

return(0);
    }







