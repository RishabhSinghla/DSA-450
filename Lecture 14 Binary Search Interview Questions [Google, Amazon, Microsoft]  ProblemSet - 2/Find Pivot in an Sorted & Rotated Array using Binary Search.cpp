#include <iostream>
using namespace std;
//The problem is to find the PIVOT in sorted and rotated array
// We have to find the minimum value
 int Pivot(int nums[], int n) {
    int start = 0, end = n - 1;
    int mid = start + (end - start)/2;
    
    while(start<end)
    {
        if(nums[mid]>=nums[0]) //we compare with first element as all the previous elements would 
        // be smaller than mid element.
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main()
{
    int n = 5;
    int arr[n] = {8,10,17,1,3};
	cout<<Pivot(arr,n);
}
