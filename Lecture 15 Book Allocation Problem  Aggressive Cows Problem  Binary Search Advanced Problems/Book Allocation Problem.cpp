#include<iostream>
using namespace std;
//The problem is Book Allocation problem
//We have given an array { 10, 20, 30, 40 }
//Number of pages in each arr[i] of that Book
//We have to find maximum number of pages assigned to a student is minimum
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i=0; i<n; i++)
    {
        if(pageSum + arr[i]<=mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>m || arr[i]>mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    // Write your code here.
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int n = 4;
    int arr[n] = {12,34,67,90};
    int m = 2;
    cout<<allocateBooks(arr, n, m);
}