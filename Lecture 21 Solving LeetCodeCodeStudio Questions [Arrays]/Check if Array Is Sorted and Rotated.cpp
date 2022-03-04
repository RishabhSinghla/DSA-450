#include <iostream>
#include<bits/stdc++.h>
//Check if Array Is Sorted and Rotated
using namespace std;
bool check(vector<int>& nums) 
{
    int count = 0;
    
    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i-1]>nums[i])  //There will only be 0 or 1 pair that i-1 > i for an array to be sorted and rotated
                                //so we will go and check the count;
        {
            count++;    
        }
    }
    
    if(nums[nums.size()-1] > nums[0])  //check for last and first element
   {
       count++;
   }
           
    return count<=1;
}
    
int main()
{
    vector<int> arr {3,4,5,1,2};
    cout<<check(arr);
}
