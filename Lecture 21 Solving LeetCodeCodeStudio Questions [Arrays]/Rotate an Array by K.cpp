#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//Program to rotate an array by K
void rotate(vector<int>& nums, int k) 
{
    vector<int> arr(nums.size());
    
    for(int i=0; i<nums.size(); i++)
    {
        arr[(i+k)%nums.size()] = nums[i];
    }
    
    nums = arr;
}
    
int main()
{
    vector<int> arr {1,2,3,4,5,6,7};
    int k = 3;
    rotate(arr,k);
	
	for(int i=0; i<arr.size(); i++)
	{
	    cout<<arr[i]<<" ";
	}
}
