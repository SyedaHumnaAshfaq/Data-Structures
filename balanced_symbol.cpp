#include<iostream>
#include<string>
using namespace std;

struct stack1{
char S[10];
int top;
char temp;
//int temp = S[top];
void push(char value)
{
    if(top==10)
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
        temp=S[top];
        //cout<<temp;
        top--;
    }

}
};


int main()
{
    //Balanced symbol algo
    stack1 third_stack;
    third_stack.top=-1;
    int balance;
    string expression;
    cout<<endl<<"Please enter an expression.";
    cin>>expression;
    for(int i=0;i<expression.size();i++)
    {
        if(expression[i]=='{' || expression[i]=='[' || expression[i]=='(')
            {
                third_stack.push(expression[i]);
                cout<<third_stack.S[third_stack.top]<<endl;

            }
    }

    for(int j=0; j<expression.size();j++)
    {
        if(expression[j]=='}' || expression[j]==']' || expression[j]==')')
            {
                third_stack.pop();
                cout<<third_stack.temp;
                third_stack.top++;
                if((third_stack.temp=='(' && expression[j]==')'))
                    {
                            for(int j=0; j<expression.size();j++)
                            {
                                 if((third_stack.temp=='{' && expression[j]=='}'))
                                    {
                                        for(int j=0; j<expression.size();j++)
                                        {
                                           if((third_stack.temp=='[' && expression[j]==']'))
                                           {
                                               if(third_stack.top>-1)
                                                  cout<<"unbalanced";
                                               else
                                                  cout<<"balanced";
                                           }
                                        }
                                    }
                            }




                    }
            }


    }
              return(0);

}
















