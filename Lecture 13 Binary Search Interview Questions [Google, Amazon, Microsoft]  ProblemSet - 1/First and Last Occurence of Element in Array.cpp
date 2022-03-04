#include <iostream>
using namespace std;
//The question is to find first and last postion of an element in an array
//We created two function 1)firstOccurence 2)lastOccurence
int firstOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid - 1; //The whole code is same as B.S only difference is this
        }
        else if(key<arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key<arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,3,5};
    int key = 3;
    cout<<"firstOccurence: "<<firstOccurence(arr,n,key)<<endl;
    cout<<"lastOccurence: "<<lastOccurence(arr,n,key)<<endl;
}
