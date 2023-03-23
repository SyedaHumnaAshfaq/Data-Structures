#include<iostream>
#include<string>
using namespace std;
struct stack1{
    char S[25];
    int top;
    char temp;
void push(char value)
{
    if(top==25)
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

    cout<<"Please enter an infix expression";
    string exp;
    cin>>exp;
    stc.top=-1;
    for(int i = 0;i < exp.size();i++)
    {
        if(exp[i]!='+' && exp[i]!='-' && exp[i]!='*' && exp[i]!= '/' && exp[i]!='^' && exp[i]!= '(' && exp[i]!= ')' )
        {
            cout<<exp[i];
        }
        else if(exp[i]=='(')
        {
            stc.push(exp[i]);
            //cout<<stc.S[stc.top];
        }
        else if(exp[i]==')')
        {
            do
            {
                stc.pop();
                if(stc.temp!='(')
                cout<<stc.temp;
            }
            while(stc.temp!='(');

        }
        else if(exp[i]=='+' || exp[i]== '-' || exp[i]=='*' || exp[i]=='/' || exp[i]=='^')
        {

            if(stc.top==-1)
            {
                stc.push(exp[i]);
                //cout<<stc.S[stc.top];
            }
            else
            {
                if(exp[i]=='^')
                {
                    //if(stc.S[stc.top]=='*' || '/' || '%' || '+' || '-')
                    stc.push(exp[i]);
                }
                else if(exp[i]=='*' || exp[i]=='/' || exp[i]=='%')
                {
                    while(stc.S[stc.top]=='^' || stc.S[stc.top]=='*' || stc.S[stc.top]=='/' || stc.S[stc.top]=='%')
                    //{if(stc.S[stc.top]=='^')
                    {
                        stc.pop();
                        cout<<stc.temp;
                    }
                    stc.push(exp[i]);
                    if(stc.S[stc.top]=='+' || stc.S[stc.top]=='-' || stc.S[stc.top]=='(')
                    {
                        stc.push(exp[i]);
                    }
                    //}
                }
                else if(exp[i]=='+' || exp[i]=='-')
                {
                    while (stc.S[stc.top]=='^' || stc.S[stc.top]=='*' || stc.S[stc.top]=='/' || stc.S[stc.top]=='%' )
                    {
                        stc.pop();
                        cout<<stc.temp;
                    }

                    while(stc.S[stc.top]=='+' || stc.S[stc.top]=='-')
                    {
                        stc.pop();
                        cout<<stc.temp;
                    }
                    stc.push(exp[i]);
                    if(stc.S[stc.top]=='(')
                    {
                        stc.push(exp[i]);
                    }


                }

            }
        }


    }
    while(stc.top!=-1)
    {
        stc.pop();
        cout<<stc.temp;
    }
return(0);
}
