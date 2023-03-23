#Include<iostream>
using namespace std;
struct heap{
int arr[5];
int node;
}maxheap;
void insertion(int value)
{
    if(maxheap.node==4)
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
void deletion()
{
    int temp;
    if(maxheap.node == -1)
    {
        cout<<"No elements to delete!"<<endl;
    }
    else if (maxheap.node==0)
    {
        maxheap.node--;
    }
    else
    {
        temp = maxheap.arr[0];
        maxheap.arr[0] = maxheap.arr[maxheap.node];
        maxheap.node[temp];
        maxheap.node--;
        shiftDown(0);
    }
}
void shiftDown(int x)
{
    int largest;
    largest = x;
    int left = x*2+1;
    int right = x*2+2;
    if(left<=maxheap.node && maxheap.arr[left]>maxheap.arr[x])
        largest = left;
    else if(right<=maxheap.node && maxheap.arr[right]>maxheap.arr[x])
        largest = right;
    if(largest!=x)
    {
        int temp = maxheap.arr[x];
        maxheap.arr[x] = maxheap.arr[largest];
        maxheap.arr[largest] = temp;
        shiftDown(largest);
    }
}
void shiftUp(int x)
{
    int temp;
    int parent = (x-1)/2;
    if(maxheap.node==0)
    {
        return;
    }
    if(maxheap.arr[x]>maxheap.arr[parent])
    {
        temp = maxheap.arr[x];
        maxheap.arr[x] = maxheap.arr[parent];
        maxheap.arr[parent] = temp;
        shiftUp(parent);

    }
}
void heapsort()
{
    int n = maxheap.node;
    for(int i = 0;i<=n;i++)
    {
        stack.push(maxheap.arr[i]);
        enqueue(maxheap.arr[i]);
    }
}



int main()
{

}
