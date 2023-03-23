#include<iostream>
using namespace std;
struct stack1{
int S[3];
int top;
int temp;
void push(int value)
{
    if(top==3)
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
  stack1 A;
  stack1 B;
  stack1 C;
  A.top=-1;
  B.top=-1;
  C.top=-1;
  A.push(3);
  A.push(2);
  A.push(1);

  cout<<"METHOD TO SOLVE THE PUZZLE"<<endl<<endl;
  while(C.top!=2)
  {
      if((C.top==-1 || B.top==-1) && A.top!=1)
  {
      C.push(A.S[A.top]);
      cout<<"Move disk "<<A.S[A.top]<<"from A to C"<<endl;
      A.pop();

  }
  else if(B.top==-1 && C.top==0)
  {
      B.push(A.S[A.top]);
      cout<<"Move disk "<<A.S[A.top]<< "from A to B"<<endl;
      A.pop();
  }
  else if(B.S[B.top]>C.S[C.top] && A.top==0)
  {
      B.push(C.S[C.top]);
      cout<<"Move disk "<< C.S[C.top]<<"from C to B"<<endl;
      C.pop();
  }
  else if(B.S[B.top]<C.S[C.top] && A.top==0)
  {
      C.push(B.S[B.top]);
      cout<<"Move disk "<< B.S[B.top]<<"from B to C"<<endl;
      B.pop();
  }
  else if(A.top==-1 && C.top==0)
  {
      A.push(B.S[B.top]);
      cout<<"Move disk "<<B.S[B.top]<<"from B to A"<<endl;
      B.pop();
  }


  }
  cout<<endl<<"FINAL OUTPUT"<<endl;
  cout<<"At index 2 in C= "<<C.S[C.top]<<endl;
  C.pop();
  cout<<"At index 1 in C= "<<C.S[C.top]<<endl;
  C.pop();
  cout<<"At index 0 in C= "<<C.S[C.top]<<endl;
  return 0;


}
