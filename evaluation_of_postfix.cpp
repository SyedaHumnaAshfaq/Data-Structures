#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct stack1{
char S[30];
int top;
char temp;
void push(char value)
{
    if(top==30)
        {cout<<"Stack overflow";}
    else
    {top++;
     S[top]=value;}

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
    stack1 stc;
    string exp;
    cout<<"Please enter a postfix expression!";
    cin>>exp;
    stc.top=-1;
    for(int i=0;i<exp.size();i++)
    {
        if(exp[i]!='+' && exp[i]!='-' && exp[i]!='*' && exp[i]!= '/' && exp[i]!='^' )
        {
            stc.push(exp[i]);
            //cout<<stc.S[stc.top];
        }
        else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]== '/' || exp[i]=='^' )
        {
            //cout<<exp[i];//623+-382/+*2^3+

            if(stc.top>=1)
            {
                //cout<<stc.top;
                stc.pop();
                int op1 = stc.temp - '0';


                //cout<<op1;
                stc.pop();
                int op2 = stc.temp - '0';


                if(exp[i]=='+')
                {
                    int sum=op1+op2;

                    //cout<<sum;
                    stc.push(sum);
                    //cout<<stc.S[stc.top];
                }
                else if(exp[i]=='-')
                {
                    int sub=op2-op1;
                    //cout<<sub;
                    stc.push(sub);

                }
                else if(exp[i]=='*')
                {
                    int mult=op2*op1;
                    //cout<<mult;
                    stc.push(mult  );

                }
                else if(exp[i]=='/')
                {
                    int div=op2/op1;
                    //cout<<div;
                    stc.push(div);

                }
                else if(exp[i]=='^')
                {
                    int expo= pow(op2,op1);
                    //cout<<expo;
                    stc.push(expo);

                }

            }
            else
            {
                cout<<"Error";
            }
        }
    }
    if(stc.top>0)
    {
        cout<<"Stack has more than one element";
    }

    stc.pop();
    cout<<stc.temp - '0';

return(0);




}

