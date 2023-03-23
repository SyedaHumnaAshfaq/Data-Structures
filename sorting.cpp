#include<iostream>
using namespace std;
struct stack1{
int S[10];
int top;
void push(int value)
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
        int temp=S[top];
        cout<<temp;
        top--;
    }

}
}mystack;





struct heap
{
    int arr[10];
    int node;
}maxheap;
void Insert(int value);
void ShiftUp(int value);
void Delete();
void shiftdown(int x);
void sorting(int arr[]);
void heapify(int arr[], int n, int i);


void Insert(int value)
{
    if(maxheap.node==9)
    {
        cout<<"Overflow";
    }
    else
    {
        maxheap.node++;
        maxheap.arr[maxheap.node] = value;
        ShiftUp(maxheap.node);
    }
}

void ShiftUp(int x)
{
    int temp;
    int parentnode = (x-1)/2;
    if(maxheap.node == 0)
    {
        return;
    }
    else if(maxheap.arr[x]>maxheap.arr[parentnode]){
        temp = maxheap.arr[x];
        maxheap.arr[x] = maxheap.arr[parentnode];
        maxheap.arr[parentnode]=temp;
        ShiftUp(parentnode);
    }
}
void Delete()
{
    if(maxheap.node==-1)
    {
        cout<<"underflow";
    }
    else{
        int temp = maxheap.arr[0];
        maxheap.arr[0] = maxheap.arr[maxheap.node];
        maxheap.arr[maxheap.node] = temp;
        maxheap.node--;
        shiftdown(0);

    }
}
void shiftdown(int x)
{
    int left = x*2+1;
    int right = x*2+2;
    int highest = maxheap.arr[left]>maxheap.arr[right] ? left:right;
    if(maxheap.arr[x]<maxheap.arr[highest])
    {
        int temp = maxheap.arr[x];
        maxheap.arr[x] = maxheap.arr[highest];
        maxheap.arr[highest] = temp;


    if(maxheap.arr[left]>maxheap.arr[right])
    {
        x++;

    }
    else{
        x = x+2;
    }
    shiftdown(x);
    }

}
void heapify(int arr[], int sizeArray, int root)
{


    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < sizeArray && arr[left] > arr[largest])
        largest = left;


    if (right < sizeArray && arr[right] > arr[largest])
        largest = right;


    if (largest != root) {
        swap(arr[root], arr[largest]);
        heapify(arr, sizeArray, largest);
    }
}


void heapSort(int arr[], int sizeArray)
{

    mystack.top = -1;
    for (int i = sizeArray - 1; i >= 0; i--) {

        swap(arr[0], arr[i]);

        mystack.push(arr[i]);
        heapify(arr, i, 0);
    }


}

int main()
{
    maxheap.node= -1;
    Insert(2);
    Insert(3);
    Insert(6);
    Insert(1);
    Insert(8);
    Insert(9);
    Insert(7);
    Insert(10);
    Insert(4);
    Insert(5);
    cout<<"normal heap tree"<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<maxheap.arr[i]<<" ";
    }
    cout<<endl<<"sorted heap tree"<<endl;
    heapSort(maxheap.arr,10);
    for(int i=0;i<10;i++)
    {
        mystack.pop();
        cout<<" ";
    }


}











