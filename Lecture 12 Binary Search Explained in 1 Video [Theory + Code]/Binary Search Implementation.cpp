#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int key)   //T.C of binary Search O(logn)
//always B.S works on monotonic functions
{
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;  //chalaki wali chiz, for big integer values
    
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start = mid + 1;  // Go to right part if key is greater than mid
        }
        else
        {
            end = mid - 1;  // Go to left part if key is smaller than mid
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int key = 4;
    cout<<binarySearch(arr,n,key);
}
