#include <iostream>
using namespace std;
//The program is to search in a sorted and rotated array
//We first find pivot in the array
//after that binarySearch either 0 to pivot-1 or pivot+1 to n
//to search the element
int binarySearch(int A[], int l, int h, int key)
{
    int start = l, end = h;
    int mid = start + (end - start)/2;
    
    while(start<=end)
    {
        if(A[mid]==key) 
        {
            return mid;
        }
        else if(key<A[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int search(int A[], int l, int h, int key)
{
    int start = l, end = h;
    int mid = start + (end - start)/2;
    
    while(start<end)
    {
        if(A[mid]>=A[0]) 
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    
    int pivot = start;
    
    if(key>=A[pivot] && key<=A[h])
    {
        return binarySearch(A, pivot+1, h, key);
    }
    else
    {
        return binarySearch(A, l, pivot-1, key);
    }
}

int main()
{
    int n = 9;
	int arr[n] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
	int key = 10;
	cout<<search(arr,0,n-1,key);
}
