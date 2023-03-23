#include<iostream>
using namespace std;
int binarysearch(int arr[],int target)
{
    int left = 0;
    int right = 10-1;

    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] == target)
        {
            cout<< mid;

            break;
        }
        else if(target<arr[mid])
        {
            right = mid-1;

        }
        else if(target>arr[mid])
        {
            left = mid+1;
        }
        else{
        cout<<"Target element not present!";
        break;

    }




}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    binarysearch(arr,12);

}
