#include <iostream>
using namespace std;
//The problem is to find the maximum value in an array that is in the 
//form of mountain ... We have find mountain peak
int peakIndexInMountainArray(int arr[], int n) 
{
    int start = 0, end = n - 1;
    int mid = start + (end - start)/2;
    
    while(start<=end)   //---> also we can do (start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start = mid + 1;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])  
        {
            return mid;   //---> Without using two else we can use one else and write
                        //---> end = mid;
        }
        else if(arr[mid]>arr[mid+1])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {0,2,5,0};
	cout<<peakIndexInMountainArray(arr,n);
}
