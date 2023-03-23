#include<iostream>
using namespace std;
void Merge(int arr[],int l,int mid,int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    int j = 0;
    int i = 0;
    int k = l;
    for(int i = 0;i<n1;i++)
    {
        a[i] = arr[l+i];
    }
      for(int i = 0;i<n2;i++)
    {
        b[i] = arr[mid+1+i];
    }
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
       arr[k] = a[i];
       k++;
       i++;
    }
    while(j<n2)
    {
       arr[k] = b[j];
       k++;
       j++;
    }


}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    Merge(arr,l,mid,r);}
}




int main()
{
    int ARR[10]={1,6,8,5,4,9,7,2,3,10};
    mergeSort(ARR,0,9);
    for(int i = 0;i <= 9 ;i++)
    {
        cout<<ARR[i]<<" ";
    }

}
