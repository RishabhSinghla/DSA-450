#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//Program to place all zeros to end of array
void moveZeroes(int nums[], int n) {
    int i = 0;
    
    for(int j=0; j< n; j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}
    
int main()
{
    int arr[] = {0,1,0,3,12};
    int n = 5;
    moveZeroes(arr,n);
	
	for(int i=0; i<n; i++)
	{
	    cout<<arr[i]<<" ";
	}
}
