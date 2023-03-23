#include<iostream>
using namespace std;

void swap(int arr[],int l,int r)
{
    int temp = arr[l];
    arr[l]=arr[r];
    arr[r] = temp;
}



int Partition(int arr[],int l,int r)
{
    int pivot = arr[l];
    int i = r+1;
    for(int j = r;j>l;j--)
    {
        if(arr[j]>pivot)
        {
            i--;
            swap(arr,i,j);
        }
    }
    swap(arr,i-1,l);
    return i-1;
}


void quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi = Partition(arr,l,r);
        quick_sort(arr,l,pi-1);
        quick_sort(arr,pi+1,r);
    }
}





int main()
{
    int arr[10] = {5,4,7,9,8,6,3,1,2,10};
    quick_sort(arr,0,9);
    for(int i = 0;i<=9;i++)
    {
        cout<<arr[i]<<" ";
    }

}
